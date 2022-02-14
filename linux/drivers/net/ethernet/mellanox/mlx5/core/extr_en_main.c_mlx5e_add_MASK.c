
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
typedef void mlx5_core_dev ;
struct TYPE_2__ {int eswitch; } ;


 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (void*,char*,...) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (void*,void*) ;
 int FUNC_4 (void*) ;
 struct net_device* FUNC_5 (void*,int *,int,int *) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*,void*) ;
 int FUNC_9 (void*) ;
 int VAR_1 ;
 int FUNC_10 (void*) ;
 void* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;

__attribute__((used)) static void *FUNC_13(struct mlx5_core_dev *VAR_2)
{
 struct net_device *VAR_3;
 void *VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(VAR_2);
 if (VAR_5)
  return ((void*)0);
 VAR_6 = FUNC_9(VAR_2);
 VAR_3 = FUNC_5(VAR_2, &VAR_1, VAR_6, ((void*)0));
 if (!VAR_3) {
  FUNC_1(VAR_2, "mlx5e_create_netdev failed\n");
  return ((void*)0);
 }

 VAR_4 = FUNC_11(VAR_3);

 VAR_5 = FUNC_3(VAR_2, VAR_4);
 if (VAR_5) {
  FUNC_1(VAR_2, "mlx5e_attach failed, %d\n", VAR_5);
  goto err_destroy_netdev;
 }

 VAR_5 = FUNC_12(VAR_3);
 if (VAR_5) {
  FUNC_1(VAR_2, "register_netdev failed, %d\n", VAR_5);
  goto err_detach;
 }




 return VAR_4;

err_detach:
 FUNC_8(VAR_2, VAR_4);
err_destroy_netdev:
 FUNC_7(VAR_4);
 return ((void*)0);
}
