
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tsens_priv {int num_sensors; int tm_map; TYPE_1__* sensor; int dev; } ;
struct TYPE_2__ {scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct tsens_priv *VAR_15)
{
 int VAR_16, VAR_17;
 u32 VAR_18;

 VAR_15->tm_map = FUNC_1(VAR_15->dev, ((void*)0));
 if (!VAR_15->tm_map)
  return -VAR_8;







 for (VAR_17 = 0; VAR_17 < VAR_15->num_sensors; VAR_17++) {
  if (VAR_17 >= 5)
   VAR_15->sensor[VAR_17].status = VAR_10 + 40;
  VAR_15->sensor[VAR_17].status += VAR_17 * 4;
 }

 VAR_18 = VAR_14;
 VAR_16 = FUNC_2(VAR_15->tm_map, VAR_0, VAR_14, VAR_18);
 if (VAR_16)
  return VAR_16;

 if (VAR_15->num_sensors > 1) {
  VAR_18 |= VAR_12 | (VAR_9 << 18);
  VAR_18 &= ~VAR_14;
  VAR_16 = FUNC_2(VAR_15->tm_map, VAR_3,
      VAR_4, VAR_1);
 } else {
  VAR_18 |= VAR_13 | (VAR_9 << 16);
  VAR_18 &= ~VAR_5;
  VAR_18 |= VAR_2 << VAR_6;
 }

 VAR_18 |= FUNC_0(VAR_15->num_sensors - 1, 0) << VAR_11;
 VAR_16 = FUNC_3(VAR_15->tm_map, VAR_0, VAR_18);
 if (VAR_16)
  return VAR_16;

 VAR_18 |= VAR_7;
 VAR_16 = FUNC_3(VAR_15->tm_map, VAR_0, VAR_18);
 if (VAR_16)
  return VAR_16;

 return 0;
}
