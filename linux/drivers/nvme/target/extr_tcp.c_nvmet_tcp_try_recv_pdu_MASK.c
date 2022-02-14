
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct nvme_tcp_hdr {scalar_t__ hlen; int type; } ;
struct TYPE_4__ {struct nvme_tcp_hdr hdr; } ;
struct TYPE_5__ {TYPE_1__ cmd; } ;
struct nvmet_tcp_queue {int offset; scalar_t__ left; TYPE_2__ pdu; scalar_t__ data_digest; scalar_t__ hdr_digest; int sock; } ;
struct msghdr {int msg_flags; } ;
struct kvec {scalar_t__ iov_len; void* iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct msghdr*,struct kvec*,int,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct nvmet_tcp_queue*,TYPE_2__*) ;
 int FUNC_2 (struct nvmet_tcp_queue*) ;
 int FUNC_3 (struct nvmet_tcp_queue*) ;
 scalar_t__ FUNC_4 (struct nvmet_tcp_queue*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct nvmet_tcp_queue*,TYPE_2__*,scalar_t__) ;
 int FUNC_8 (char*,int ,...) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct nvmet_tcp_queue *VAR_4)
{
 struct nvme_tcp_hdr *VAR_5 = &VAR_4->pdu.cmd.hdr;
 int VAR_6;
 struct kvec VAR_7;
 struct msghdr VAR_8 = { .msg_flags = VAR_3 };

recv:
 VAR_7.iov_base = (void *)&VAR_4->pdu + VAR_4->offset;
 VAR_7.iov_len = VAR_4->left;
 VAR_6 = FUNC_0(VAR_4->sock, &VAR_8, &VAR_7, 1,
   VAR_7.iov_len, VAR_8.msg_flags);
 if (FUNC_9(VAR_6 < 0))
  return VAR_6;

 VAR_4->offset += VAR_6;
 VAR_4->left -= VAR_6;
 if (VAR_4->left)
  return -VAR_0;

 if (VAR_4->offset == sizeof(struct nvme_tcp_hdr)) {
  u8 VAR_9 = FUNC_4(VAR_4);

  if (FUNC_9(!FUNC_6(VAR_5->type))) {
   FUNC_8("unexpected pdu type %d\n", VAR_5->type);
   FUNC_3(VAR_4);
   return -VAR_1;
  }

  if (FUNC_9(VAR_5->hlen != FUNC_5(VAR_5->type))) {
   FUNC_8("pdu %d bad hlen %d\n", VAR_5->type, VAR_5->hlen);
   return -VAR_1;
  }

  VAR_4->left = VAR_5->hlen - VAR_4->offset + VAR_9;
  goto recv;
 }

 if (VAR_4->hdr_digest &&
     FUNC_7(VAR_4, &VAR_4->pdu, VAR_4->offset)) {
  FUNC_3(VAR_4);
  return -VAR_2;
 }

 if (VAR_4->data_digest &&
     FUNC_1(VAR_4, &VAR_4->pdu)) {
  FUNC_3(VAR_4);
  return -VAR_2;
 }

 return FUNC_2(VAR_4);
}
