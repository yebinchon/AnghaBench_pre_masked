
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sisusb_usb_data {scalar_t__ vrambase; scalar_t__ vramsize; int obufsize; int * obuf; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct sisusb_usb_data*) ;
 int FUNC_2 (struct sisusb_usb_data*,int) ;
 int FUNC_3 (struct sisusb_usb_data*,scalar_t__,int *,int,int *,int,int *) ;

__attribute__((used)) static int FUNC_4(struct sisusb_usb_data *VAR_1,
  u32 VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 ssize_t VAR_6;

 if (VAR_2 < VAR_1->vrambase)
  return 1;

 if (VAR_2 >= VAR_1->vrambase + VAR_1->vramsize)
  return 1;

 if (VAR_2 + VAR_3 > VAR_1->vrambase + VAR_1->vramsize)
  VAR_3 = VAR_1->vrambase + VAR_1->vramsize - VAR_2;

 if (VAR_3 <= 0)
  return 0;


 VAR_5 = FUNC_1(VAR_1);
 if (VAR_5 < 0)
  return -VAR_0;

 FUNC_0(VAR_1->obuf[VAR_5], 0, VAR_1->obufsize);




 VAR_4 = FUNC_3(VAR_1, VAR_2, ((void*)0), VAR_3, ((void*)0), VAR_5, &VAR_6);


 FUNC_2(VAR_1, VAR_5);

 return VAR_4;
}
