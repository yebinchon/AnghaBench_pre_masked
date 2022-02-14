
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ mbox_off; } ;
struct nfp_net {TYPE_1__ tlv_caps; } ;
struct nfp_abm_link {TYPE_3__* abm; struct nfp_net* vnic; } ;
struct TYPE_6__ {unsigned int prio_map_len; TYPE_2__* app; } ;
struct TYPE_5__ {int cpp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct nfp_net*,unsigned int) ;
 int FUNC_2 (struct nfp_net*,int const) ;
 int FUNC_3 (struct nfp_net*,scalar_t__,int ) ;
 int FUNC_4 (struct nfp_net*,scalar_t__,unsigned int) ;

int FUNC_5(struct nfp_abm_link *VAR_3, u32 *VAR_4)
{
 const u32 VAR_5 = VAR_2;
 struct nfp_net *VAR_6 = VAR_3->vnic;
 unsigned int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_3->abm->prio_map_len);
 if (VAR_8)
  return VAR_8;


 FUNC_4(VAR_6, VAR_6->tlv_caps.mbox_off + VAR_1,
    VAR_3->abm->prio_map_len);

 for (VAR_7 = 0; VAR_7 < VAR_3->abm->prio_map_len; VAR_7 += sizeof(u32))
  FUNC_3(VAR_6, VAR_6->tlv_caps.mbox_off + VAR_0 + VAR_7,
     VAR_4[VAR_7 / sizeof(u32)]);

 VAR_8 = FUNC_2(VAR_6, VAR_5);
 if (VAR_8)
  FUNC_0(VAR_3->abm->app->cpp,
   "setting DSCP -> VQ map failed with error %d\n", VAR_8);
 return VAR_8;
}
