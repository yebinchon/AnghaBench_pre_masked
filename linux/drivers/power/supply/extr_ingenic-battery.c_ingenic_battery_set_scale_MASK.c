
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int voltage_max_design_uv; } ;
struct ingenic_battery {int channel; int dev; TYPE_1__ info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int const**,int*,int*,int ) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (int ,int const,int const,int ) ;

__attribute__((used)) static int FUNC_4(struct ingenic_battery *VAR_4)
{
 const int *VAR_5;
 int VAR_6, VAR_7, VAR_8 = -1, VAR_9, VAR_10, VAR_11, VAR_12;
 u64 VAR_13;

 VAR_12 = FUNC_2(VAR_4->channel, &VAR_10);
 if (VAR_12) {
  FUNC_0(VAR_4->dev, "Unable to read max raw channel value\n");
  return VAR_12;
 }

 VAR_12 = FUNC_1(VAR_4->channel, &VAR_5,
            &VAR_7, &VAR_6,
            VAR_2);
 if (VAR_12 < 0) {
  FUNC_0(VAR_4->dev, "Unable to read channel avail scale\n");
  return VAR_12;
 }
 if (VAR_12 != VAR_1 || VAR_7 != VAR_3)
  return -VAR_0;

 VAR_13 = VAR_4->info.voltage_max_design_uv / 1000;

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11 += 2) {
  u64 VAR_14 = (VAR_10 * VAR_5[VAR_11]) >> VAR_5[VAR_11 + 1];

  if (VAR_14 < VAR_13)
   continue;

  if (VAR_8 >= 0 && VAR_14 > VAR_9)
   continue;

  VAR_9 = VAR_14;
  VAR_8 = VAR_11;
 }

 if (VAR_8 < 0) {
  FUNC_0(VAR_4->dev, "Unable to find matching voltage scale\n");
  return -VAR_0;
 }

 return FUNC_3(VAR_4->channel,
        VAR_5[VAR_8],
        VAR_5[VAR_8 + 1],
        VAR_2);
}
