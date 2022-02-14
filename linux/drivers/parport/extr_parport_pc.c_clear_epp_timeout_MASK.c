
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int dummy; } ;


 int FUNC_0 (struct parport*) ;
 int FUNC_1 (unsigned char,int ) ;
 int FUNC_2 (struct parport*) ;

__attribute__((used)) static int FUNC_3(struct parport *VAR_0)
{
 unsigned char VAR_1;

 if (!(FUNC_2(VAR_0) & 0x01))
  return 1;


 FUNC_2(VAR_0);
 VAR_1 = FUNC_2(VAR_0);
 FUNC_1(VAR_1 | 0x01, FUNC_0(VAR_0));
 FUNC_1(VAR_1 & 0xfe, FUNC_0(VAR_0));
 VAR_1 = FUNC_2(VAR_0);

 return !(VAR_1 & 0x01);
}
