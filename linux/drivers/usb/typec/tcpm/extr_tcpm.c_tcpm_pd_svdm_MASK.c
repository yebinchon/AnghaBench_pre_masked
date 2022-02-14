
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct typec_altmode {int mode; int svid; } ;
struct pd_mode_data {size_t nsvids; size_t svid_index; int * svids; } ;
struct tcpm_port {int nr_snk_vdo; int* snk_vdo; int partner; int data_role; int partner_altmode; int port_altmode; struct pd_mode_data mode_data; } ;
typedef int __le32 ;


 int VAR_0 ;


 int VAR_1 ;







 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int,int const) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int const) ;
 int FUNC_10 (struct tcpm_port*) ;
 int FUNC_11 (struct tcpm_port*,int const*,int) ;
 int FUNC_12 (struct tcpm_port*,int const*,int) ;
 int FUNC_13 (struct tcpm_port*,int const*,int) ;
 int FUNC_14 (struct tcpm_port*,char*,int,int,int,int) ;
 int FUNC_15 (struct tcpm_port*) ;
 int FUNC_16 (struct typec_altmode*,int) ;
 int FUNC_17 (struct typec_altmode*,int ,int *) ;
 int FUNC_18 (struct typec_altmode*,int) ;
 int FUNC_19 (struct typec_altmode*,int,int*,int) ;
 struct typec_altmode* FUNC_20 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_21(struct tcpm_port *VAR_6, const __le32 *VAR_7, int VAR_8,
   u32 *VAR_9)
{
 struct typec_altmode *VAR_10;
 struct typec_altmode *VAR_11;
 struct pd_mode_data *VAR_12;
 u32 VAR_13[VAR_2];
 int VAR_14 = 0;
 int VAR_15;
 int VAR_16;
 int VAR_17;

 for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++)
  VAR_13[VAR_17] = FUNC_9(VAR_7[VAR_17]);

 VAR_15 = FUNC_2(VAR_13[0]);
 VAR_16 = FUNC_1(VAR_13[0]);

 FUNC_14(VAR_6, "Rx VDM cmd 0x%x type %d cmd %d len %d",
   VAR_13[0], VAR_15, VAR_16, VAR_8);

 VAR_12 = &VAR_6->mode_data;

 VAR_10 = FUNC_20(VAR_6->port_altmode, VAR_0,
       FUNC_4(VAR_13[0]), FUNC_3(VAR_13[0]));

 VAR_11 = FUNC_20(VAR_6->partner_altmode, VAR_0,
       FUNC_4(VAR_13[0]), FUNC_3(VAR_13[0]));

 switch (VAR_15) {
 case 136:
  switch (VAR_16) {
  case 132:

   if (VAR_6->data_role == VAR_3 &&
       VAR_6->nr_snk_vdo) {
    for (VAR_17 = 0; VAR_17 < VAR_6->nr_snk_vdo; VAR_17++)
     VAR_9[VAR_17 + 1] = VAR_6->snk_vdo[VAR_17];
    VAR_14 = VAR_6->nr_snk_vdo + 1;
   }
   break;
  case 130:
   break;
  case 131:
   break;
  case 129:
   break;
  case 128:
   break;
  case 133:

   if (VAR_10)
    FUNC_16(VAR_10, VAR_13[1]);
   return 0;
  default:
   break;
  }
  if (VAR_14 >= 1) {
   VAR_9[0] = VAR_13[0] | FUNC_6(135);
  } else if (VAR_14 == 0) {
   VAR_9[0] = VAR_13[0] | FUNC_6(134);
   VAR_14 = 1;
  } else {
   VAR_9[0] = VAR_13[0] | FUNC_6(VAR_1);
   VAR_14 = 1;
  }
  break;
 case 135:

  if (FUNC_0(VAR_6->partner))
   break;

  switch (VAR_16) {
  case 132:

   FUNC_11(VAR_6, VAR_7, VAR_8);
   VAR_9[0] = FUNC_5(VAR_5, 1, 130);
   VAR_14 = 1;
   break;
  case 130:

   if (FUNC_13(VAR_6, VAR_7, VAR_8)) {
    VAR_9[0] = FUNC_5(VAR_5, 1,
        130);
    VAR_14 = 1;
   } else if (VAR_12->nsvids && FUNC_10(VAR_6)) {
    VAR_9[0] = FUNC_5(VAR_12->svids[0], 1,
        131);
    VAR_14 = 1;
   }
   break;
  case 131:

   FUNC_12(VAR_6, VAR_7, VAR_8);
   VAR_12->svid_index++;
   if (VAR_12->svid_index < VAR_12->nsvids) {
    u16 VAR_18 = VAR_12->svids[VAR_12->svid_index];
    VAR_9[0] = FUNC_5(VAR_18, 1, 131);
    VAR_14 = 1;
   } else {
    FUNC_15(VAR_6);
   }
   break;
  case 129:
   if (VAR_10 && VAR_11) {
    FUNC_18(VAR_11, 1);

    if (FUNC_19(VAR_10, VAR_13[0], &VAR_13[1], VAR_8)) {
     VAR_9[0] = FUNC_5(VAR_10->svid, 1,
         128);
     VAR_9[0] |= FUNC_7(VAR_10->mode);
     return 1;
    }
   }
   return 0;
  case 128:
   if (VAR_10 && VAR_11) {
    FUNC_18(VAR_11, 0);


    FUNC_8(FUNC_17(VAR_10,
            VAR_4,
            ((void*)0)));
   }
   break;
  default:
   break;
  }
  break;
 case 134:
  switch (VAR_16) {
  case 129:

   if (VAR_10)
    FUNC_8(FUNC_17(VAR_10,
            VAR_4,
            ((void*)0)));
   break;
  default:
   break;
  }
  break;
 default:
  break;
 }


 if (VAR_10)
  FUNC_19(VAR_10, VAR_13[0], &VAR_13[1], VAR_8);

 return VAR_14;
}
