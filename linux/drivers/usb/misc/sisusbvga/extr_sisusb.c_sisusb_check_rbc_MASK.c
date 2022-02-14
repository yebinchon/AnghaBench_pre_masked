
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sisusb_usb_data {scalar_t__ vrambase; } ;


 int FUNC_0 (scalar_t__,scalar_t__*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct sisusb_usb_data *VAR_0, int *VAR_1,
  u32 VAR_2, int VAR_3)
{
 int VAR_4 = 0, VAR_5;
 u32 VAR_6, VAR_7;

 *VAR_1 = 0;

 for (VAR_5 = 0, VAR_6 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4 |= FUNC_1(VAR_0->vrambase + VAR_6, VAR_6);
  VAR_6 += VAR_2;
 }

 for (VAR_5 = 0, VAR_6 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4 |= FUNC_0(VAR_0->vrambase + VAR_6, &VAR_7);
  if (VAR_7 != VAR_6)
   return VAR_4;

  VAR_6 += VAR_2;
 }

 *VAR_1 = 1;
 return VAR_4;
}
