
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tb_switch {TYPE_1__* tb; scalar_t__ is_unplugged; } ;
typedef enum tb_cfg_space { ____Placeholder_tb_cfg_space } tb_cfg_space ;
struct TYPE_2__ {int ctl; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,int ,int ,int,int ,int ) ;
 int FUNC_1 (struct tb_switch*) ;

__attribute__((used)) static inline int FUNC_2(struct tb_switch *VAR_1, void *VAR_2,
         enum tb_cfg_space VAR_3, u32 VAR_4, u32 VAR_5)
{
 if (VAR_1->is_unplugged)
  return -VAR_0;
 return FUNC_0(VAR_1->tb->ctl,
       VAR_2,
       FUNC_1(VAR_1),
       0,
       VAR_3,
       VAR_4,
       VAR_5);
}
