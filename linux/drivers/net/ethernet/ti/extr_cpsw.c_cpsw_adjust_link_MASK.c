
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct cpsw_priv {struct cpsw_common* cpsw; } ;
struct cpsw_common {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cpsw_common*) ;
 int FUNC_1 (struct cpsw_common*) ;
 int FUNC_2 (struct cpsw_priv*,int ,struct cpsw_priv*,int*) ;
 struct cpsw_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_1)
{
 struct cpsw_priv *VAR_2 = FUNC_3(VAR_1);
 struct cpsw_common *VAR_3 = VAR_2->cpsw;
 bool VAR_4 = 0;

 FUNC_2(VAR_2, VAR_0, VAR_2, &VAR_4);

 if (VAR_4) {
  if (FUNC_0(VAR_3))
   FUNC_1(VAR_3);

  FUNC_5(VAR_1);
  if (FUNC_6(VAR_1))
   FUNC_8(VAR_1);
 } else {
  FUNC_4(VAR_1);
  FUNC_7(VAR_1);
 }
}
