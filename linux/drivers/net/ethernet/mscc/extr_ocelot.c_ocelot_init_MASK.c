
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ocelot {int num_phys_ports; int num_stats; int dev; scalar_t__ ptp; int stats_work; int stats_queue; int * regfields; int ptp_clock_lock; int ptp_lock; int stats_lock; void* stats; void* lags; } ;
typedef int queue_name ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int VAR_9 ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ) ;
 int VAR_10 ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int VAR_11 ;
 int FUNC_19 (int ) ;
 int VAR_12 ;
 int FUNC_20 (int) ;
 int VAR_13 ;
 int FUNC_21 (int) ;
 int VAR_14 ;
 int FUNC_22 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_23 (int,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_24 (int *,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_25 (int) ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_26 (int) ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_27 (int) ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_28 (int) ;
 int VAR_36 ;
 int FUNC_29 (int) ;
 int FUNC_30 (int) ;
 int VAR_37 ;
 int FUNC_31 (int) ;
 int FUNC_32 (int) ;
 int VAR_38 ;
 int FUNC_33 (char*) ;
 int FUNC_34 (int ,char*) ;
 char* FUNC_35 (int ) ;
 void* FUNC_36 (int ,int,int,int ) ;
 int FUNC_37 (int *) ;
 int FUNC_38 (struct ocelot*) ;
 int VAR_39 ;
 int FUNC_39 (struct ocelot*) ;
 int FUNC_40 (struct ocelot*) ;
 int FUNC_41 (struct ocelot*) ;
 int FUNC_42 (struct ocelot*,int,int ) ;
 int FUNC_43 (struct ocelot*,int,int ,int) ;
 int FUNC_44 (struct ocelot*,int,int ,int) ;
 int FUNC_45 (int ,int *,int ) ;
 int FUNC_46 (int ,int) ;
 int FUNC_47 (char*,int,char*,char*) ;
 int FUNC_48 (int *) ;

int FUNC_49(struct ocelot *VAR_40)
{
 u32 VAR_41;
 int VAR_42, VAR_43, VAR_44 = VAR_40->num_phys_ports;
 char VAR_45[32];

 VAR_40->lags = FUNC_36(VAR_40->dev, VAR_40->num_phys_ports,
        sizeof(u32), VAR_18);
 if (!VAR_40->lags)
  return -VAR_16;

 VAR_40->stats = FUNC_36(VAR_40->dev,
         VAR_40->num_phys_ports * VAR_40->num_stats,
         sizeof(u64), VAR_18);
 if (!VAR_40->stats)
  return -VAR_16;

 FUNC_37(&VAR_40->stats_lock);
 FUNC_37(&VAR_40->ptp_lock);
 FUNC_48(&VAR_40->ptp_clock_lock);
 FUNC_47(VAR_45, sizeof(VAR_45), "%s-stats",
   FUNC_35(VAR_40->dev));
 VAR_40->stats_queue = FUNC_33(VAR_45);
 if (!VAR_40->stats_queue)
  return -VAR_16;

 FUNC_40(VAR_40);
 FUNC_41(VAR_40);
 FUNC_38(VAR_40);

 for (VAR_41 = 0; VAR_41 < VAR_40->num_phys_ports; VAR_41++) {

  FUNC_42(VAR_40, FUNC_32(VAR_41) |
         FUNC_31(0x7f),
        VAR_37);
 }


 FUNC_42(VAR_40, VAR_17, VAR_38);


 FUNC_42(VAR_40, VAR_5 |
        VAR_2 |
        VAR_3 |
        VAR_4, VAR_1);




 FUNC_42(VAR_40,
       FUNC_0(VAR_15 / 2 / VAR_19),
       VAR_6);


 FUNC_46(VAR_40->regfields[VAR_0], 1);


 FUNC_42(VAR_40, VAR_35 |
       FUNC_28(307692), VAR_34);


 FUNC_44(VAR_40, FUNC_13(VAR_22) |
    FUNC_12(VAR_22) |
    FUNC_14(VAR_26),
    VAR_9, 0);
 FUNC_42(VAR_40, FUNC_18(VAR_24) |
       FUNC_17(VAR_22) |
       FUNC_16(VAR_23) |
       FUNC_15(VAR_22),
       VAR_10);

 for (VAR_41 = 0; VAR_41 < VAR_40->num_phys_ports; VAR_41++) {

  FUNC_44(VAR_40, FUNC_22(VAR_41), VAR_11, VAR_41);

  FUNC_43(VAR_40,
     FUNC_20(0xffff),
     VAR_12,
     VAR_41);

  FUNC_44(VAR_40, 0, VAR_11, VAR_25 + VAR_41);
 }


 FUNC_44(VAR_40, 0, VAR_11, VAR_44);
 FUNC_44(VAR_40, FUNC_22(VAR_44), VAR_11, VAR_21);
 FUNC_43(VAR_40, VAR_14 |
    FUNC_21(VAR_44),
    VAR_13, VAR_44);


 for (VAR_42 = VAR_40->num_phys_ports + 1; VAR_42 < VAR_21; VAR_42++) {
  u32 VAR_46 = FUNC_19(FUNC_23(VAR_40->num_phys_ports - 1, 0));

  FUNC_44(VAR_40, VAR_46, VAR_11, VAR_42);
 }
 FUNC_44(VAR_40,
    FUNC_19(FUNC_23(VAR_40->num_phys_ports, 0)),
    VAR_11, VAR_22);
 FUNC_44(VAR_40, 0, VAR_11, VAR_23);
 FUNC_44(VAR_40, 0, VAR_11, VAR_24);


 FUNC_44(VAR_40, VAR_28 |
    FUNC_25(1) |
    VAR_29,
    VAR_27, VAR_44);
 FUNC_44(VAR_40, FUNC_30(1) |
    FUNC_29(1), VAR_36, VAR_44);



 FUNC_44(VAR_40, VAR_31 |
    FUNC_26(1), VAR_30, 0);
 FUNC_44(VAR_40, VAR_33 |
    FUNC_27(1), VAR_32, 0);
 FUNC_42(VAR_40, FUNC_9(2) |
       FUNC_7(2) |
       FUNC_8(2) |
       FUNC_11(2) |
       FUNC_6(2) |
       FUNC_3(6) |
       FUNC_5(6) |
       FUNC_4(6) |
       FUNC_10(6), VAR_8);
 for (VAR_42 = 0; VAR_42 < 16; VAR_42++)
  FUNC_44(VAR_40, FUNC_2(6) |
     FUNC_1(6),
     VAR_7, VAR_42);

 FUNC_24(&VAR_40->stats_work, VAR_39);
 FUNC_45(VAR_40->stats_queue, &VAR_40->stats_work,
      VAR_20);

 if (VAR_40->ptp) {
  VAR_43 = FUNC_39(VAR_40);
  if (VAR_43) {
   FUNC_34(VAR_40->dev,
    "Timestamp initialization failed\n");
   return VAR_43;
  }
 }

 return 0;
}
