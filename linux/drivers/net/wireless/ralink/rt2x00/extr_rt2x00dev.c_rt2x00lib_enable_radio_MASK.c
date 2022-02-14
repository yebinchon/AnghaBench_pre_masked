
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt2x00_dev {int flags; TYPE_2__* ops; } ;
struct TYPE_4__ {TYPE_1__* lib; } ;
struct TYPE_3__ {int (* set_device_state ) (struct rt2x00_dev*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rt2x00_dev*,int) ;
 int FUNC_1 (struct rt2x00_dev*,int) ;
 int FUNC_2 (struct rt2x00_dev*) ;
 int FUNC_3 (struct rt2x00_dev*) ;
 int FUNC_4 (struct rt2x00_dev*) ;
 int FUNC_5 (struct rt2x00_dev*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct rt2x00_dev*,int ) ;
 int FUNC_8 (struct rt2x00_dev*,int ) ;
 scalar_t__ FUNC_9 (int ,int *) ;

int FUNC_10(struct rt2x00_dev *VAR_3)
{
 int VAR_4;





 if (FUNC_9(VAR_0, &VAR_3->flags))
  return 0;




 FUNC_4(VAR_3);




 VAR_4 =
     VAR_3->ops->lib->set_device_state(VAR_3, VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_3->ops->lib->set_device_state(VAR_3, VAR_1);

 FUNC_1(VAR_3, 1);
 FUNC_0(VAR_3, 1);

 FUNC_6(VAR_0, &VAR_3->flags);




 FUNC_5(VAR_3);
 FUNC_2(VAR_3);




 FUNC_3(VAR_3);

 return 0;
}
