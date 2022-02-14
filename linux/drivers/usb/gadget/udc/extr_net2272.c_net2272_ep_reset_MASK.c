
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int * ops; } ;
struct net2272_ep {scalar_t__ num; TYPE_1__ ep; int queue; int * desc; } ;


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
 int VAR_13 ;
 int FUNC_0 (int *) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (struct net2272_ep*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_3(struct net2272_ep *VAR_25)
{
 u8 VAR_26;

 VAR_25->desc = ((void*)0);
 FUNC_0(&VAR_25->queue);

 FUNC_2(&VAR_25->ep, ~0);
 VAR_25->ep.ops = &VAR_24;


 FUNC_1(VAR_25, VAR_8, 0);




 VAR_26 = (1 << VAR_16) | (1 << VAR_0);
 FUNC_1(VAR_25, VAR_10, VAR_26);

 VAR_26 = (1 << VAR_14) | (1 << VAR_13);
 if (VAR_25->num != 0)
  VAR_26 |= (1 << VAR_7) | (1 << VAR_6);

 FUNC_1(VAR_25, VAR_9, VAR_26);


 FUNC_1(VAR_25, VAR_11,
     (1 << VAR_2)
   | (1 << VAR_3)
   | (1 << VAR_5)
   | (1 << VAR_4)
   | (1 << VAR_17));

 FUNC_1(VAR_25, VAR_12,
       (1 << VAR_18)
     | (1 << VAR_21)
     | (1 << VAR_22)
     | (1 << VAR_19)
     | (1 << VAR_20)
     | (1 << VAR_23)
     | (1 << VAR_15)
     | (1 << VAR_1));


}
