
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tsens_priv {int num_sensors; int tm_map; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct tsens_priv *VAR_6, int VAR_7)
{
 int VAR_8;
 u32 VAR_9, VAR_10;

 VAR_8 = FUNC_1(VAR_6->tm_map, VAR_0, &VAR_9);
 if (VAR_8)
  return VAR_8;

 VAR_10 = FUNC_0(VAR_7 + VAR_2);
 VAR_8 = FUNC_2(VAR_6->tm_map, VAR_0, VAR_9 | VAR_5);
 if (VAR_8)
  return VAR_8;

 if (VAR_6->num_sensors > 1)
  VAR_9 |= VAR_10 | VAR_3 | VAR_1;
 else
  VAR_9 |= VAR_10 | VAR_4 | VAR_1;

 VAR_8 = FUNC_2(VAR_6->tm_map, VAR_0, VAR_9);
 if (VAR_8)
  return VAR_8;

 return 0;
}
