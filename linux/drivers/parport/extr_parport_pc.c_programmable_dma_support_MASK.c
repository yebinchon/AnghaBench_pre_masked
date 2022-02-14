
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int dummy; } ;


 int FUNC_0 (struct parport*) ;
 int FUNC_1 (struct parport*) ;
 int VAR_0 ;
 int FUNC_2 (struct parport*,unsigned char) ;
 int VAR_1 ;
 int FUNC_3 (struct parport*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct parport *VAR_2)
{
 unsigned char VAR_3 = FUNC_4(FUNC_1(VAR_2));
 int VAR_4;

 FUNC_3(VAR_2, VAR_0);

 VAR_4 = FUNC_4(FUNC_0(VAR_2)) & 0x07;


 if ((VAR_4 & 0x03) == 0)
  VAR_4 = VAR_1;

 FUNC_2(VAR_2, VAR_3);
 return VAR_4;
}
