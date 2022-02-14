
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ni903x_wdt {scalar_t__ io_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ni903x_wdt *VAR_3)
{
 u8 VAR_4 = FUNC_0(VAR_3->io_base + VAR_0);

 FUNC_1(VAR_4 | VAR_2, VAR_3->io_base + VAR_0);
 FUNC_1(VAR_4 | VAR_1, VAR_3->io_base + VAR_0);
}
