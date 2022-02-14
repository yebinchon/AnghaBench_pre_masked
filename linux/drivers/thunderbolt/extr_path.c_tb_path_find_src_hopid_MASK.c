
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_in_hop_id; } ;
typedef struct tb_port {TYPE_1__ config; } const tb_port ;


 int VAR_0 ;
 struct tb_port const* FUNC_0 (struct tb_port const*,int,int) ;

__attribute__((used)) static int FUNC_1(struct tb_port *VAR_1,
 const struct tb_port *VAR_2, int VAR_3)
{
 struct tb_port *VAR_4;
 int VAR_5;

 for (VAR_5 = VAR_0; VAR_5 <= VAR_1->config.max_in_hop_id; VAR_5++) {
  VAR_4 = FUNC_0(VAR_1, VAR_5, VAR_3);
  if (VAR_4 == VAR_2)
   return VAR_5;
 }

 return 0;
}
