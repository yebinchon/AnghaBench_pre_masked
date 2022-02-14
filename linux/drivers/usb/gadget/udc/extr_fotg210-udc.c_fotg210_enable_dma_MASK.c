
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fotg210_udc {scalar_t__ reg; } ;
struct fotg210_ep {int dir_in; scalar_t__ epnum; struct fotg210_udc* fotg210; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct fotg210_ep *VAR_8,
         dma_addr_t VAR_9, u32 VAR_10)
{
 u32 VAR_11;
 struct fotg210_udc *VAR_12 = VAR_8->fotg210;


 VAR_11 = FUNC_3(VAR_12->reg + VAR_4);
 VAR_11 &= ~(FUNC_0(0xFFFF) | FUNC_1(1));
 VAR_11 |= FUNC_0(VAR_10) | FUNC_1(VAR_8->dir_in);
 FUNC_4(VAR_11, VAR_12->reg + VAR_4);


 VAR_11 = FUNC_3(VAR_12->reg + VAR_6);
 if (VAR_8->epnum)
  VAR_11 |= FUNC_2(VAR_8->epnum - 1);
 else
  VAR_11 |= VAR_1;
 FUNC_4(VAR_11, VAR_12->reg + VAR_6);


 FUNC_4(VAR_9, VAR_12->reg + VAR_5);


 VAR_11 = FUNC_3(VAR_12->reg + VAR_7);
 VAR_11 &= ~(VAR_2 | VAR_3);
 FUNC_4(VAR_11, VAR_12->reg + VAR_7);


 VAR_11 = FUNC_3(VAR_12->reg + VAR_4);
 VAR_11 |= VAR_0;
 FUNC_4(VAR_11, VAR_12->reg + VAR_4);
}
