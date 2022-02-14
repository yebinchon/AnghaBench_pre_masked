
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sisusb_usb_data {int vramsize; scalar_t__ vrambase; } ;


 int VAR_0 ;
 int FUNC_0 (struct sisusb_usb_data*,scalar_t__,int) ;
 int FUNC_1 (struct sisusb_usb_data*,int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct sisusb_usb_data *VAR_1,
  int VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 u32 VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_8 = 640; VAR_9 = 480; VAR_10 = 2;

 VAR_5 = VAR_1->vrambase;

 if (VAR_2)
  VAR_7 = VAR_1->vramsize;
 else
  VAR_7 = VAR_8 * VAR_10 * VAR_9;

 VAR_4 = FUNC_0(VAR_1, VAR_5, VAR_7);

 if (!VAR_4 && VAR_3) {
  for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
   VAR_5 = VAR_1->vrambase + (VAR_6 * VAR_10);
   VAR_4 |= FUNC_1(VAR_1, VAR_0,
     VAR_5, 0xf100);
   VAR_5 += (VAR_8 * (VAR_9-1) * VAR_10);
   VAR_4 |= FUNC_1(VAR_1, VAR_0,
     VAR_5, 0xf100);
  }
  for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++) {
   VAR_5 = VAR_1->vrambase + ((VAR_6 * VAR_8) * VAR_10);
   VAR_4 |= FUNC_1(VAR_1, VAR_0,
     VAR_5, 0xf100);
   VAR_5 += ((VAR_8 - 1) * VAR_10);
   VAR_4 |= FUNC_1(VAR_1, VAR_0,
     VAR_5, 0xf100);
  }
 }

 return VAR_4;
}
