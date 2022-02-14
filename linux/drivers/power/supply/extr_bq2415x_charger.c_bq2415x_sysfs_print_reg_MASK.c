
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bq2415x_device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct bq2415x_device*,int) ;
 int FUNC_1 (char*,char*,int,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct bq2415x_device *VAR_0,
           u8 VAR_1,
           char *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0, VAR_1);

 if (VAR_3 < 0)
  return FUNC_1(VAR_2, "%#.2x=error %d\n", VAR_1, VAR_3);
 return FUNC_1(VAR_2, "%#.2x=%#.2x\n", VAR_1, VAR_3);
}
