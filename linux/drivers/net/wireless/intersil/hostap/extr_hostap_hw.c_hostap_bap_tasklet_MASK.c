
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_9__ {int bits; TYPE_1__* func; struct net_device* dev; } ;
typedef TYPE_2__ local_info_t ;
struct TYPE_8__ {int (* card_present ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_8)
{
 local_info_t *VAR_9 = (local_info_t *) VAR_8;
 struct net_device *VAR_10 = VAR_9->dev;
 u16 VAR_11;
 int VAR_12 = 30;

 if (VAR_9->func->card_present && !VAR_9->func->card_present(VAR_9))
  return;

 FUNC_7(VAR_6, &VAR_9->bits);



 while (VAR_12-- > 0) {
  VAR_11 = FUNC_0(VAR_1);
  if (VAR_11 == 0xffff || !(VAR_11 & VAR_0))
   break;
  if (VAR_11 & VAR_3)
   FUNC_4(VAR_9);
  if (VAR_11 & VAR_2)
   FUNC_3(VAR_9);
  if (VAR_11 & VAR_4)
   FUNC_5(VAR_9);
  if (VAR_11 & VAR_5)
   FUNC_6(VAR_9);
 }

 FUNC_7(VAR_7, &VAR_9->bits);
 FUNC_1(VAR_6, &VAR_9->bits);


 FUNC_2(VAR_10);
 FUNC_1(VAR_7, &VAR_9->bits);
}
