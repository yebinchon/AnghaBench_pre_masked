
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int dummy; } ;


 int FUNC_0 (struct parport*) ;
 int VAR_0 ;
 int FUNC_1 (struct parport*) ;
 unsigned char FUNC_2 (struct parport*) ;
 int FUNC_3 (struct parport*,unsigned char) ;
 unsigned char FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct parport *VAR_1)
{
 unsigned char VAR_2, VAR_3;







 FUNC_1(VAR_1);


 VAR_3 = 0xc;
 FUNC_5 (VAR_3, FUNC_0 (VAR_1));






 VAR_2 = FUNC_4 (FUNC_0 (VAR_1));
 if ((VAR_2 & 0xf) == VAR_3) {
  VAR_3 = 0xe;
  FUNC_5 (VAR_3, FUNC_0 (VAR_1));
  VAR_2 = FUNC_4 (FUNC_0 (VAR_1));
  FUNC_5 (0xc, FUNC_0 (VAR_1));
  if ((VAR_2 & 0xf) == VAR_3)
   return VAR_0;
 }



 VAR_3 = 0xaa;
 FUNC_3 (VAR_1, VAR_3);
 VAR_2 = FUNC_2 (VAR_1);
 if (VAR_2 == VAR_3) {
  VAR_3 = 0x55;
  FUNC_3 (VAR_1, VAR_3);
  VAR_2 = FUNC_2 (VAR_1);
  if (VAR_2 == VAR_3)
   return VAR_0;
 }

 return 0;
}
