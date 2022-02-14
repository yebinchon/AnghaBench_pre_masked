
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qca8k_priv {int dummy; } ;
struct qca8k_fdb {int aging; int mac; int port_mask; int vid; } ;


 int VAR_0 ;
 int FUNC_0 (struct qca8k_priv*,int ,int) ;
 int FUNC_1 (struct qca8k_priv*,struct qca8k_fdb*) ;
 int FUNC_2 (struct qca8k_priv*,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct qca8k_priv *VAR_1, struct qca8k_fdb *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_1, VAR_2->vid, VAR_2->port_mask, VAR_2->mac, VAR_2->aging);
 VAR_4 = FUNC_0(VAR_1, VAR_0, VAR_3);
 if (VAR_4 >= 0)
  FUNC_1(VAR_1, VAR_2);

 return VAR_4;
}
