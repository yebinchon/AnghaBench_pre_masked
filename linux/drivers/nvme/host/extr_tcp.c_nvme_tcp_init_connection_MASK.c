
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_tcp_queue {scalar_t__ hdr_digest; scalar_t__ data_digest; int sock; } ;
struct TYPE_2__ {scalar_t__ type; int hlen; scalar_t__ plen; scalar_t__ pdo; } ;
struct nvme_tcp_icresp_pdu {scalar_t__ pfv; int digest; scalar_t__ cpda; TYPE_1__ hdr; scalar_t__ hpda; scalar_t__ maxr2t; } ;
struct nvme_tcp_icreq_pdu {scalar_t__ pfv; int digest; scalar_t__ cpda; TYPE_1__ hdr; scalar_t__ hpda; scalar_t__ maxr2t; } ;
struct msghdr {int msg_flags; } ;
struct kvec {int iov_len; struct nvme_tcp_icresp_pdu* iov_base; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,struct msghdr*,struct kvec*,int,int,int ) ;
 int FUNC_3 (int ,struct msghdr*,struct kvec*,int,int) ;
 int FUNC_4 (struct nvme_tcp_icresp_pdu*) ;
 struct nvme_tcp_icresp_pdu* FUNC_5 (int,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct msghdr*,int ,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (struct nvme_tcp_queue*) ;
 int FUNC_9 (char*,int ,scalar_t__,...) ;

__attribute__((used)) static int FUNC_10(struct nvme_tcp_queue *VAR_8)
{
 struct nvme_tcp_icreq_pdu *VAR_9;
 struct nvme_tcp_icresp_pdu *VAR_10;
 struct msghdr VAR_11 = {};
 struct kvec VAR_12;
 bool VAR_13, VAR_14;
 int VAR_15;

 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_2);
 if (!VAR_10) {
  VAR_15 = -VAR_1;
  goto free_icreq;
 }

 VAR_9->hdr.type = VAR_6;
 VAR_9->hdr.hlen = sizeof(*VAR_9);
 VAR_9->hdr.pdo = 0;
 VAR_9->hdr.plen = FUNC_1(VAR_9->hdr.hlen);
 VAR_9->pfv = FUNC_0(VAR_5);
 VAR_9->maxr2t = 0;
 VAR_9->hpda = 0;
 if (VAR_8->hdr_digest)
  VAR_9->digest |= VAR_4;
 if (VAR_8->data_digest)
  VAR_9->digest |= VAR_3;

 VAR_12.iov_base = VAR_9;
 VAR_12.iov_len = sizeof(*VAR_9);
 VAR_15 = FUNC_3(VAR_8->sock, &VAR_11, &VAR_12, 1, VAR_12.iov_len);
 if (VAR_15 < 0)
  goto free_icresp;

 FUNC_7(&VAR_11, 0, sizeof(VAR_11));
 VAR_12.iov_base = VAR_10;
 VAR_12.iov_len = sizeof(*VAR_10);
 VAR_15 = FUNC_2(VAR_8->sock, &VAR_11, &VAR_12, 1,
   VAR_12.iov_len, VAR_11.msg_flags);
 if (VAR_15 < 0)
  goto free_icresp;

 VAR_15 = -VAR_0;
 if (VAR_10->hdr.type != VAR_7) {
  FUNC_9("queue %d: bad type returned %d\n",
   FUNC_8(VAR_8), VAR_10->hdr.type);
  goto free_icresp;
 }

 if (FUNC_6(VAR_10->hdr.plen) != sizeof(*VAR_10)) {
  FUNC_9("queue %d: bad pdu length returned %d\n",
   FUNC_8(VAR_8), VAR_10->hdr.plen);
  goto free_icresp;
 }

 if (VAR_10->pfv != VAR_5) {
  FUNC_9("queue %d: bad pfv returned %d\n",
   FUNC_8(VAR_8), VAR_10->pfv);
  goto free_icresp;
 }

 VAR_14 = !!(VAR_10->digest & VAR_3);
 if ((VAR_8->data_digest && !VAR_14) ||
     (!VAR_8->data_digest && VAR_14)) {
  FUNC_9("queue %d: data digest mismatch host: %s ctrl: %s\n",
   FUNC_8(VAR_8),
   VAR_8->data_digest ? "enabled" : "disabled",
   VAR_14 ? "enabled" : "disabled");
  goto free_icresp;
 }

 VAR_13 = !!(VAR_10->digest & VAR_4);
 if ((VAR_8->hdr_digest && !VAR_13) ||
     (!VAR_8->hdr_digest && VAR_13)) {
  FUNC_9("queue %d: header digest mismatch host: %s ctrl: %s\n",
   FUNC_8(VAR_8),
   VAR_8->hdr_digest ? "enabled" : "disabled",
   VAR_13 ? "enabled" : "disabled");
  goto free_icresp;
 }

 if (VAR_10->cpda != 0) {
  FUNC_9("queue %d: unsupported cpda returned %d\n",
   FUNC_8(VAR_8), VAR_10->cpda);
  goto free_icresp;
 }

 VAR_15 = 0;
free_icresp:
 FUNC_4(VAR_10);
free_icreq:
 FUNC_4(VAR_9);
 return VAR_15;
}
