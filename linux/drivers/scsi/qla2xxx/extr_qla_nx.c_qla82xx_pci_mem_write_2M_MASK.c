
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int u64 ;
struct qla_hw_data {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


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
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (struct qla_hw_data*,int,int) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*,int,int*,int) ;
 int FUNC_4 (struct qla_hw_data*,int,void*,int) ;
 int FUNC_5 (struct qla_hw_data*,int) ;
 int FUNC_6 (struct qla_hw_data*,int,int) ;

__attribute__((used)) static int
FUNC_7(struct qla_hw_data *VAR_16,
  u64 VAR_17, void *VAR_18, int VAR_19)
{
 int VAR_20, VAR_21, VAR_22 = 0, VAR_23, VAR_24[2], VAR_25;
 int VAR_26, VAR_27, VAR_28;
 uint32_t VAR_29;
 uint64_t VAR_30, VAR_31, VAR_32, VAR_33[2] = {0, 0};




 if (VAR_17 >= VAR_12 && VAR_17 <= VAR_15)
  VAR_31 = VAR_14;
 else {
  VAR_31 = VAR_13;
  if (FUNC_2(VAR_16, VAR_17, VAR_19) == 0)
   return FUNC_4(VAR_16,
       VAR_17, VAR_18, VAR_19);
 }

 VAR_25 = VAR_17 & 0x7;
 VAR_24[0] = (VAR_19 < (8 - VAR_25)) ? VAR_19 : (8 - VAR_25);
 VAR_24[1] = VAR_19 - VAR_24[0];

 VAR_30 = VAR_17 & 0xfffffff0;
 VAR_23 = (((VAR_17 & 0xf) + VAR_19 - 1) >> 4) + 1;
 VAR_27 = 4;
 VAR_26 = 2;
 VAR_28 = (VAR_17 & 0xf)/8;

 for (VAR_20 = 0; VAR_20 < VAR_23; VAR_20++) {
  if (FUNC_3(VAR_16, VAR_30 +
      (VAR_20 << VAR_27), &VAR_33[VAR_20 * VAR_26], 8))
   return -1;
 }

 switch (VAR_19) {
 case 1:
  VAR_32 = *((uint8_t *)VAR_18);
  break;
 case 2:
  VAR_32 = *((uint16_t *)VAR_18);
  break;
 case 4:
  VAR_32 = *((uint32_t *)VAR_18);
  break;
 case 8:
 default:
  VAR_32 = *((uint64_t *)VAR_18);
  break;
 }

 if (VAR_24[0] == 8) {
  VAR_33[VAR_28] = VAR_32;
 } else {
  VAR_33[VAR_28] &=
   ~((~(~0ULL << (VAR_24[0] * 8))) << (VAR_25 * 8));
  VAR_33[VAR_28] |= VAR_32 << (VAR_25 * 8);
 }
 if (VAR_24[1] != 0) {
  VAR_33[VAR_28+1] &= ~(~0ULL << (VAR_24[1] * 8));
  VAR_33[VAR_28+1] |= VAR_32 >> (VAR_24[0] * 8);
 }

 for (VAR_20 = 0; VAR_20 < VAR_23; VAR_20++) {
  VAR_29 = VAR_30 + (VAR_20 << VAR_27);
  FUNC_6(VAR_16, VAR_31+VAR_6, VAR_29);
  VAR_29 = 0;
  FUNC_6(VAR_16, VAR_31+VAR_5, VAR_29);
  VAR_29 = VAR_33[VAR_20 * VAR_26] & 0xffffffff;
  FUNC_6(VAR_16, VAR_31+VAR_9, VAR_29);
  VAR_29 = (VAR_33[VAR_20 * VAR_26] >> 32) & 0xffffffff;
  FUNC_6(VAR_16, VAR_31+VAR_8, VAR_29);
  VAR_29 = VAR_33[VAR_20*VAR_26 + 1] & 0xffffffff;
  FUNC_6(VAR_16, VAR_31 +
      VAR_11, VAR_29);
  VAR_29 = (VAR_33[VAR_20*VAR_26 + 1] >> 32) & 0xffffffff;
  FUNC_6(VAR_16, VAR_31 +
      VAR_10, VAR_29);

  VAR_29 = VAR_2 | VAR_4;
  FUNC_6(VAR_16, VAR_31 + VAR_7, VAR_29);
  VAR_29 = VAR_3 | VAR_2 | VAR_4;
  FUNC_6(VAR_16, VAR_31 + VAR_7, VAR_29);

  for (VAR_21 = 0; VAR_21 < VAR_0; VAR_21++) {
   VAR_29 = FUNC_5(VAR_16, VAR_31 + VAR_7);
   if ((VAR_29 & VAR_1) == 0)
    break;
  }

  if (VAR_21 >= VAR_0) {
   if (FUNC_1())
    FUNC_0(&VAR_16->pdev->dev,
        "failed to write through agent.\n");
   VAR_22 = -1;
   break;
  }
 }

 return VAR_22;
}
