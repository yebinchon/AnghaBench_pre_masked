
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct smiapp_sensor {TYPE_1__* src; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int sd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct smiapp_sensor*,int ,scalar_t__,int*) ;
 int FUNC_3 (struct smiapp_sensor*,int ,scalar_t__,int*) ;
 int FUNC_4 (struct i2c_client*,int) ;
 struct i2c_client* FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct smiapp_sensor *VAR_5, u32 VAR_6, u32 *VAR_7,
    bool VAR_8)
{
 struct i2c_client *VAR_9 = FUNC_5(&VAR_5->src->sd);
 u8 VAR_10 = FUNC_1(VAR_6);
 int VAR_11;

 if (VAR_10 != VAR_3 && VAR_10 != VAR_1
     && VAR_10 != VAR_2)
  return -VAR_0;

 if (VAR_10 == VAR_3 || !VAR_8)
  VAR_11 = FUNC_2(VAR_5, FUNC_0(VAR_6), VAR_10, VAR_7);
 else
  VAR_11 = FUNC_3(VAR_5, FUNC_0(VAR_6), VAR_10,
          VAR_7);
 if (VAR_11 < 0)
  return VAR_11;

 if (VAR_6 & VAR_4)
  *VAR_7 = FUNC_4(VAR_9, *VAR_7);

 return 0;
}
