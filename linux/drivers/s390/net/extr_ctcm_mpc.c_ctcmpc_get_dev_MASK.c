
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct ctcm_priv* ml_priv; } ;
struct ctcm_priv {int * mpcg; } ;


 int FUNC_0 (int ,int ,char*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_1 (int *,char*) ;
 int VAR_4 ;
 int FUNC_2 (char*,char*,char*,int) ;

__attribute__((used)) static struct net_device *FUNC_3(int VAR_5)
{
 char VAR_6[20];
 struct net_device *VAR_7;
 struct ctcm_priv *VAR_8;

 FUNC_2(VAR_6, "%s%i", VAR_2, VAR_5);

 VAR_7 = FUNC_1(&VAR_4, VAR_6);

 if (VAR_7 == ((void*)0)) {
  FUNC_0(VAR_3, VAR_1,
   "%s: Device not found by name: %s",
     VAR_0, VAR_6);
  return ((void*)0);
 }
 VAR_8 = VAR_7->ml_priv;
 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_3, VAR_1,
   "%s(%s): dev->ml_priv is NULL",
     VAR_0, VAR_6);
  return ((void*)0);
 }
 if (VAR_8->mpcg == ((void*)0)) {
  FUNC_0(VAR_3, VAR_1,
   "%s(%s): priv->mpcg is NULL",
     VAR_0, VAR_6);
  return ((void*)0);
 }
 return VAR_7;
}
