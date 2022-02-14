
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb {TYPE_1__* cm_ops; } ;
typedef enum tb_cfg_pkg_type { ____Placeholder_tb_cfg_pkg_type } tb_cfg_pkg_type ;
struct TYPE_2__ {int (* handle_event ) (struct tb*,int,void const*,size_t) ;} ;




 int FUNC_0 (struct tb*,int,void const*,size_t) ;
 int FUNC_1 (struct tb*,char*) ;
 int FUNC_2 (struct tb*,int,void const*,size_t) ;

__attribute__((used)) static bool FUNC_3(void *VAR_0, enum tb_cfg_pkg_type VAR_1,
          const void *VAR_2, size_t VAR_3)
{
 struct tb *VAR_4 = VAR_0;

 if (!VAR_4->cm_ops->handle_event) {
  FUNC_1(VAR_4, "domain does not have event handler\n");
  return 1;
 }

 switch (VAR_1) {
 case 129:
 case 128:
  return FUNC_2(VAR_4, VAR_1, VAR_2, VAR_3);

 default:
  VAR_4->cm_ops->handle_event(VAR_4, VAR_1, VAR_2, VAR_3);
 }

 return 1;
}
