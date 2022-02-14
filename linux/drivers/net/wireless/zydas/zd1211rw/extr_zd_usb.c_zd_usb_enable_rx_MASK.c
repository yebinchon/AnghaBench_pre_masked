
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_usb_rx {int setup_mutex; } ;
struct zd_usb {struct zd_usb_rx rx; } ;


 int FUNC_0 (struct zd_usb*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct zd_usb*) ;

int FUNC_4(struct zd_usb *VAR_0)
{
 int VAR_1;
 struct zd_usb_rx *VAR_2 = &VAR_0->rx;

 FUNC_1(&VAR_2->setup_mutex);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_2->setup_mutex);

 FUNC_3(VAR_0);

 return VAR_1;
}
