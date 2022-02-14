
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev; struct ctcm_priv* ml_priv; int name; } ;
struct ctcm_priv {int * channel; } ;
typedef int fsm_instance ;


 int FUNC_0 (int ,int ,char*,int ,int ,struct ctcm_priv*,int,int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;

 scalar_t__ FUNC_1 (struct ctcm_priv*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ,size_t,int ) ;

__attribute__((used)) static void FUNC_7(fsm_instance *VAR_10, int VAR_11, void *VAR_12)
{
 struct net_device *VAR_13 = VAR_12;
 struct ctcm_priv *VAR_14 = VAR_13->ml_priv;
 int VAR_15 = FUNC_4(VAR_10);

 FUNC_0(VAR_9, VAR_3,
   "%s(%s): priv = %p [%d,%d]\n ", VAR_0,
    VAR_13->name, VAR_13->ml_priv, VAR_15, VAR_11);

 switch (FUNC_4(VAR_10)) {
 case 131:
  if (VAR_11 == VAR_4)
   FUNC_5(VAR_10, 130);
  else
   FUNC_5(VAR_10, 132);
  break;
 case 132:
  if (VAR_11 == VAR_4) {
   FUNC_5(VAR_10, VAR_6);
   FUNC_3(&VAR_13->dev,
    "Connected with remote side\n");
   FUNC_2(VAR_13);
  }
  break;
 case 130:
  if (VAR_11 == VAR_5) {
   FUNC_5(VAR_10, VAR_6);
   FUNC_3(&VAR_13->dev,
    "Connected with remote side\n");
   FUNC_2(VAR_13);
  }
  break;
 case 128:
  if (VAR_11 == VAR_4)
   FUNC_5(VAR_10, VAR_7);
  break;
 case 129:
  if (VAR_11 == VAR_5)
   FUNC_5(VAR_10, VAR_7);
  break;
 }

 if (FUNC_1(VAR_14)) {
  if (VAR_11 == VAR_4)
   FUNC_6(VAR_14->channel[VAR_1],
    VAR_1, VAR_8);
  else
   FUNC_6(VAR_14->channel[VAR_2],
    VAR_2, VAR_8);
 }
}
