
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;






 unsigned int FUNC_1 (unsigned int) ;

 unsigned int FUNC_2 (unsigned int) ;

 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_3 (struct ni_gpct*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct ni_gpct *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_4);
 unsigned int VAR_6;
 unsigned int VAR_7;

 switch (VAR_5) {
 case 128:
 case 134:
 case 129:
 case 131:
 case 135:
 case 130:
 case 133:
 case 132:
  VAR_6 = VAR_5 & 0x1f;
  break;
 default:
  for (VAR_7 = 0; VAR_7 <= VAR_2; ++VAR_7) {
   if (VAR_5 == FUNC_2(VAR_7)) {
    VAR_6 = VAR_5 & 0x1f;
    break;
   }
  }
  if (VAR_7 <= VAR_2)
   break;
  for (VAR_7 = 0; VAR_7 <= VAR_1; ++VAR_7) {
   if (VAR_5 == FUNC_1(VAR_7)) {
    VAR_6 = VAR_5 & 0x1f;
    break;
   }
  }
  if (VAR_7 <= VAR_1)
   break;
  return -VAR_0;
 }
 FUNC_3(VAR_3, VAR_6);
 return 0;
}
