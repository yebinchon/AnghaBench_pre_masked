
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ftdi {int kref; int status_work; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct usb_ftdi *VAR_0, unsigned int VAR_1)
{
 if (FUNC_1(&VAR_0->status_work, VAR_1))
  FUNC_0(&VAR_0->kref);
}
