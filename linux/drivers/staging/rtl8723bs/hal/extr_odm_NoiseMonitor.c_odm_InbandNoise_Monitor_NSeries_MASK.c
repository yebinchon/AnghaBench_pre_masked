
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct noise_level {size_t* value; int* sval; int* valid_cnt; int* sum; } ;
typedef int s8 ;
typedef size_t s32 ;
typedef size_t s16 ;
struct TYPE_6__ {size_t noise_all; int* noise; } ;
struct TYPE_7__ {scalar_t__ RFType; TYPE_1__ noise_level; int Adapter; } ;
typedef TYPE_2__* PDM_ODM_T ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (TYPE_2__*,int ,int ,char*) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct noise_level*,int ,int) ;
 int FUNC_5 (TYPE_2__*,int ,size_t) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static s16 FUNC_6(
 PDM_ODM_T VAR_19,
 u8 VAR_20,
 u8 VAR_21,
 u32 VAR_22
)
{
 u32 VAR_23;
 u8 VAR_24 = 0, VAR_25;
 u8 VAR_26, VAR_27, VAR_28 = 0;
 struct noise_level VAR_29;
 u32 VAR_30 = 0, VAR_31 = 0, VAR_32 = 0;

 VAR_31 = VAR_15;
 VAR_19->noise_level.noise_all = 0;

 if ((VAR_19->RFType == VAR_2) || (VAR_19->RFType == VAR_3))
  VAR_24 = 2;
 else
  VAR_24 = 1;

 FUNC_0(VAR_19, VAR_4, VAR_5, ("odm_DebugControlInbandNoise_Nseries() ==>\n"));

 FUNC_4(&VAR_29, 0, sizeof(struct noise_level));





 if (VAR_20)
  FUNC_5(VAR_19, VAR_6, VAR_21);
 VAR_30 = VAR_15;
 while (1) {


  FUNC_2(VAR_19->Adapter, VAR_16, VAR_0, 1);


  VAR_23 = FUNC_1(VAR_19->Adapter, 0x8f8, VAR_14);
  FUNC_0(VAR_19, VAR_4, VAR_5, ("Noise Floor Report (0x8f8) = 0x%08x\n", VAR_23));






  FUNC_2(VAR_19->Adapter, VAR_16, VAR_0, 0);

  VAR_29.value[VAR_8] = (u8)(VAR_23&0xff);
  VAR_29.value[VAR_9] = (u8)((VAR_23&0xff00)>>8);

  FUNC_0(VAR_19, VAR_4, VAR_5, ("value_a = 0x%x(%d), value_b = 0x%x(%d)\n",
   VAR_29.value[VAR_8], VAR_29.value[VAR_8], VAR_29.value[VAR_9], VAR_29.value[VAR_9]));

  for (VAR_25 = VAR_8; VAR_25 < VAR_24; VAR_25++) {
   VAR_29.sval[VAR_25] = (s8)VAR_29.value[VAR_25];
   VAR_29.sval[VAR_25] /= 2;
  }


  FUNC_0(VAR_19, VAR_4, VAR_5, ("sval_a = %d, sval_b = %d\n",
   VAR_29.sval[VAR_8], VAR_29.sval[VAR_9]));



  for (VAR_25 = VAR_8; VAR_25 < VAR_24; VAR_25++) {
   if ((VAR_29.valid_cnt[VAR_25] < VAR_10) && (VAR_29.sval[VAR_25] < VAR_11 && VAR_29.sval[VAR_25] >= VAR_12)) {
    VAR_29.valid_cnt[VAR_25]++;
    VAR_29.sum[VAR_25] += VAR_29.sval[VAR_25];
    FUNC_0(VAR_19, VAR_4, VAR_5, ("RF_Path:%d Valid sval = %d\n", VAR_25, VAR_29.sval[VAR_25]));
    FUNC_0(VAR_19, VAR_4, VAR_5, ("Sum of sval = %d,\n", VAR_29.sum[VAR_25]));
    if (VAR_29.valid_cnt[VAR_25] == VAR_10) {
     VAR_28++;
     FUNC_0(VAR_19, VAR_4, VAR_5, ("After divided, RF_Path:%d , sum = %d\n", VAR_25, VAR_29.sum[VAR_25]));
    }

   }

  }


  if ((VAR_28 == VAR_24) || (FUNC_3(VAR_15 - VAR_30) > VAR_22)) {
   for (VAR_25 = VAR_8; VAR_25 < VAR_24; VAR_25++) {

    if (VAR_29.valid_cnt[VAR_25])
     VAR_29.sum[VAR_25] /= VAR_29.valid_cnt[VAR_25];
    else
     VAR_29.sum[VAR_25] = 0;
   }
   break;
  }
 }
 VAR_26 = (s32)FUNC_1(VAR_19->Adapter, VAR_17, VAR_13);
 VAR_26 &= ~VAR_1;
 FUNC_0(VAR_19, VAR_4, VAR_5, ("0x%x = 0x%02x(%d)\n", VAR_17, VAR_26, VAR_26));
 VAR_19->noise_level.noise[VAR_8] = -110 + VAR_26 + VAR_29.sum[VAR_8];
 VAR_19->noise_level.noise_all += VAR_19->noise_level.noise[VAR_8];

 if (VAR_24 == 2) {
  VAR_27 = (s32)FUNC_1(VAR_19->Adapter, VAR_18, VAR_13);
  VAR_27 &= ~VAR_1;
  FUNC_0(VAR_19, VAR_4, VAR_5, ("0x%x = 0x%02x(%d)\n", VAR_18, VAR_27, VAR_27));
  VAR_19->noise_level.noise[VAR_9] = -110 + VAR_27 + VAR_29.sum[VAR_9];
  VAR_19->noise_level.noise_all += VAR_19->noise_level.noise[VAR_9];
 }
 VAR_19->noise_level.noise_all /= VAR_24;

 FUNC_0(
  VAR_19,
  VAR_4,
  VAR_5,
  (
   "noise_a = %d, noise_b = %d\n",
   VAR_19->noise_level.noise[VAR_8],
   VAR_19->noise_level.noise[VAR_9]
  )
 );




 if (VAR_20)
  FUNC_5(VAR_19, VAR_7, VAR_21);

 VAR_32 = FUNC_3(VAR_15 - VAR_31);





 FUNC_0(VAR_19, VAR_4, VAR_5, ("odm_DebugControlInbandNoise_Nseries() <==\n"));
 return VAR_19->noise_level.noise_all;

}
