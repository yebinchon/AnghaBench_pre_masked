
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb {int wq; } ;
struct icm_notification {int work; struct tb* tb; int pkg; } ;
typedef enum tb_cfg_pkg_type { ____Placeholder_tb_cfg_pkg_type } tb_cfg_pkg_type ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 struct icm_notification* FUNC_1 (int,int ) ;
 int FUNC_2 (void const*,size_t,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct tb *VAR_2, enum tb_cfg_pkg_type VAR_3,
        const void *VAR_4, size_t VAR_5)
{
 struct icm_notification *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return;

 FUNC_0(&VAR_6->work, VAR_1);
 VAR_6->pkg = FUNC_2(VAR_4, VAR_5, VAR_0);
 VAR_6->tb = VAR_2;

 FUNC_3(VAR_2->wq, &VAR_6->work);
}
