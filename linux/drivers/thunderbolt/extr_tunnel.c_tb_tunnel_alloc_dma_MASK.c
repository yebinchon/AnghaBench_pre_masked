
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tb_tunnel {struct tb_path** paths; struct tb_port* dst_port; struct tb_port* src_port; int activate; } ;
struct tb_port {int dummy; } ;
struct tb_path {int dummy; } ;
struct tb {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct tb_port*) ;
 int FUNC_1 (struct tb_path*,int,int,int ) ;
 struct tb_path* FUNC_2 (struct tb*,struct tb_port*,int,struct tb_port*,int,int ,char*) ;
 struct tb_tunnel* FUNC_3 (struct tb*,int,int ) ;
 int FUNC_4 (struct tb_tunnel*) ;

struct tb_tunnel *FUNC_5(struct tb *VAR_8, struct tb_port *VAR_9,
          struct tb_port *VAR_10, int VAR_11,
          int VAR_12, int VAR_13,
          int VAR_14)
{
 struct tb_tunnel *VAR_15;
 struct tb_path *VAR_16;
 u32 VAR_17;

 VAR_15 = FUNC_3(VAR_8, 2, VAR_6);
 if (!VAR_15)
  return ((void*)0);

 VAR_15->activate = VAR_7;
 VAR_15->src_port = VAR_9;
 VAR_15->dst_port = VAR_10;

 VAR_17 = FUNC_0(VAR_9);

 VAR_16 = FUNC_2(VAR_8, VAR_10, VAR_14, VAR_9, VAR_13, 0, "DMA RX");
 if (!VAR_16) {
  FUNC_4(VAR_15);
  return ((void*)0);
 }
 FUNC_1(VAR_16, VAR_4, VAR_5 | VAR_3,
    VAR_17);
 VAR_15->paths[VAR_0] = VAR_16;

 VAR_16 = FUNC_2(VAR_8, VAR_9, VAR_11, VAR_10, VAR_12, 0, "DMA TX");
 if (!VAR_16) {
  FUNC_4(VAR_15);
  return ((void*)0);
 }
 FUNC_1(VAR_16, VAR_5, VAR_2, VAR_17);
 VAR_15->paths[VAR_1] = VAR_16;

 return VAR_15;
}
