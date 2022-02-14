
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int dummy; } ;


 int FUNC_0 (struct parport*) ;
 int FUNC_1 (struct parport*) ;
 int VAR_0 ;
 int FUNC_2 (struct parport*,unsigned char) ;

 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct parport *VAR_1)
{
 int VAR_2, VAR_3;
 unsigned char VAR_4 = FUNC_3(FUNC_1(VAR_1));
 static const int VAR_5[8] = {
  128, 7, 9, 10, 11, 14, 15, 5
 };

 FUNC_2(VAR_1, VAR_0 << 5);

 VAR_3 = (FUNC_3(FUNC_0(VAR_1)) >> 3) & 0x07;
 VAR_2 = VAR_5[VAR_3];

 FUNC_2(VAR_1, VAR_4);
 return VAR_2;
}
