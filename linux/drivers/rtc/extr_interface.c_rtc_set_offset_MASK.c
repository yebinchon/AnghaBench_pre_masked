
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct rtc_device {int ops_lock; TYPE_2__ dev; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_offset ) (int ,long) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,long) ;
 int FUNC_3 (long,int) ;

int FUNC_4(struct rtc_device *VAR_2, long VAR_3)
{
 int VAR_4;

 if (!VAR_2->ops)
  return -VAR_1;

 if (!VAR_2->ops->set_offset)
  return -VAR_0;

 FUNC_0(&VAR_2->ops_lock);
 VAR_4 = VAR_2->ops->set_offset(VAR_2->dev.parent, VAR_3);
 FUNC_1(&VAR_2->ops_lock);

 FUNC_3(VAR_3, VAR_4);
 return VAR_4;
}
