
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_device {scalar_t__ event; int lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

int FUNC_2(struct usbip_device *VAR_0)
{
 int VAR_1 = 0;
 unsigned long VAR_2;

 FUNC_0(&VAR_0->lock, VAR_2);
 if (VAR_0->event != 0)
  VAR_1 = 1;
 FUNC_1(&VAR_0->lock, VAR_2);

 return VAR_1;
}
