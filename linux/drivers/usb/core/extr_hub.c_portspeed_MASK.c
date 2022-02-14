
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hub {int hdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline char *FUNC_2(struct usb_hub *VAR_2, int VAR_3)
{
 if (FUNC_1(VAR_2->hdev))
  return "10.0 Gb/s";
 if (FUNC_0(VAR_2->hdev))
  return "5.0 Gb/s";
 if (VAR_3 & VAR_0)
  return "480 Mb/s";
 else if (VAR_3 & VAR_1)
  return "1.5 Mb/s";
 else
  return "12 Mb/s";
}
