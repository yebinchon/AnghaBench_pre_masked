
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_ioreq16 {int addr; } ;
struct zd_chip {int usb; int mutex; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct zd_chip*) ;
 int FUNC_4 (int *,struct zd_ioreq16 const*,unsigned int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct zd_chip *VAR_1,
                  const struct zd_ioreq16 *VAR_2, unsigned int VAR_3)
{
 int VAR_4;
 unsigned int VAR_5, VAR_6, VAR_7, VAR_8;

 FUNC_0(FUNC_2(&VAR_1->mutex));
 FUNC_6(&VAR_1->usb);

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5 += VAR_6 + VAR_7) {
  VAR_7 = 0;
  VAR_8 = VAR_3-VAR_5;
  if (VAR_8 > VAR_0)
   VAR_8 = VAR_0;
  for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
   if (!VAR_2[VAR_5+VAR_6].addr) {
    VAR_7 = 1;
    break;
   }
  }

  VAR_4 = FUNC_4(&VAR_1->usb, &VAR_2[VAR_5], VAR_6);
  if (VAR_4) {
   FUNC_5(&VAR_1->usb, 0);
   FUNC_1(FUNC_3(VAR_1),
      "error zd_usb_iowrite16v. Error number %d\n",
      VAR_4);
   return VAR_4;
  }
 }

 return FUNC_5(&VAR_1->usb, 50 );
}
