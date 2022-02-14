
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bh1770_chip {int mutex; int lux_wait_result; int wait; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bh1770_chip*) ;
 struct bh1770_chip* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct device*) ;
 int FUNC_6 (char*,char*,int) ;
 long FUNC_7 (int ,int,int ) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2,
       struct device_attribute *VAR_3, char *VAR_4)
{
 struct bh1770_chip *VAR_5 = FUNC_1(VAR_2);
 ssize_t VAR_6;
 long VAR_7;

 if (FUNC_5(VAR_2))
  return -VAR_1;

 VAR_7 = FUNC_7(VAR_5->wait,
     !VAR_5->lux_wait_result,
     FUNC_2(VAR_0));
 if (!VAR_7)
  return -VAR_1;

 FUNC_3(&VAR_5->mutex);
 VAR_6 = FUNC_6(VAR_4, "%d\n", FUNC_0(VAR_5));
 FUNC_4(&VAR_5->mutex);

 return VAR_6;
}
