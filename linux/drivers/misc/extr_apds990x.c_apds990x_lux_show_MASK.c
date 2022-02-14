
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct apds990x_chip {int lux; int lux_calib; int mutex; int lux_wait_fresh_res; int wait; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct apds990x_chip* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct device*) ;
 int FUNC_5 (char*,char*,int,int) ;
 long FUNC_6 (int ,int,int ) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_5,
     struct device_attribute *VAR_6, char *VAR_7)
{
 struct apds990x_chip *VAR_8 = FUNC_0(VAR_5);
 ssize_t VAR_9;
 u32 VAR_10;
 long VAR_11;

 if (FUNC_4(VAR_5))
  return -VAR_4;

 VAR_11 = FUNC_6(VAR_8->wait,
      !VAR_8->lux_wait_fresh_res,
      FUNC_1(VAR_3));
 if (!VAR_11)
  return -VAR_4;

 FUNC_2(&VAR_8->mutex);
 VAR_10 = (VAR_8->lux * VAR_8->lux_calib) / VAR_1;
 if (VAR_10 > (VAR_2 * VAR_0))
  VAR_10 = VAR_2 * VAR_0;

 VAR_9 = FUNC_5(VAR_7, "%d.%d\n",
  VAR_10 / VAR_0,
  VAR_10 % VAR_0);
 FUNC_3(&VAR_8->mutex);
 return VAR_9;
}
