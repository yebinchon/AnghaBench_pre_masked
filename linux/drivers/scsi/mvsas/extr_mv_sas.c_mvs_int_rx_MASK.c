
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mvs_info {int rx_cons; int * rx; } ;
struct TYPE_2__ {int (* rx_update ) (struct mvs_info*) ;int (* int_full ) (struct mvs_info*) ;} ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct mvs_info*,int,int ) ;
 int FUNC_3 (struct mvs_info*,int) ;
 int FUNC_4 (struct mvs_info*) ;
 int FUNC_5 (struct mvs_info*) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct mvs_info *VAR_7, bool VAR_8)
{
 u32 VAR_9, VAR_10;
 bool VAR_11 = 0;






 VAR_9 = VAR_7->rx_cons;
 VAR_7->rx_cons = FUNC_0(VAR_7->rx[0]);
 if (VAR_7->rx_cons == 0xfff)
  return 0;





 if (FUNC_6(VAR_7->rx_cons == VAR_9))
  VAR_7->rx_cons = VAR_0->rx_update(VAR_7) & VAR_6;

 if (VAR_7->rx_cons == VAR_9)
  return 0;

 while (VAR_7->rx_cons != VAR_9) {

  VAR_9 = (VAR_9 + 1) & (VAR_1 - 1);
  VAR_10 = FUNC_0(VAR_7->rx[VAR_9 + 1]);

  if (FUNC_1(VAR_10 & VAR_3))
   FUNC_2(VAR_7, VAR_10, 0);
  if (VAR_10 & VAR_2) {
   VAR_11 = 1;
  } else if (VAR_10 & VAR_4) {
   if (!(VAR_10 & VAR_3))
    FUNC_2(VAR_7, VAR_10, 0);
  } else if (VAR_10 & VAR_5) {
   FUNC_3(VAR_7, VAR_10);
  }
 }

 if (VAR_11 && VAR_8)
  VAR_0->int_full(VAR_7);
 return 0;
}
