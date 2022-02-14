
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt2x00_dev {int flags; TYPE_2__* ops; } ;
struct TYPE_4__ {TYPE_1__* lib; } ;
struct TYPE_3__ {int (* initialize ) (struct rt2x00_dev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rt2x00_dev*,int ) ;
 int FUNC_1 (struct rt2x00_dev*) ;
 int FUNC_2 (struct rt2x00_dev*) ;
 int FUNC_3 (struct rt2x00_dev*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct rt2x00_dev *VAR_2)
{
 int VAR_3;

 if (FUNC_6(VAR_0, &VAR_2->flags))
  return 0;




 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  return VAR_3;




 VAR_3 = VAR_2->ops->lib->initialize(VAR_2);
 if (VAR_3) {
  FUNC_2(VAR_2);
  return VAR_3;
 }

 FUNC_4(VAR_0, &VAR_2->flags);




 if (FUNC_0(VAR_2, VAR_1))
  FUNC_3(VAR_2);

 return 0;
}
