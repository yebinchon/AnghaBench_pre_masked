
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpc32xx_usbd_dd_gad {int this_dma; } ;
struct lpc32xx_udc {int dd_cache; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct lpc32xx_usbd_dd_gad* FUNC_0 (int ,int,int *) ;

__attribute__((used)) static struct lpc32xx_usbd_dd_gad *FUNC_1(struct lpc32xx_udc *VAR_2)
{
 dma_addr_t VAR_3;
 struct lpc32xx_usbd_dd_gad *VAR_4;

 VAR_4 = FUNC_0(VAR_2->dd_cache, VAR_0 | VAR_1, &VAR_3);
 if (VAR_4)
  VAR_4->this_dma = VAR_3;

 return VAR_4;
}
