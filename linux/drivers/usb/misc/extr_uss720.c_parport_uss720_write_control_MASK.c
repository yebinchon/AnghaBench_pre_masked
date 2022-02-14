
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport_uss720_private {int* reg; } ;
struct parport {struct parport_uss720_private* private_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct parport*,int,unsigned char,int ) ;

__attribute__((used)) static void FUNC_1(struct parport *VAR_1, unsigned char VAR_2)
{
 struct parport_uss720_private *VAR_3 = VAR_1->private_data;

 VAR_2 = (VAR_2 & 0xf) | (VAR_3->reg[1] & 0xf0);
 if (FUNC_0(VAR_1, 2, VAR_2, VAR_0))
  return;
 VAR_3->reg[1] = VAR_2;
}
