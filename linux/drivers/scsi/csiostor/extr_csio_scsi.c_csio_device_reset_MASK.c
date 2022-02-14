
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct csio_lnode {int dummy; } ;
struct csio_hw {int lock; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct csio_hw*) ;
 struct csio_hw* FUNC_2 (struct csio_lnode*) ;
 int FUNC_3 (struct csio_hw*) ;
 int FUNC_4 (struct csio_hw*,int) ;
 int FUNC_5 (struct csio_hw*) ;
 struct csio_lnode* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static ssize_t
FUNC_9(struct device *VAR_1,
     struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct csio_lnode *VAR_5 = FUNC_6(FUNC_0(VAR_1));
 struct csio_hw *VAR_6 = FUNC_2(VAR_5);

 if (*VAR_3 != '1')
  return -VAR_0;


  FUNC_4(VAR_6, 1);


 FUNC_3(VAR_6);

 FUNC_7(&VAR_6->lock);
 FUNC_1(VAR_6);
 FUNC_8(&VAR_6->lock);


 FUNC_5(VAR_6);
 return VAR_4;
}
