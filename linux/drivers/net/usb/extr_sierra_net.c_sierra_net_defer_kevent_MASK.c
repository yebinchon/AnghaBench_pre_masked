
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct sierra_net_data {int sierra_net_kevent; int kevent_flags; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 struct sierra_net_data* FUNC_2 (struct usbnet*) ;

__attribute__((used)) static void FUNC_3(struct usbnet *VAR_0, int VAR_1)
{
 struct sierra_net_data *VAR_2 = FUNC_2(VAR_0);

 FUNC_1(VAR_1, &VAR_2->kevent_flags);
 FUNC_0(&VAR_2->sierra_net_kevent);
}
