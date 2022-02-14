
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lance_private {int busmaster_regval; scalar_t__ lregs; int init_block_dvma; scalar_t__ pio_buffer; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct lance_private *VAR_6)
{
 u32 VAR_7;

 if (VAR_6->pio_buffer)
  VAR_7 = 0;
 else
  VAR_7 = FUNC_0(VAR_6->init_block_dvma);

 FUNC_1(VAR_1, VAR_6->lregs + VAR_4);
 FUNC_1(VAR_7 & 0xffff, VAR_6->lregs + VAR_5);
 FUNC_1(VAR_2, VAR_6->lregs + VAR_4);
 FUNC_1(VAR_7 >> 16, VAR_6->lregs + VAR_5);
 FUNC_1(VAR_3, VAR_6->lregs + VAR_4);
 FUNC_1(VAR_6->busmaster_regval, VAR_6->lregs + VAR_5);


 FUNC_1(VAR_0, VAR_6->lregs + VAR_4);
}
