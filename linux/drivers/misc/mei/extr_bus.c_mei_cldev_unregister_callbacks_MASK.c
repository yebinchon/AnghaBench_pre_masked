
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_cl_device {int * notif_cb; int notif_work; int * rx_cb; int rx_work; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct mei_cl_device *VAR_0)
{
 if (VAR_0->rx_cb) {
  FUNC_0(&VAR_0->rx_work);
  VAR_0->rx_cb = ((void*)0);
 }

 if (VAR_0->notif_cb) {
  FUNC_0(&VAR_0->notif_work);
  VAR_0->notif_cb = ((void*)0);
 }
}
