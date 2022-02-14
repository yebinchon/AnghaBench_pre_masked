
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned int mbox_len; } ;
struct nfp_net {TYPE_3__ tlv_caps; } ;
struct nfp_abm_link {struct nfp_abm* abm; struct nfp_net* vnic; } ;
struct nfp_abm {unsigned int prio_map_len; TYPE_2__* app; } ;
struct TYPE_5__ {TYPE_1__* pf; } ;
struct TYPE_4__ {int cpp; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct nfp_abm*) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct nfp_abm_link *VAR_2)
{
 struct nfp_abm *VAR_3 = VAR_2->abm;
 struct nfp_net *VAR_4 = VAR_2->vnic;
 unsigned int VAR_5;

 if (!FUNC_0(VAR_2->abm))
  return 0;

 VAR_5 = VAR_1 + VAR_2->abm->prio_map_len;
 if (VAR_4->tlv_caps.mbox_len < VAR_5) {
  FUNC_1(VAR_3->app->pf->cpp, "vNIC mailbox too small for prio offload: %u, need: %u\n",
   VAR_4->tlv_caps.mbox_len, VAR_5);
  return -VAR_0;
 }

 return 0;
}
