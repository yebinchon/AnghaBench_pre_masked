
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct csio_lnode {int dummy; } ;
struct csio_hw {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct csio_hw*) ;
 struct csio_hw* FUNC_2 (struct csio_lnode*) ;
 struct csio_lnode* FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,char*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 struct csio_lnode *VAR_4 = FUNC_3(FUNC_0(VAR_1));
 struct csio_hw *VAR_5 = FUNC_2(VAR_4);

 if (FUNC_1(VAR_5))
  return FUNC_4(VAR_3, VAR_0, "ready\n");
 else
  return FUNC_4(VAR_3, VAR_0, "not ready\n");
}
