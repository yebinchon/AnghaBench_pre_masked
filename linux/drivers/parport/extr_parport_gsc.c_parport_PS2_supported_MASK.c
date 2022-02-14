
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport_gsc_private {int ctr_writable; } ;
struct parport {struct parport_gsc_private* private_data; int modes; } ;


 int VAR_0 ;
 int FUNC_0 (struct parport*) ;
 int FUNC_1 (struct parport*) ;
 int FUNC_2 (struct parport*) ;
 int FUNC_3 (struct parport*) ;
 int FUNC_4 (struct parport*,int) ;

__attribute__((used)) static int FUNC_5(struct parport *VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(VAR_1);


 FUNC_2 (VAR_1);

 FUNC_4(VAR_1, 0x55);
 if (FUNC_3(VAR_1) != 0x55) VAR_2++;

 FUNC_4(VAR_1, 0xaa);
 if (FUNC_3(VAR_1) != 0xaa) VAR_2++;


 FUNC_1 (VAR_1);

 if (VAR_2) {
  VAR_1->modes |= VAR_0;
 } else {
  struct parport_gsc_private *VAR_3 = VAR_1->private_data;
  VAR_3->ctr_writable &= ~0x20;
 }

 return VAR_2;
}
