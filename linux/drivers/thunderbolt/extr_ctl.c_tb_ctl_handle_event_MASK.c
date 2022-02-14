
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_ctl {int (* callback ) (int ,int,int ,size_t) ;int callback_data; } ;
struct ctl_pkg {int buffer; } ;
typedef enum tb_cfg_pkg_type { ____Placeholder_tb_cfg_pkg_type } tb_cfg_pkg_type ;


 int FUNC_0 (int ,int,int ,size_t) ;

__attribute__((used)) static bool FUNC_1(struct tb_ctl *VAR_0, enum tb_cfg_pkg_type VAR_1,
    struct ctl_pkg *VAR_2, size_t VAR_3)
{
 return VAR_0->callback(VAR_0->callback_data, VAR_1, VAR_2->buffer, VAR_3);
}
