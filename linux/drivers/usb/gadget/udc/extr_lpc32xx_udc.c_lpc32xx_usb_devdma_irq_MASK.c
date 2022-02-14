
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lpc32xx_udc {int lock; TYPE_1__* ep; int udp_baseaddr; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int hwep_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct lpc32xx_udc*,TYPE_1__*) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_2, void *VAR_3)
{
 struct lpc32xx_udc *VAR_4 = VAR_3;

 int VAR_5;
 u32 VAR_6;

 FUNC_5(&VAR_4->lock);


 VAR_6 = FUNC_4(FUNC_0(VAR_4->udp_baseaddr)) |
  (FUNC_4(FUNC_1(VAR_4->udp_baseaddr)) &
   FUNC_4(FUNC_2(VAR_4->udp_baseaddr))) |
  FUNC_4(FUNC_3(VAR_4->udp_baseaddr));
 for (VAR_5 = 1; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_6 & (1 << VAR_4->ep[VAR_5].hwep_num))
   FUNC_7(VAR_4, &VAR_4->ep[VAR_5]);
 }

 FUNC_6(&VAR_4->lock);

 return VAR_0;
}
