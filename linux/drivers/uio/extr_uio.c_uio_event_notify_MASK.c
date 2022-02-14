
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio_info {struct uio_device* uio_dev; } ;
struct uio_device {int async_queue; int wait; int event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct uio_info *VAR_2)
{
 struct uio_device *VAR_3 = VAR_2->uio_dev;

 FUNC_0(&VAR_3->event);
 FUNC_2(&VAR_3->wait);
 FUNC_1(&VAR_3->async_queue, VAR_1, VAR_0);
}
