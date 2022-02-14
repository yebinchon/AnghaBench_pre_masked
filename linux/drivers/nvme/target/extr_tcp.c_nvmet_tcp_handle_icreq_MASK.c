
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int hlen; void* plen; scalar_t__ pdo; int type; } ;
struct nvme_tcp_icresp_pdu {int digest; scalar_t__ cpda; void* maxdata; int pfv; TYPE_3__ hdr; } ;
struct TYPE_5__ {int plen; } ;
struct nvme_tcp_icreq_pdu {scalar_t__ pfv; scalar_t__ hpda; int digest; TYPE_2__ hdr; } ;
struct TYPE_4__ {struct nvme_tcp_icresp_pdu icresp; struct nvme_tcp_icreq_pdu icreq; } ;
struct nvmet_tcp_queue {int hdr_digest; int data_digest; int state; int sock; int idx; TYPE_1__ pdu; } ;
struct msghdr {int dummy; } ;
struct kvec {int iov_len; struct nvme_tcp_icresp_pdu* iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,struct msghdr*,struct kvec*,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nvme_tcp_icresp_pdu*,int ,int) ;
 int VAR_5 ;
 int FUNC_5 (struct nvmet_tcp_queue*) ;
 int FUNC_6 (struct nvmet_tcp_queue*) ;
 int FUNC_7 (struct nvmet_tcp_queue*) ;
 int FUNC_8 (struct nvmet_tcp_queue*) ;
 int FUNC_9 (char*,int,...) ;

__attribute__((used)) static int FUNC_10(struct nvmet_tcp_queue *VAR_6)
{
 struct nvme_tcp_icreq_pdu *VAR_7 = &VAR_6->pdu.icreq;
 struct nvme_tcp_icresp_pdu *VAR_8 = &VAR_6->pdu.icresp;
 struct msghdr VAR_9 = {};
 struct kvec VAR_10;
 int VAR_11;

 if (FUNC_3(VAR_7->hdr.plen) != sizeof(struct nvme_tcp_icreq_pdu)) {
  FUNC_9("bad nvme-tcp pdu length (%d)\n",
   FUNC_3(VAR_7->hdr.plen));
  FUNC_7(VAR_6);
 }

 if (VAR_7->pfv != VAR_4) {
  FUNC_9("queue %d: bad pfv %d\n", VAR_6->idx, VAR_7->pfv);
  return -VAR_0;
 }

 if (VAR_7->hpda != 0) {
  FUNC_9("queue %d: unsupported hpda %d\n", VAR_6->idx,
   VAR_7->hpda);
  return -VAR_0;
 }

 VAR_6->hdr_digest = !!(VAR_7->digest & VAR_3);
 VAR_6->data_digest = !!(VAR_7->digest & VAR_2);
 if (VAR_6->hdr_digest || VAR_6->data_digest) {
  VAR_11 = FUNC_6(VAR_6);
  if (VAR_11)
   return VAR_11;
 }

 FUNC_4(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->hdr.type = VAR_5;
 VAR_8->hdr.hlen = sizeof(*VAR_8);
 VAR_8->hdr.pdo = 0;
 VAR_8->hdr.plen = FUNC_1(VAR_8->hdr.hlen);
 VAR_8->pfv = FUNC_0(VAR_4);
 VAR_8->maxdata = FUNC_1(0xffff);
 VAR_8->cpda = 0;
 if (VAR_6->hdr_digest)
  VAR_8->digest |= VAR_3;
 if (VAR_6->data_digest)
  VAR_8->digest |= VAR_2;

 VAR_10.iov_base = VAR_8;
 VAR_10.iov_len = sizeof(*VAR_8);
 VAR_11 = FUNC_2(VAR_6->sock, &VAR_9, &VAR_10, 1, VAR_10.iov_len);
 if (VAR_11 < 0)
  goto free_crypto;

 VAR_6->state = VAR_1;
 FUNC_5(VAR_6);
 return 0;
free_crypto:
 if (VAR_6->hdr_digest || VAR_6->data_digest)
  FUNC_8(VAR_6);
 return VAR_11;
}
