
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct apds990x_chip {int lux_persistence; int prox_persistence; int again_meas; int again_next; int pdrive; int pdiode; int pgain; TYPE_1__* pdata; } ;
struct TYPE_2__ {int ppcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct apds990x_chip*,int ) ;
 int FUNC_1 (struct apds990x_chip*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct apds990x_chip *VAR_13)
{

 FUNC_1(VAR_13, VAR_3, VAR_4);


 FUNC_1(VAR_13, VAR_8, VAR_9);
 FUNC_1(VAR_13, VAR_10, VAR_11);
 FUNC_0(VAR_13, VAR_12);

 FUNC_1(VAR_13, VAR_1, 0);


 FUNC_1(VAR_13, VAR_5,
   (VAR_13->lux_persistence << VAR_0) |
   (VAR_13->prox_persistence << VAR_7));

 FUNC_1(VAR_13, VAR_6, VAR_13->pdata->ppcount);


 VAR_13->again_meas = 1;
 VAR_13->again_next = 1;
 FUNC_1(VAR_13, VAR_2,
   (VAR_13->pdrive << 6) |
   (VAR_13->pdiode << 4) |
   (VAR_13->pgain << 2) |
   (VAR_13->again_next << 0));
 return 0;
}
