
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tsens_sensor {int status; } ;
struct tsens_priv {int tm_map; struct tsens_sensor* sensor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,struct tsens_sensor const*) ;
 unsigned long VAR_4 ;
 int FUNC_1 (int ,int ,int*) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 unsigned long FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct tsens_priv *VAR_5, int VAR_6, int *VAR_7)
{
 int VAR_8;
 u32 VAR_9, VAR_10;
 const struct tsens_sensor *VAR_11 = &VAR_5->sensor[VAR_6];
 unsigned long VAR_12;

 VAR_12 = VAR_4 + FUNC_3(VAR_2);
 do {
  VAR_8 = FUNC_1(VAR_5->tm_map, VAR_1, &VAR_10);
  if (VAR_8)
   return VAR_8;
  if (!(VAR_10 & VAR_3))
   continue;
  VAR_8 = FUNC_1(VAR_5->tm_map, VAR_11->status, &VAR_9);
  if (VAR_8)
   return VAR_8;
  *VAR_7 = FUNC_0(VAR_9, VAR_11);
  return 0;
 } while (FUNC_2(VAR_4, VAR_12));

 return -VAR_0;
}
