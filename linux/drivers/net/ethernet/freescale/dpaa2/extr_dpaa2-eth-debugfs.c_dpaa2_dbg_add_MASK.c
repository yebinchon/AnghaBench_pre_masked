
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct dentry* dir; } ;
struct dpaa2_eth_priv {TYPE_2__ dbg; TYPE_1__* net_dev; } ;
struct dentry {int dummy; } ;
struct TYPE_3__ {int name; } ;


 struct dentry* FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int,struct dentry*,struct dpaa2_eth_priv*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_2(struct dpaa2_eth_priv *VAR_4)
{
 struct dentry *VAR_5;


 VAR_5 = FUNC_0(VAR_4->net_dev->name, VAR_3);
 VAR_4->dbg.dir = VAR_5;


 FUNC_1("cpu_stats", 0444, VAR_5, VAR_4, &VAR_1);


 FUNC_1("fq_stats", 0444, VAR_5, VAR_4, &VAR_2);


 FUNC_1("ch_stats", 0444, VAR_5, VAR_4, &VAR_0);
}
