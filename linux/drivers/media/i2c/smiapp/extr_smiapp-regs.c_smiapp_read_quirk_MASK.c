
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct smiapp_sensor {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct smiapp_sensor*,scalar_t__,scalar_t__*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct smiapp_sensor*,int ,int,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (struct smiapp_sensor*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct smiapp_sensor *VAR_2, u32 VAR_3, u32 *VAR_4,
        bool VAR_5)
{
 int VAR_6;

 *VAR_4 = 0;
 VAR_6 = FUNC_1(VAR_2, VAR_1, 0, &VAR_3, VAR_4);
 if (VAR_6 == -VAR_0)
  return 0;
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_5)
  return FUNC_0(VAR_2, VAR_3, VAR_4, 1);

 return FUNC_2(VAR_2, VAR_3, VAR_4);
}
