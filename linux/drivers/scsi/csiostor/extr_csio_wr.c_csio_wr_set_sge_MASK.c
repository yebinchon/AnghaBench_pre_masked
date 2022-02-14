
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_sge {int csio_fl_align; int * timer_val; int * counter_val; int sge_control; } ;
struct csio_wrm {struct csio_sge sge; } ;
struct csio_hw {int dummy; } ;


 int FUNC_0 (struct csio_hw*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int ) ;
 int VAR_21 ;
 int FUNC_2 (int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct csio_hw*,struct csio_sge*,int) ;
 struct csio_wrm* FUNC_14 (struct csio_hw*) ;
 int FUNC_15 (struct csio_hw*) ;
 int FUNC_16 (struct csio_hw*,int ) ;
 int FUNC_17 (struct csio_hw*,int ,int ,int ) ;
 int FUNC_18 (struct csio_hw*,int ) ;
 int FUNC_19 (struct csio_hw*,int,int ) ;

__attribute__((used)) static void
FUNC_20(struct csio_hw *VAR_33)
{
 struct csio_wrm *VAR_34 = FUNC_14(VAR_33);
 struct csio_sge *VAR_35 = &VAR_34->sge;
 int VAR_36;





 FUNC_17(VAR_33, VAR_23, VAR_22, VAR_22);

 VAR_35->sge_control = FUNC_16(VAR_33, VAR_23);







 FUNC_17(VAR_33, VAR_25,
      FUNC_2(VAR_21),
      FUNC_2(VAR_0));
 FUNC_17(VAR_33, VAR_24,
      FUNC_1(VAR_21),
      FUNC_1(VAR_0));

 FUNC_17(VAR_33, VAR_26, VAR_20,
      VAR_20);



 FUNC_0(VAR_33, 1, VAR_1);
 FUNC_19(VAR_33, (VAR_2 + VAR_35->csio_fl_align - 1)
        & ~(VAR_35->csio_fl_align - 1), VAR_27);
 FUNC_19(VAR_33, (VAR_3 + VAR_35->csio_fl_align - 1)
        & ~(VAR_35->csio_fl_align - 1), VAR_28);
 FUNC_0(VAR_33, 4, VAR_4);
 FUNC_0(VAR_33, 5, VAR_5);
 FUNC_0(VAR_33, 6, VAR_6);
 FUNC_0(VAR_33, 7, VAR_7);
 FUNC_0(VAR_33, 8, VAR_8);

 for (VAR_36 = 0; VAR_36 < VAR_9; VAR_36++)
  FUNC_13(VAR_33, VAR_35, VAR_36);


 VAR_35->timer_val[0] = VAR_14;
 VAR_35->timer_val[1] = VAR_15;
 VAR_35->timer_val[2] = VAR_16;
 VAR_35->timer_val[3] = VAR_17;
 VAR_35->timer_val[4] = VAR_18;
 VAR_35->timer_val[5] = VAR_19;

 VAR_35->counter_val[0] = VAR_10;
 VAR_35->counter_val[1] = VAR_11;
 VAR_35->counter_val[2] = VAR_12;
 VAR_35->counter_val[3] = VAR_13;

 FUNC_19(VAR_33, FUNC_3(VAR_35->counter_val[0]) |
        FUNC_4(VAR_35->counter_val[1]) |
        FUNC_5(VAR_35->counter_val[2]) |
        FUNC_6(VAR_35->counter_val[3]),
        VAR_29);

 FUNC_19(VAR_33,
     FUNC_7(FUNC_18(VAR_33, VAR_35->timer_val[0])) |
     FUNC_8(FUNC_18(VAR_33, VAR_35->timer_val[1])),
     VAR_30);

 FUNC_19(VAR_33,
     FUNC_9(FUNC_18(VAR_33, VAR_35->timer_val[2])) |
     FUNC_10(FUNC_18(VAR_33, VAR_35->timer_val[3])),
     VAR_31);

 FUNC_19(VAR_33,
     FUNC_11(FUNC_18(VAR_33, VAR_35->timer_val[4])) |
     FUNC_12(FUNC_18(VAR_33, VAR_35->timer_val[5])),
     VAR_32);

 FUNC_15(VAR_33);
}
