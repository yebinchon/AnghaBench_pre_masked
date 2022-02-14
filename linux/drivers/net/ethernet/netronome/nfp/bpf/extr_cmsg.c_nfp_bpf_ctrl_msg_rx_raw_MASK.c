
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_ccm_hdr {unsigned int type; } ;
struct nfp_app_bpf {int dummy; } ;
struct nfp_app {struct nfp_app_bpf* priv; } ;
struct cmsg_reply_map_simple {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct nfp_app_bpf*,char*,unsigned int) ;
 int FUNC_1 (struct nfp_app_bpf*,void const*,unsigned int) ;
 scalar_t__ FUNC_2 (int) ;

void
FUNC_3(struct nfp_app *VAR_1, const void *VAR_2, unsigned int VAR_3)
{
 const struct nfp_ccm_hdr *VAR_4 = VAR_2;
 struct nfp_app_bpf *VAR_5 = VAR_1->priv;

 if (FUNC_2(VAR_3 < sizeof(struct cmsg_reply_map_simple))) {
  FUNC_0(VAR_5, "cmsg drop - too short %d!\n", VAR_3);
  return;
 }

 if (VAR_4->type == VAR_0)
  FUNC_1(VAR_5, VAR_2, VAR_3);
 else
  FUNC_0(VAR_5, "cmsg drop - msg type %d with raw buffer!\n",
     VAR_4->type);
}
