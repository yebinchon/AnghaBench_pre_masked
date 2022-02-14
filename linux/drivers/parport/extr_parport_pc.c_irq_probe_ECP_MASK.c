
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int irq; } ;


 int FUNC_0 (struct parport*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct parport*,int) ;
 int FUNC_2 (struct parport*) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (unsigned long) ;
 unsigned long FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct parport *VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;

 VAR_5 = FUNC_6();

 FUNC_1(VAR_3, VAR_0 << 5);
 FUNC_1(VAR_3, (VAR_1 << 5) | 0x04);
 FUNC_1(VAR_3, VAR_1 << 5);


 for (VAR_4 = 0; VAR_4 < 1024 && !(FUNC_3(FUNC_0(VAR_3)) & 0x02) ; VAR_4++)
  FUNC_4(0xaa, FUNC_2(VAR_3));

 VAR_3->irq = FUNC_5(VAR_5);
 FUNC_1(VAR_3, VAR_0 << 5);

 if (VAR_3->irq <= 0)
  VAR_3->irq = VAR_2;

 return VAR_3->irq;
}
