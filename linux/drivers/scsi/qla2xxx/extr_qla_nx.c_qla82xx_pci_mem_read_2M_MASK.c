
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
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (struct qla_hw_data*,int,int) ;
 int FUNC_4 (struct qla_hw_data*,int,void*,int) ;
 int FUNC_5 (struct qla_hw_data*,int) ;
 int FUNC_6 (struct qla_hw_data*,int,int) ;

int
FUNC_7(struct qla_hw_data *VAR_11,
  u64 VAR_12, void *VAR_13, int VAR_14)
{
 int VAR_15, VAR_16 = 0, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21[2], VAR_22[2];
 int VAR_23;
 uint32_t VAR_24;
 uint64_t VAR_25, VAR_26, VAR_27, VAR_28[2] = {0, 0};





 if (VAR_12 >= VAR_7 && VAR_12 <= VAR_10)
  VAR_27 = VAR_9;
 else {
  VAR_27 = VAR_8;
  if (FUNC_3(VAR_11, VAR_12, VAR_14) == 0)
   return FUNC_4(VAR_11,
       VAR_12, VAR_13, VAR_14);
 }

 VAR_25 = VAR_12 & 0xfffffff0;
 VAR_22[0] = VAR_12 & 0xf;
 VAR_21[0] = (VAR_14 < (16 - VAR_22[0])) ? VAR_14 : (16 - VAR_22[0]);
 VAR_23 = 4;
 VAR_20 = ((VAR_22[0] + VAR_14 - 1) >> VAR_23) + 1;
 VAR_22[1] = 0;
 VAR_21[1] = VAR_14 - VAR_21[0];

 for (VAR_15 = 0; VAR_15 < VAR_20; VAR_15++) {
  VAR_24 = VAR_25 + (VAR_15 << VAR_23);
  FUNC_6(VAR_11, VAR_27 + VAR_5, VAR_24);
  VAR_24 = 0;
  FUNC_6(VAR_11, VAR_27 + VAR_4, VAR_24);
  VAR_24 = VAR_2;
  FUNC_6(VAR_11, VAR_27 + VAR_6, VAR_24);
  VAR_24 = VAR_3 | VAR_2;
  FUNC_6(VAR_11, VAR_27 + VAR_6, VAR_24);

  for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++) {
   VAR_24 = FUNC_5(VAR_11, VAR_27 + VAR_6);
   if ((VAR_24 & VAR_1) == 0)
    break;
  }

  if (VAR_16 >= VAR_0) {
   if (FUNC_2())
    FUNC_1(&VAR_11->pdev->dev,
        "failed to read through agent.\n");
   break;
  }

  VAR_18 = VAR_22[VAR_15] >> 2;
  VAR_19 = (VAR_22[VAR_15] + VAR_21[VAR_15] - 1) >> 2;
  for (VAR_17 = VAR_18; VAR_17 <= VAR_19; VAR_17++) {
   VAR_24 = FUNC_5(VAR_11,
     VAR_27 + FUNC_0(VAR_17));
   VAR_28[VAR_15] |= ((uint64_t)VAR_24 << (32 * (VAR_17 & 1)));
  }
 }

 if (VAR_16 >= VAR_0)
  return -1;

 if ((VAR_22[0] & 7) == 0) {
  VAR_26 = VAR_28[0];
 } else {
  VAR_26 = ((VAR_28[0] >> (VAR_22[0] * 8)) & (~(~0ULL << (VAR_21[0] * 8)))) |
   ((VAR_28[1] & (~(~0ULL << (VAR_21[1] * 8)))) << (VAR_21[0] * 8));
 }

 switch (VAR_14) {
 case 1:
  *(uint8_t *)VAR_13 = VAR_26;
  break;
 case 2:
  *(uint16_t *)VAR_13 = VAR_26;
  break;
 case 4:
  *(uint32_t *)VAR_13 = VAR_26;
  break;
 case 8:
  *(uint64_t *)VAR_13 = VAR_26;
  break;
 }
 return 0;
}
