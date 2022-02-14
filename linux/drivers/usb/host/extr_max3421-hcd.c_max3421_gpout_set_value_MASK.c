
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_hcd {int dummy; } ;
struct max3421_hcd {int* iopins; int spi_thread; int todo; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct max3421_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct usb_hcd *VAR_2, u8 VAR_3, u8 VAR_4)
{
 struct max3421_hcd *VAR_5 = FUNC_0(VAR_2);
 u8 VAR_6, VAR_7;

 --VAR_3;
 if (VAR_3 >= VAR_1)
  return;

 VAR_6 = 1u << (VAR_3 % 4);
 VAR_7 = VAR_3 / 4;

 if (VAR_4)
  VAR_5->iopins[VAR_7] |= VAR_6;
 else
  VAR_5->iopins[VAR_7] &= ~VAR_6;
 FUNC_1(VAR_0, &VAR_5->todo);
 FUNC_2(VAR_5->spi_thread);
}
