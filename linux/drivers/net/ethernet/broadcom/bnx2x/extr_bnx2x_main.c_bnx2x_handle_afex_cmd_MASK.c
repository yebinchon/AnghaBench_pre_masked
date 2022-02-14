
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int rate; int quota; } ;
struct rate_shaping_vars_per_vn {TYPE_1__ vn_counter; } ;
struct cmng_init_input {int* vnic_max_rate; } ;
struct bnx2x {int* mf_config; int afex_def_vlan_tag; int afex_vlan_mode; } ;
struct afex_stats {int dummy; } ;
struct TYPE_4__ {int afex_config; int e1hov_tag; int config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 size_t FUNC_2 (struct bnx2x*) ;
 size_t FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (int ,char*,int,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (struct bnx2x*,int ) ;
 int FUNC_6 (struct bnx2x*,int,int) ;
 int VAR_18 ;
 int FUNC_7 (struct bnx2x*,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct bnx2x*,int,size_t,int*) ;
 int * VAR_22 ;
 int * VAR_23 ;
 int * VAR_24 ;
 int FUNC_10 (struct bnx2x*,void*,int) ;
 scalar_t__ FUNC_11 (struct bnx2x*,int,int,int) ;
 int FUNC_12 (struct bnx2x*,int ,int,int) ;
 int FUNC_13 (struct bnx2x*,size_t,struct cmng_init_input*) ;
 int FUNC_14 (struct bnx2x*,int ,int ) ;
 int FUNC_15 (struct bnx2x*) ;
 TYPE_2__* VAR_25 ;

__attribute__((used)) static void FUNC_16(struct bnx2x *VAR_26, u32 VAR_27)
{
 struct afex_stats VAR_28;
 u32 VAR_29 = FUNC_0(VAR_26);
 u32 VAR_30;
 u16 VAR_31;
 u32 VAR_32;
 u16 VAR_33;
 u8 VAR_34;
 u8 VAR_35;
 u32 VAR_36, VAR_37, VAR_38, VAR_39, VAR_40;

 if (VAR_27 & VAR_3) {
  VAR_37 = FUNC_7(VAR_26, VAR_22[FUNC_2(VAR_26)]);
  FUNC_4(VAR_1,
     "afex: got MCP req LISTGET_REQ for vifid 0x%x\n", VAR_37);
  FUNC_12(VAR_26, VAR_19, VAR_37, 0);
 }

 if (VAR_27 & VAR_4) {
  VAR_37 = FUNC_7(VAR_26, VAR_22[FUNC_2(VAR_26)]);
  VAR_38 = FUNC_7(VAR_26, VAR_23[FUNC_2(VAR_26)]);
  FUNC_4(VAR_1,
     "afex: got MCP req LISTSET_REQ for vifid 0x%x addrs 0x%x\n",
     VAR_37, VAR_38);
  FUNC_12(VAR_26, VAR_20, VAR_37,
            VAR_38);
 }

 if (VAR_27 & VAR_5) {
  VAR_36 = FUNC_7(VAR_26,
   VAR_24[FUNC_2(VAR_26)]);
  VAR_39 = FUNC_7(VAR_26,
   VAR_22[FUNC_2(VAR_26)]);

  FUNC_4(VAR_1,
     "afex: got MCP req STATSGET_REQ, write to addr 0x%x\n",
     VAR_36);

  FUNC_10(VAR_26, (void *)&VAR_28, VAR_39);


  for (VAR_40 = 0; VAR_40 < (sizeof(struct afex_stats)/sizeof(u32)); VAR_40++)
   FUNC_6(VAR_26, VAR_36 + VAR_40*sizeof(u32),
          *(((u32 *)(&VAR_28))+VAR_40));


  FUNC_14(VAR_26, VAR_2, 0);
 }

 if (VAR_27 & VAR_6) {
  VAR_30 = FUNC_5(VAR_26, VAR_25[VAR_29].config);
  VAR_26->mf_config[FUNC_3(VAR_26)] = VAR_30;
  FUNC_4(VAR_1,
     "afex: got MCP req VIFSET_REQ, mf_config 0x%x\n",
     VAR_30);


  if (!(VAR_30 & VAR_15)) {

   struct cmng_init_input VAR_41;
   struct rate_shaping_vars_per_vn VAR_42;
   size_t VAR_43 = sizeof(struct rate_shaping_vars_per_vn);
   u32 VAR_44 = VAR_0 +
       FUNC_8(FUNC_1(VAR_26));

   VAR_26->mf_config[FUNC_3(VAR_26)] = VAR_30;

   FUNC_13(VAR_26, FUNC_3(VAR_26), &VAR_41);
   VAR_42.vn_counter.rate =
    VAR_41.vnic_max_rate[FUNC_3(VAR_26)];
   VAR_42.vn_counter.quota =
    (VAR_42.vn_counter.rate *
     VAR_18) / 8;

   FUNC_9(VAR_26, VAR_44, VAR_43, (u32 *)&VAR_42);


   VAR_33 =
    (FUNC_5(VAR_26, VAR_25[VAR_29].e1hov_tag) &
     VAR_13) >>
    VAR_14;
   VAR_31 =
    (FUNC_5(VAR_26, VAR_25[VAR_29].e1hov_tag) &
     VAR_9) >>
    VAR_12;
   VAR_32 = (VAR_30 &
         VAR_16) >>
        VAR_17;
   VAR_31 |= (VAR_32 << VAR_21);
   VAR_35 =
    (FUNC_5(VAR_26,
        VAR_25[VAR_29].afex_config) &
     VAR_10) >>
    VAR_11;
   VAR_34 =
    (FUNC_5(VAR_26,
        VAR_25[VAR_29].afex_config) &
     VAR_7) >>
    VAR_8;


   if (FUNC_11(VAR_26, VAR_33, VAR_31,
         VAR_34))
    return;

   VAR_26->afex_def_vlan_tag = VAR_31;
   VAR_26->afex_vlan_mode = VAR_35;
  } else {

   FUNC_15(VAR_26);


   FUNC_11(VAR_26, 0xFFFF, 0, 0);


   VAR_26->afex_def_vlan_tag = -1;
  }
 }
}
