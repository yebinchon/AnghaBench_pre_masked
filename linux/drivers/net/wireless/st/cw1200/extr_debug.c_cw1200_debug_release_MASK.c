
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cw1200_debug_priv {int debugfs_phy; } ;
struct cw1200_common {struct cw1200_debug_priv* debug; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cw1200_debug_priv*) ;

void FUNC_2(struct cw1200_common *VAR_0)
{
 struct cw1200_debug_priv *VAR_1 = VAR_0->debug;
 if (VAR_1) {
  FUNC_0(VAR_1->debugfs_phy);
  VAR_0->debug = ((void*)0);
  FUNC_1(VAR_1);
 }
}
