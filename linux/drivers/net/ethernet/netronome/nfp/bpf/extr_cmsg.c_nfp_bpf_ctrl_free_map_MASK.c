
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct nfp_bpf_map {int tid; } ;
struct nfp_app_bpf {int ccm; } ;
struct cmsg_req_map_free_tbl {int tid; } ;
struct cmsg_reply_map_free_tbl {int reply_hdr; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (struct nfp_app_bpf*,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct nfp_app_bpf*,int) ;
 int FUNC_5 (struct nfp_app_bpf*,int *) ;
 struct sk_buff* FUNC_6 (int *,struct sk_buff*,int ,int) ;

void FUNC_7(struct nfp_app_bpf *VAR_1, struct nfp_bpf_map *VAR_2)
{
 struct cmsg_reply_map_free_tbl *VAR_3;
 struct cmsg_req_map_free_tbl *VAR_4;
 struct sk_buff *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(VAR_1, sizeof(*VAR_4));
 if (!VAR_5) {
  FUNC_1(VAR_1, "leaking map - failed to allocate msg\n");
  return;
 }

 VAR_4 = (void *)VAR_5->data;
 VAR_4->tid = FUNC_2(VAR_2->tid);

 VAR_5 = FUNC_6(&VAR_1->ccm, VAR_5, VAR_0,
      sizeof(*VAR_3));
 if (FUNC_0(VAR_5)) {
  FUNC_1(VAR_1, "leaking map - I/O error\n");
  return;
 }

 VAR_3 = (void *)VAR_5->data;
 VAR_6 = FUNC_5(VAR_1, &VAR_3->reply_hdr);
 if (VAR_6)
  FUNC_1(VAR_1, "leaking map - FW responded with: %d\n", VAR_6);

 FUNC_3(VAR_5);
}
