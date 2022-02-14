
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_ioreq32 {int dummy; } ;
struct zd_chip {int usb; } ;


 int FUNC_0 (struct zd_chip*,struct zd_ioreq32 const*,unsigned int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct zd_chip *VAR_0, const struct zd_ioreq32 *VAR_1,
     unsigned int VAR_2)
{
 int VAR_3;

 FUNC_2(&VAR_0->usb);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_1(&VAR_0->usb, 0);
  return VAR_3;
 }
 return FUNC_1(&VAR_0->usb, 50 );
}
