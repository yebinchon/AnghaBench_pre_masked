
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asm9260_wdt_priv {scalar_t__ iobase; int wdd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct asm9260_wdt_priv *VAR_5)
{


 FUNC_1(VAR_0 | VAR_1, VAR_5->iobase + VAR_3);

 FUNC_1(0xff, VAR_5->iobase + VAR_4);

 FUNC_0(&VAR_5->wdd);




 FUNC_1(0xff, VAR_5->iobase + VAR_2);

 FUNC_2(1000);
}
