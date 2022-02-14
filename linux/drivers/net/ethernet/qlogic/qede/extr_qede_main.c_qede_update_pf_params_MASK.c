
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int num_cons; int num_vf_cons; int num_arfs_filters; } ;
struct qed_pf_params {TYPE_1__ eth_pf_params; } ;
struct qed_dev {int dummy; } ;
struct TYPE_6__ {TYPE_2__* common; } ;
struct TYPE_5__ {int (* update_pf_params ) (struct qed_dev*,struct qed_pf_params*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qed_pf_params*,int ,int) ;
 TYPE_3__* VAR_3 ;
 int FUNC_1 (struct qed_dev*,struct qed_pf_params*) ;

__attribute__((used)) static void FUNC_2(struct qed_dev *VAR_4)
{
 struct qed_pf_params VAR_5;
 u16 VAR_6;


 FUNC_0(&VAR_5, 0, sizeof(struct qed_pf_params));


 VAR_6 = VAR_2;

 VAR_5.eth_pf_params.num_cons = (VAR_0 - 1) * VAR_6;




 VAR_5.eth_pf_params.num_vf_cons = 48;

 VAR_5.eth_pf_params.num_arfs_filters = VAR_1;
 VAR_3->common->update_pf_params(VAR_4, &VAR_5);
}
