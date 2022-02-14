
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct i40e_dcbx_config {int numapps; TYPE_2__* app; } ;
struct TYPE_3__ {int typelen; } ;
struct i40e_cee_feat_tlv {int tlvinfo; TYPE_1__ hdr; } ;
struct i40e_cee_app_prio {int prio_map; scalar_t__ upper_oui_sel; int protocol; } ;
struct TYPE_4__ {void* protocolid; scalar_t__ selector; scalar_t__ priority; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct i40e_cee_feat_tlv *VAR_7,
       struct i40e_dcbx_config *VAR_8)
{
 u16 VAR_9, VAR_10, VAR_11 = 0;
 struct i40e_cee_app_prio *VAR_12;
 u8 VAR_13;

 VAR_10 = FUNC_1(VAR_7->hdr.typelen);
 VAR_9 = (u16)((VAR_10 & VAR_4) >>
         VAR_5);

 VAR_8->numapps = VAR_9 / sizeof(*VAR_12);

 if (!VAR_8->numapps)
  return;
 if (VAR_8->numapps > VAR_3)
  VAR_8->numapps = VAR_3;

 for (VAR_13 = 0; VAR_13 < VAR_8->numapps; VAR_13++) {
  u8 VAR_14, VAR_15;

  VAR_12 = (struct i40e_cee_app_prio *)(VAR_7->tlvinfo + VAR_11);
  for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
   if (VAR_12->prio_map & FUNC_0(VAR_14))
    break;
  }
  VAR_8->app[VAR_13].priority = VAR_14;


  VAR_15 = (VAR_12->upper_oui_sel & VAR_2);
  switch (VAR_15) {
  case 129:
   VAR_8->app[VAR_13].selector = VAR_0;
   break;
  case 128:
   VAR_8->app[VAR_13].selector = VAR_1;
   break;
  default:

   VAR_8->app[VAR_13].selector = VAR_15;
  }

  VAR_8->app[VAR_13].protocolid = FUNC_1(VAR_12->protocol);

  VAR_11 += sizeof(*VAR_12);
 }
}
