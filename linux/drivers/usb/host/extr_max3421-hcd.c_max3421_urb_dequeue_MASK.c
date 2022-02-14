
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct urb {int dummy; } ;
struct max3421_hcd {int lock; int spi_thread; int todo; } ;


 int VAR_0 ;
 struct max3421_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct usb_hcd*,struct urb*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct usb_hcd *VAR_1, struct urb *VAR_2, int VAR_3)
{
 struct max3421_hcd *VAR_4 = FUNC_0(VAR_1);
 unsigned long VAR_5;
 int VAR_6;

 FUNC_2(&VAR_4->lock, VAR_5);





 VAR_6 = FUNC_4(VAR_1, VAR_2, VAR_3);
 if (VAR_6 == 0) {
  FUNC_1(VAR_0, &VAR_4->todo);
  FUNC_5(VAR_4->spi_thread);
 }
 FUNC_3(&VAR_4->lock, VAR_5);
 return VAR_6;
}
