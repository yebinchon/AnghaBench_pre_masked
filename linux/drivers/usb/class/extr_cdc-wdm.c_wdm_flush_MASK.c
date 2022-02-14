
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wdm_device {scalar_t__ werr; TYPE_1__* intf; int flags; int wait; } ;
struct file {struct wdm_device* private_data; } ;
typedef int fl_owner_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, fl_owner_t VAR_4)
{
 struct wdm_device *VAR_5 = VAR_3->private_data;

 FUNC_3(VAR_5->wait,






   !FUNC_1(VAR_2, &VAR_5->flags) ||
   FUNC_1(VAR_1, &VAR_5->flags));


 if (FUNC_1(VAR_1, &VAR_5->flags))
  return -VAR_0;
 if (VAR_5->werr < 0)
  FUNC_0(&VAR_5->intf->dev, "Error in flush path: %d\n",
   VAR_5->werr);

 return FUNC_2(VAR_5->werr);
}
