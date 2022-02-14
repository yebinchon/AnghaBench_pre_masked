
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct cpsw_priv {int ndev; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0, int VAR_1, void *VAR_2)
{
 struct cpsw_priv *VAR_3 = VAR_2;

 if (!VAR_0)
  return 0;

 FUNC_0(VAR_3->ndev, 0, VAR_1);
 return 0;
}
