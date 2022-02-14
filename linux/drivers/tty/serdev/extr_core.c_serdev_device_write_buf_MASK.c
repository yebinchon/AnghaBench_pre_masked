
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serdev_device {struct serdev_controller* ctrl; } ;
struct serdev_controller {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* write_buf ) (struct serdev_controller*,unsigned char const*,size_t) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct serdev_controller*,unsigned char const*,size_t) ;

int FUNC_1(struct serdev_device *VAR_1,
       const unsigned char *VAR_2, size_t VAR_3)
{
 struct serdev_controller *VAR_4 = VAR_1->ctrl;

 if (!VAR_4 || !VAR_4->ops->write_buf)
  return -VAR_0;

 return VAR_4->ops->write_buf(VAR_4, VAR_2, VAR_3);
}
