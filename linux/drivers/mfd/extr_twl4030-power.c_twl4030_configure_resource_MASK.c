
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl4030_resconfig {size_t resource; int devgroup; int type; int type2; int remap_off; int remap_sleep; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (char*,...) ;
 int* VAR_17 ;
 int FUNC_1 (int ,int*,scalar_t__) ;
 int FUNC_2 (int ,int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct twl4030_resconfig *VAR_18)
{
 int VAR_19;
 int VAR_20;
 u8 VAR_21;
 u8 VAR_22;
 u8 VAR_23;

 if (VAR_18->resource > VAR_9) {
  FUNC_0("TWL4030 Resource %d does not exist\n",
   VAR_18->resource);
  return -VAR_3;
 }

 VAR_19 = VAR_17[VAR_18->resource];


 VAR_20 = FUNC_1(VAR_11, &VAR_22,
         VAR_19 + VAR_1);
 if (VAR_20) {
  FUNC_0("TWL4030 Resource %d group could not be read\n",
   VAR_18->resource);
  return VAR_20;
 }

 if (VAR_18->devgroup != VAR_10) {
  VAR_22 &= ~VAR_0;
  VAR_22 |= VAR_18->devgroup << VAR_2;
  VAR_20 = FUNC_2(VAR_11,
           VAR_22, VAR_19 + VAR_1);
  if (VAR_20 < 0) {
   FUNC_0("TWL4030 failed to program devgroup\n");
   return VAR_20;
  }
 }


 VAR_20 = FUNC_1(VAR_11, &VAR_21,
    VAR_19 + VAR_15);
 if (VAR_20 < 0) {
  FUNC_0("TWL4030 Resource %d type could not be read\n",
   VAR_18->resource);
  return VAR_20;
 }

 if (VAR_18->type != VAR_10) {
  VAR_21 &= ~VAR_14;
  VAR_21 |= VAR_18->type << VAR_16;
 }

 if (VAR_18->type2 != VAR_10) {
  VAR_21 &= ~VAR_12;
  VAR_21 |= VAR_18->type2 << VAR_13;
 }

 VAR_20 = FUNC_2(VAR_11,
    VAR_21, VAR_19 + VAR_15);
 if (VAR_20 < 0) {
  FUNC_0("TWL4030 failed to program resource type\n");
  return VAR_20;
 }


 VAR_20 = FUNC_1(VAR_11, &VAR_23,
         VAR_19 + VAR_6);
 if (VAR_20 < 0) {
  FUNC_0("TWL4030 Resource %d remap could not be read\n",
   VAR_18->resource);
  return VAR_20;
 }

 if (VAR_18->remap_off != VAR_10) {
  VAR_23 &= ~VAR_4;
  VAR_23 |= VAR_18->remap_off << VAR_5;
 }

 if (VAR_18->remap_sleep != VAR_10) {
  VAR_23 &= ~VAR_7;
  VAR_23 |= VAR_18->remap_sleep << VAR_8;
 }

 VAR_20 = FUNC_2(VAR_11,
          VAR_23,
          VAR_19 + VAR_6);
 if (VAR_20 < 0) {
  FUNC_0("TWL4030 failed to program remap\n");
  return VAR_20;
 }

 return 0;
}
