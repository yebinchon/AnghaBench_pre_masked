
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct k3_priv {int ctrl_id; } ;
struct dw_mci {struct k3_priv* priv; } ;
struct TYPE_2__ {unsigned int drv_phase; unsigned int smpl_dly; int smpl_phase_max; int smpl_phase_min; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ,unsigned int) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_1__** VAR_14 ;
 int FUNC_1 (struct dw_mci*,int ,unsigned int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct dw_mci *VAR_15, int VAR_16,
         int VAR_17)
{
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20 = 0;
 u32 VAR_21 = 0;
 u32 VAR_22;
 int VAR_23;
 struct k3_priv *VAR_24;

 VAR_24 = VAR_15->priv;
 VAR_23 = VAR_24->ctrl_id;

 VAR_18 = VAR_14[VAR_23][VAR_16].drv_phase;
 VAR_19 = VAR_14[VAR_23][VAR_16].smpl_dly;
 if (VAR_17 == -1)
  VAR_17 = (VAR_14[VAR_23][VAR_16].smpl_phase_max +
        VAR_14[VAR_23][VAR_16].smpl_phase_min) / 2;

 switch (VAR_16) {
 case 129:
  if (VAR_17 >= VAR_13 &&
    VAR_17 <= VAR_12)
   VAR_20 = 1;

 case 128:
  if (VAR_17 >= VAR_2 &&
    VAR_17 <= VAR_1)
   VAR_21 = 1;
  break;
 }

 FUNC_1(VAR_15, VAR_4, 0x0);
 FUNC_2(5, 10);

 VAR_22 = FUNC_0(VAR_11, VAR_17) |
      FUNC_0(VAR_9, VAR_19) |
      FUNC_0(VAR_10, VAR_18);
 FUNC_1(VAR_15, VAR_8, VAR_22);

 FUNC_1(VAR_15, VAR_0, VAR_21);

 VAR_22 = FUNC_0(VAR_5, VAR_3) |
        FUNC_0(VAR_7, VAR_20);
 FUNC_1(VAR_15, VAR_4, (unsigned int)VAR_22 | VAR_6);


 FUNC_2(1000, 2000);
}
