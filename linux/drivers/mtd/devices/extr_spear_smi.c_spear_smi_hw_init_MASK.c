
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spear_smi {int lock; scalar_t__ io_base; int clk_rate; int clk; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct spear_smi *VAR_5)
{
 unsigned long VAR_6 = 0;
 u32 VAR_7 = 0;
 u32 VAR_8;

 VAR_6 = FUNC_1(VAR_5->clk);


 VAR_7 = FUNC_0(VAR_6, VAR_5->clk_rate);





 VAR_8 = VAR_2 | VAR_0 | VAR_1 | (VAR_7 << 8);

 FUNC_2(&VAR_5->lock);

 FUNC_4(0, VAR_5->io_base + VAR_4);

 FUNC_4(VAR_8, VAR_5->io_base + VAR_3);
 FUNC_3(&VAR_5->lock);
}
