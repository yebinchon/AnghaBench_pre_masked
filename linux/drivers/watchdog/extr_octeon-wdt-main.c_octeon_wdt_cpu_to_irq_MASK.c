
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct irq_domain*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 struct irq_domain* FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(int VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0(VAR_3);
 VAR_5 = FUNC_1(VAR_3);

 if (FUNC_3(VAR_0)) {
  struct irq_domain *VAR_7;
  int VAR_8;

  VAR_7 = FUNC_4(VAR_5,
           VAR_2);
  VAR_8 = VAR_2 << 12 | 0x200 | VAR_4;
  VAR_6 = FUNC_2(VAR_7, VAR_8);
 } else {
  VAR_6 = VAR_1 + VAR_4;
 }
 return VAR_6;
}
