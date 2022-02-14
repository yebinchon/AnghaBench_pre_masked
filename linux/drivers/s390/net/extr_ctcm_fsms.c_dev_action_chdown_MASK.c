
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct ctcm_priv* ml_priv; } ;
struct ctcm_priv {int * channel; } ;
typedef int fsm_instance ;


 int FUNC_0 (int ,struct net_device*,char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;

 int VAR_5 ;



 scalar_t__ FUNC_1 (struct ctcm_priv*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ,size_t,int ) ;

__attribute__((used)) static void FUNC_5(fsm_instance *VAR_8, int VAR_9, void *VAR_10)
{

 struct net_device *VAR_11 = VAR_10;
 struct ctcm_priv *VAR_12 = VAR_11->ml_priv;

 FUNC_0(VAR_7, VAR_11, "");

 switch (FUNC_2(VAR_8)) {
 case 133:
  if (VAR_9 == VAR_3)
   FUNC_3(VAR_8, 131);
  else
   FUNC_3(VAR_8, 132);
  break;
 case 132:
  if (VAR_9 == VAR_3)
   FUNC_3(VAR_8, VAR_4);
  break;
 case 131:
  if (VAR_9 == VAR_2)
   FUNC_3(VAR_8, VAR_4);
  break;
 case 129:
  if (VAR_9 == VAR_3)
   FUNC_3(VAR_8, 130);
  else
   FUNC_3(VAR_8, 128);
  break;
 case 130:
  if (VAR_9 == VAR_2)
   FUNC_3(VAR_8, VAR_5);
  break;
 case 128:
  if (VAR_9 == VAR_3)
   FUNC_3(VAR_8, VAR_5);
  break;
 }
 if (FUNC_1(VAR_12)) {
  if (VAR_9 == VAR_2)
   FUNC_4(VAR_12->channel[VAR_0],
    VAR_0, VAR_6);
  else
   FUNC_4(VAR_12->channel[VAR_1],
    VAR_1, VAR_6);
 }
}
