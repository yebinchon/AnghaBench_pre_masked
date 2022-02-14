
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {int dummy; } ;
typedef int loff_t ;
struct TYPE_4__ {int i_rdev; } ;
struct TYPE_3__ {int mutex; int resource; } ;


 int VAR_0 ;

 unsigned int FUNC_0 (int ) ;

 TYPE_2__* FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*,int ,int,size_t) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int* VAR_2 ;
 size_t FUNC_5 (int ) ;

__attribute__((used)) static loff_t FUNC_6(struct file *VAR_3, loff_t VAR_4, int VAR_5)
{
 unsigned int VAR_6 = FUNC_0(FUNC_1(VAR_3)->i_rdev);
 size_t VAR_7;
 loff_t VAR_8;

 switch (VAR_2[VAR_6]) {
 case 129:
 case 128:
  FUNC_3(&VAR_1[VAR_6].mutex);
  VAR_7 = FUNC_5(VAR_1[VAR_6].resource);
  VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_7);
  FUNC_4(&VAR_1[VAR_6].mutex);
  return VAR_8;
 }

 return -VAR_0;
}
