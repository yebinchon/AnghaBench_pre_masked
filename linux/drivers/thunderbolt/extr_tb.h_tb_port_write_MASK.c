
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tb_port {int port; TYPE_2__* sw; } ;
typedef enum tb_cfg_space { ____Placeholder_tb_cfg_space } tb_cfg_space ;
struct TYPE_4__ {TYPE_1__* tb; scalar_t__ is_unplugged; } ;
struct TYPE_3__ {int ctl; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void const*,int ,int ,int,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static inline int FUNC_2(struct tb_port *VAR_1, const void *VAR_2,
    enum tb_cfg_space VAR_3, u32 VAR_4, u32 VAR_5)
{
 if (VAR_1->sw->is_unplugged)
  return -VAR_0;
 return FUNC_0(VAR_1->sw->tb->ctl,
       VAR_2,
       FUNC_1(VAR_1->sw),
       VAR_1->port,
       VAR_3,
       VAR_4,
       VAR_5);
}
