
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_switch {struct tb_port* ports; } ;
struct tb_regs_hop {size_t out_port; int next_hop; int enable; } ;
struct tb_port {struct tb_port* remote; struct tb_switch* sw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tb_port*,struct tb_regs_hop*,int ,int,int) ;
 int FUNC_1 (struct tb_port*,char*,int) ;

__attribute__((used)) static struct tb_port *FUNC_2(struct tb_port *VAR_2, int VAR_3,
          int VAR_4)
{
 struct tb_port *VAR_5, *VAR_6 = ((void*)0);
 struct tb_regs_hop VAR_7;
 struct tb_switch *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_11 = VAR_3;
 VAR_5 = VAR_2;

 for (VAR_9 = 0; VAR_5 && VAR_9 < VAR_1; VAR_9++) {
  VAR_8 = VAR_5->sw;

  VAR_10 = FUNC_0(VAR_5, &VAR_7, VAR_0, 2 * VAR_11, 2);
  if (VAR_10) {
   FUNC_1(VAR_5, "failed to read path at %d\n", VAR_11);
   return ((void*)0);
  }

  if (!VAR_7.enable)
   return ((void*)0);

  VAR_6 = &VAR_8->ports[VAR_7.out_port];
  VAR_11 = VAR_7.next_hop;
  VAR_5 = VAR_6->remote;
 }

 return VAR_6 && VAR_11 == VAR_4 ? VAR_6 : ((void*)0);
}
