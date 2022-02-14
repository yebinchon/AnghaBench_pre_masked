
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_domain {int pdn; int mdev; int uar; void* ste_icm_pool; void* action_icm_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct mlx5dr_domain*,char*) ;
 int FUNC_5 (struct mlx5dr_domain*,char*) ;
 void* FUNC_6 (struct mlx5dr_domain*,int ) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (struct mlx5dr_domain*) ;

__attribute__((used)) static int FUNC_9(struct mlx5dr_domain *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3->mdev, &VAR_3->pdn);
 if (VAR_4) {
  FUNC_4(VAR_3, "Couldn't allocate PD\n");
  return VAR_4;
 }

 VAR_3->uar = FUNC_2(VAR_3->mdev);
 if (!VAR_3->uar) {
  FUNC_5(VAR_3, "Couldn't allocate UAR\n");
  VAR_4 = -VAR_2;
  goto clean_pd;
 }

 VAR_3->ste_icm_pool = FUNC_6(VAR_3, VAR_1);
 if (!VAR_3->ste_icm_pool) {
  FUNC_5(VAR_3, "Couldn't get icm memory\n");
  VAR_4 = -VAR_2;
  goto clean_uar;
 }

 VAR_3->action_icm_pool = FUNC_6(VAR_3, VAR_0);
 if (!VAR_3->action_icm_pool) {
  FUNC_5(VAR_3, "Couldn't get action icm memory\n");
  VAR_4 = -VAR_2;
  goto free_ste_icm_pool;
 }

 VAR_4 = FUNC_8(VAR_3);
 if (VAR_4) {
  FUNC_5(VAR_3, "Couldn't create send-ring\n");
  goto free_action_icm_pool;
 }

 return 0;

free_action_icm_pool:
 FUNC_7(VAR_3->action_icm_pool);
free_ste_icm_pool:
 FUNC_7(VAR_3->ste_icm_pool);
clean_uar:
 FUNC_3(VAR_3->mdev, VAR_3->uar);
clean_pd:
 FUNC_1(VAR_3->mdev, VAR_3->pdn);

 return VAR_4;
}
