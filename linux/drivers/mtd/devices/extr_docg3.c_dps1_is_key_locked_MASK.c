
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct docg3 {TYPE_1__* cascade; int device_id; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct docg3*,int ) ;
 int FUNC_1 (struct docg3*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int) ;
 struct docg3* FUNC_5 (struct device*,struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
      struct device_attribute *VAR_3, char *VAR_4)
{
 struct docg3 *VAR_5 = FUNC_5(VAR_2, VAR_3);
 int VAR_6;

 FUNC_2(&VAR_5->cascade->lock);
 FUNC_1(VAR_5, VAR_5->device_id);
 VAR_6 = FUNC_0(VAR_5, VAR_0);
 FUNC_1(VAR_5, 0);
 FUNC_3(&VAR_5->cascade->lock);

 return FUNC_4(VAR_4, "%d\n", !(VAR_6 & VAR_1));
}
