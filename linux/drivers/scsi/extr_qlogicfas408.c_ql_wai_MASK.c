
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlogicfas408_priv {int qbase; int qabort; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 unsigned long VAR_6 ;
 int FUNC_3 (struct qlogicfas408_priv*) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct qlogicfas408_priv *VAR_7)
{
 int VAR_8;
 int VAR_9 = VAR_7->qbase;
 unsigned long VAR_10;

 VAR_8 = 0;
 VAR_10 = VAR_6 + VAR_5;
 while (FUNC_5(VAR_6, VAR_10) && !VAR_7->qabort &&
     !((VAR_8 = FUNC_2(VAR_9 + 4)) & 0xe0)) {
  FUNC_0();
  FUNC_1();
 }
 if (FUNC_4(VAR_6, VAR_10))
  return (VAR_4);
 if (VAR_7->qabort)
  return (VAR_7->qabort == 1 ? VAR_0 : VAR_3);
 if (VAR_8 & 0x60)
  FUNC_3(VAR_7);
 if (VAR_8 & 0x20)
  return (VAR_2);
 if (VAR_8 & 0x40)
  return (VAR_1);
 return 0;
}
