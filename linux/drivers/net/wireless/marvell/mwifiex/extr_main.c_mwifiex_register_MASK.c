
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwifiex_private {int dummy; } ;
struct mwifiex_if_ops {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* init_if ) (struct mwifiex_adapter*) ;} ;
struct mwifiex_adapter {int priv_num; struct mwifiex_adapter** priv; int cmd_timer; struct mwifiex_adapter* adapter; TYPE_1__ if_ops; int debug_mask; void* card; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mwifiex_adapter*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__*,struct mwifiex_if_ops*,int) ;
 int VAR_5 ;
 int FUNC_3 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_4 (struct mwifiex_adapter*) ;
 scalar_t__ FUNC_5 (struct mwifiex_adapter*) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_7(void *VAR_6, struct device *VAR_7,
       struct mwifiex_if_ops *VAR_8, void **VAR_9)
{
 struct mwifiex_adapter *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_1(sizeof(struct mwifiex_adapter), VAR_2);
 if (!VAR_10)
  return -VAR_0;

 *VAR_9 = VAR_10;
 VAR_10->dev = VAR_7;
 VAR_10->card = VAR_6;


 FUNC_2(&VAR_10->if_ops, VAR_8, sizeof(struct mwifiex_if_ops));
 VAR_10->debug_mask = VAR_4;


 if (VAR_10->if_ops.init_if)
  if (VAR_10->if_ops.init_if(VAR_10))
   goto error;

 VAR_10->priv_num = 0;

 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {

  VAR_10->priv[VAR_11] =
   FUNC_1(sizeof(struct mwifiex_private), VAR_2);
  if (!VAR_10->priv[VAR_11])
   goto error;

  VAR_10->priv[VAR_11]->adapter = VAR_10;
  VAR_10->priv_num++;
 }
 FUNC_4(VAR_10);

 FUNC_6(&VAR_10->cmd_timer, VAR_5, 0);

 return 0;

error:
 FUNC_3(VAR_10, VAR_1,
      "info: leave mwifiex_register with error\n");

 for (VAR_11 = 0; VAR_11 < VAR_10->priv_num; VAR_11++)
  FUNC_0(VAR_10->priv[VAR_11]);

 FUNC_0(VAR_10);

 return -1;
}
