
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_tunnel {struct tb_path** paths; struct tb_port* dst_port; struct tb_port* src_port; int activate; } ;
struct tb_port {int dummy; } ;
struct tb_path {int dummy; } ;
struct tb {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct tb_path* FUNC_0 (struct tb*,struct tb_port*,int ,struct tb_port*,int ,int ,char*) ;
 int VAR_4 ;
 int FUNC_1 (struct tb_path*) ;
 struct tb_tunnel* FUNC_2 (struct tb*,int,int ) ;
 int FUNC_3 (struct tb_tunnel*) ;

struct tb_tunnel *FUNC_4(struct tb *VAR_5, struct tb_port *VAR_6,
          struct tb_port *VAR_7)
{
 struct tb_tunnel *VAR_8;
 struct tb_path *VAR_9;

 VAR_8 = FUNC_2(VAR_5, 2, VAR_3);
 if (!VAR_8)
  return ((void*)0);

 VAR_8->activate = VAR_4;
 VAR_8->src_port = VAR_7;
 VAR_8->dst_port = VAR_6;

 VAR_9 = FUNC_0(VAR_5, VAR_7, VAR_0, VAR_6, VAR_0, 0,
        "PCIe Down");
 if (!VAR_9) {
  FUNC_3(VAR_8);
  return ((void*)0);
 }
 FUNC_1(VAR_9);
 VAR_8->paths[VAR_1] = VAR_9;

 VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_0, VAR_7, VAR_0, 0,
        "PCIe Up");
 if (!VAR_9) {
  FUNC_3(VAR_8);
  return ((void*)0);
 }
 FUNC_1(VAR_9);
 VAR_8->paths[VAR_2] = VAR_9;

 return VAR_8;
}
