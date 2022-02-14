
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct tvp7002_timings_definition {int lines_per_frame; int progressive; int cpl_min; int cpl_max; } ;


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
 int FUNC_0 (struct v4l2_subdev*,int ,int*,int*) ;
 struct tvp7002_timings_definition* VAR_11 ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,int,...) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_12, int *VAR_13)
{
 const struct tvp7002_timings_definition *VAR_14 = VAR_11;
 u8 VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 int VAR_18 = 0;
 u8 VAR_19;
 u8 VAR_20;
 u8 VAR_21;
 u8 VAR_22;


 *VAR_13 = VAR_1;


 FUNC_0(VAR_12, VAR_8, &VAR_19, &VAR_18);
 FUNC_0(VAR_12, VAR_9, &VAR_20, &VAR_18);

 if (VAR_18 < 0)
  return VAR_18;

 FUNC_0(VAR_12, VAR_2, &VAR_21, &VAR_18);
 FUNC_0(VAR_12, VAR_3, &VAR_22, &VAR_18);

 if (VAR_18 < 0)
  return VAR_18;


 VAR_16 = VAR_19 | ((VAR_4 & VAR_20) << VAR_5);
 VAR_17 = VAR_21 | ((VAR_4 & VAR_22) << VAR_5);
 VAR_15 = (VAR_20 & VAR_6) >> VAR_7;


 for (*VAR_13 = 0; *VAR_13 < VAR_1; (*VAR_13)++, VAR_14++)
  if (VAR_16 == VAR_14->lines_per_frame &&
   VAR_15 == VAR_14->progressive) {
   if (VAR_14->cpl_min == 0xffff)
    break;
   if (VAR_17 >= VAR_14->cpl_min && VAR_17 <= VAR_14->cpl_max)
    break;
  }

 if (*VAR_13 == VAR_1) {
  FUNC_1(1, VAR_10, VAR_12, "detection failed: lpf = %x, cpl = %x\n",
        VAR_16, VAR_17);
  return -VAR_0;
 }


 FUNC_1(1, VAR_10, VAR_12, "detected timings: %d\n", *VAR_13);
 return 0;
}
