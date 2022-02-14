
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwifiex_private {int dummy; } ;
struct TYPE_2__ {int (* down_dev ) (struct mwifiex_adapter*) ;} ;
struct mwifiex_adapter {TYPE_1__ if_ops; int fw_done; } ;


 int VAR_0 ;
 int FUNC_0 (struct mwifiex_private*,int *) ;
 struct mwifiex_private* FUNC_1 (struct mwifiex_adapter*,int ) ;
 int FUNC_2 (struct mwifiex_adapter*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mwifiex_adapter*) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct mwifiex_adapter *VAR_1)
{
 struct mwifiex_private *VAR_2;

 if (!VAR_1)
  return 0;

 FUNC_5(VAR_1->fw_done);

 FUNC_3(VAR_1->fw_done);

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 FUNC_0(VAR_2, ((void*)0));

 FUNC_2(VAR_1);

 if (VAR_1->if_ops.down_dev)
  VAR_1->if_ops.down_dev(VAR_1);

 return 0;
}
