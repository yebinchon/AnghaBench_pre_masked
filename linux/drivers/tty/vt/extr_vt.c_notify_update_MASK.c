
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_notifier_param {struct vc_data* vc; } ;
struct vc_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct vt_notifier_param*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_2)
{
 struct vt_notifier_param VAR_3 = { .vc = VAR_2 };
 FUNC_0(&VAR_1, VAR_0, &VAR_3);
}
