
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;



 unsigned int FUNC_1 (unsigned int) ;


 unsigned int FUNC_2 (unsigned int) ;

 int FUNC_3 (struct ni_gpct*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct ni_gpct *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6 = FUNC_0(VAR_5);
 unsigned int VAR_7;
 unsigned int VAR_8;

 switch (VAR_6) {
 case 129:
 case 128:
 case 130:
 case 132:
 case 133:
  VAR_7 = VAR_6 & 0x1f;
  break;
 case 131:
  VAR_7 = VAR_3;
  break;
 default:
  for (VAR_8 = 0; VAR_8 <= VAR_1; ++VAR_8) {
   if (VAR_6 == FUNC_1(VAR_8)) {
    VAR_7 = VAR_6 & 0x1f;
    break;
   }
  }
  if (VAR_8 <= VAR_1)
   break;
  for (VAR_8 = 0; VAR_8 <= VAR_2; ++VAR_8) {
   if (VAR_6 == FUNC_2(VAR_8)) {
    VAR_7 = VAR_6 & 0x1f;
    break;
   }
  }
  if (VAR_8 <= VAR_2)
   break;
  return -VAR_0;
 }
 FUNC_3(VAR_4, VAR_7);
 return 0;
}
