
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_usb_rx {int setup_mutex; int lock; int * urbs; } ;
struct zd_usb {struct zd_usb_rx rx; } ;


 int FUNC_0 (struct zd_usb*) ;
 int FUNC_1 (struct zd_usb*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct zd_usb*) ;

__attribute__((used)) static void FUNC_7(struct zd_usb *VAR_0)
{
 bool VAR_1;
 struct zd_usb_rx *VAR_2 = &VAR_0->rx;
 unsigned long VAR_3;

 FUNC_2(&VAR_2->setup_mutex);

 FUNC_4(&VAR_2->lock, VAR_3);
 VAR_1 = VAR_2->urbs != ((void*)0);
 FUNC_5(&VAR_2->lock, VAR_3);

 if (VAR_1) {
  FUNC_0(VAR_0);
  FUNC_1(VAR_0);
 }

 FUNC_3(&VAR_2->setup_mutex);

 if (VAR_1)
  FUNC_6(VAR_0);
}
