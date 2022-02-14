
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int log_icm_size; } ;
struct TYPE_4__ {int supp_sw_steering; TYPE_1__ caps; int max_log_sw_icm_sz; int max_log_action_icm_sz; } ;
struct mlx5dr_domain {int type; TYPE_2__ info; int mutex; int refcount; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
typedef enum mlx5dr_domain_type { ____Placeholder_mlx5dr_domain_type } mlx5dr_domain_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct mlx5_core_dev*,struct mlx5dr_domain*) ;
 int FUNC_1 (struct mlx5dr_domain*) ;
 int FUNC_2 (struct mlx5dr_domain*) ;
 int FUNC_3 (struct mlx5dr_domain*) ;
 int FUNC_4 (struct mlx5dr_domain*) ;
 int FUNC_5 (struct mlx5dr_domain*) ;
 struct mlx5dr_domain* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (struct mlx5dr_domain*,char*) ;
 int FUNC_10 (struct mlx5dr_domain*,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int) ;
 int VAR_4 ;

struct mlx5dr_domain *
FUNC_13(struct mlx5_core_dev *VAR_5, enum mlx5dr_domain_type VAR_6)
{
 struct mlx5dr_domain *VAR_7;
 int VAR_8;

 if (VAR_6 > VAR_3)
  return ((void*)0);

 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->mdev = VAR_5;
 VAR_7->type = VAR_6;
 FUNC_12(&VAR_7->refcount, 1);
 FUNC_11(&VAR_7->mutex);

 if (FUNC_0(VAR_5, VAR_7)) {
  FUNC_9(VAR_7, "Failed init domain, no caps\n");
  goto free_domain;
 }

 VAR_7->info.max_log_action_icm_sz = VAR_1;
 VAR_7->info.max_log_sw_icm_sz = FUNC_7(VAR_4, VAR_0,
         VAR_7->info.caps.log_icm_size);

 if (!VAR_7->info.supp_sw_steering) {
  FUNC_10(VAR_7, "SW steering is not supported\n");
  goto uninit_caps;
 }


 VAR_8 = FUNC_3(VAR_7);
 if (VAR_8) {
  FUNC_10(VAR_7, "Failed init domain resources\n");
  goto uninit_caps;
 }

 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8) {
  FUNC_10(VAR_7, "Failed initialize domain cache\n");
  goto uninit_resourses;
 }


 FUNC_8();

 return VAR_7;

uninit_resourses:
 FUNC_4(VAR_7);
uninit_caps:
 FUNC_1(VAR_7);
free_domain:
 FUNC_5(VAR_7);
 return ((void*)0);
}
