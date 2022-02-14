
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvme_tcp_request {int offset; int data_sent; int state; struct nvme_tcp_data_pdu* pdu; struct nvme_tcp_queue* queue; } ;
struct nvme_tcp_queue {int snd_hash; scalar_t__ data_digest; int sock; scalar_t__ hdr_digest; } ;
struct nvme_tcp_data_pdu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int,int) ;
 int FUNC_2 (int ,struct nvme_tcp_data_pdu*,int) ;
 int FUNC_3 (struct nvme_tcp_queue*) ;
 int FUNC_4 (struct nvme_tcp_request*,int ) ;
 scalar_t__ FUNC_5 (struct nvme_tcp_data_pdu*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct nvme_tcp_data_pdu*) ;

__attribute__((used)) static int FUNC_8(struct nvme_tcp_request *VAR_5)
{
 struct nvme_tcp_queue *VAR_6 = VAR_5->queue;
 struct nvme_tcp_data_pdu *VAR_7 = VAR_5->pdu;
 u8 VAR_8 = FUNC_3(VAR_6);
 int VAR_9 = sizeof(*VAR_7) - VAR_5->offset + VAR_8;
 int VAR_10;

 if (VAR_6->hdr_digest && !VAR_5->offset)
  FUNC_2(VAR_6->snd_hash, VAR_7, sizeof(*VAR_7));

 VAR_10 = FUNC_1(VAR_6->sock, FUNC_7(VAR_7),
   FUNC_5(VAR_7) + VAR_5->offset, VAR_9,
   VAR_1 | VAR_2);
 if (FUNC_6(VAR_10 <= 0))
  return VAR_10;

 VAR_9 -= VAR_10;
 if (!VAR_9) {
  VAR_5->state = VAR_3;
  if (VAR_6->data_digest)
   FUNC_0(VAR_6->snd_hash);
  if (!VAR_5->data_sent)
   FUNC_4(VAR_5, VAR_4);
  return 1;
 }
 VAR_5->offset += VAR_10;

 return -VAR_0;
}
