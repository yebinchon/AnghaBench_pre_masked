
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpgaimage {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 () ;
 int FUNC_1 (struct fpgaimage*) ;
 int FUNC_2 (struct fpgaimage*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct fpgaimage *VAR_1)
{
 int VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0();

 switch (VAR_2) {
 case 128:
  FUNC_4("image is bitstream format\n");
  VAR_3 = FUNC_2(VAR_1);
  if (VAR_3)
   return VAR_3;
  break;
 default:
  FUNC_3("unsupported fpga image format\n");
  return -VAR_0;
 }

 FUNC_1(VAR_1);

 return 0;
}
