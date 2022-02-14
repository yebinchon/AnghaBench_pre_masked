
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
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct lpc32xx_udc*) ;
 int FUNC_7 (struct lpc32xx_udc*) ;
 int FUNC_8 (struct lpc32xx_udc*,TYPE_1__*) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_5, void *VAR_6)
{
 u32 VAR_7;
 struct lpc32xx_udc *VAR_8 = VAR_6;

 FUNC_4(&VAR_8->lock);


 FUNC_9(VAR_4, FUNC_1(VAR_8->udp_baseaddr));


 VAR_7 = FUNC_3(FUNC_2(VAR_8->udp_baseaddr));


 if (VAR_7 & (FUNC_0(0, VAR_1) | FUNC_0(0, VAR_0))) {

  if (VAR_7 & (FUNC_0(0, VAR_0)))
   FUNC_6(VAR_8);


  if (VAR_7 & (FUNC_0(0, VAR_1)))
   FUNC_7(VAR_8);
 }


 if (VAR_7 & ~(FUNC_0(0, VAR_1) | FUNC_0(0, VAR_0))) {
  int VAR_9;


  for (VAR_9 = 1; VAR_9 < VAR_3; VAR_9++) {
   if (VAR_7 & (1 << VAR_8->ep[VAR_9].hwep_num))
    FUNC_8(VAR_8, &VAR_8->ep[VAR_9]);
  }
 }

 FUNC_5(&VAR_8->lock);

 return VAR_2;
}
