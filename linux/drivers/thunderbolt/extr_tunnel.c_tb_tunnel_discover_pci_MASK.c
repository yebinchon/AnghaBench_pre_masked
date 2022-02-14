
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_tunnel {struct tb_port* dst_port; struct tb_port* src_port; struct tb_path** paths; int activate; } ;
struct tb_port {int dummy; } ;
struct tb_path {int dummy; } ;
struct tb {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct tb_path* FUNC_0 (struct tb_port*,int,struct tb_port*,int,struct tb_port**,char*) ;
 int VAR_4 ;
 int FUNC_1 (struct tb_path*) ;
 int FUNC_2 (struct tb_port*,int) ;
 int FUNC_3 (struct tb_port*) ;
 int FUNC_4 (struct tb_port*) ;
 int FUNC_5 (struct tb_port*,char*) ;
 struct tb_tunnel* FUNC_6 (struct tb*,int,int ) ;
 int FUNC_7 (struct tb_tunnel*,char*) ;
 int FUNC_8 (struct tb_tunnel*) ;
 int FUNC_9 (struct tb_tunnel*) ;
 int FUNC_10 (struct tb_tunnel*,char*) ;

struct tb_tunnel *FUNC_11(struct tb *VAR_5, struct tb_port *VAR_6)
{
 struct tb_tunnel *VAR_7;
 struct tb_path *VAR_8;

 if (!FUNC_3(VAR_6))
  return ((void*)0);

 VAR_7 = FUNC_6(VAR_5, 2, VAR_3);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->activate = VAR_4;
 VAR_7->src_port = VAR_6;






 VAR_8 = FUNC_0(VAR_6, VAR_0, ((void*)0), -1,
    &VAR_7->dst_port, "PCIe Up");
 if (!VAR_8) {

  FUNC_2(VAR_6, 0);
  goto err_free;
 }
 VAR_7->paths[VAR_2] = VAR_8;
 FUNC_1(VAR_7->paths[VAR_2]);

 VAR_8 = FUNC_0(VAR_7->dst_port, -1, VAR_6, VAR_0, ((void*)0),
    "PCIe Down");
 if (!VAR_8)
  goto err_deactivate;
 VAR_7->paths[VAR_1] = VAR_8;
 FUNC_1(VAR_7->paths[VAR_1]);


 if (!FUNC_4(VAR_7->dst_port)) {
  FUNC_5(VAR_7->dst_port,
        "path does not end on a PCIe adapter, cleaning up\n");
  goto err_deactivate;
 }

 if (VAR_6 != VAR_7->src_port) {
  FUNC_10(VAR_7, "path is not complete, cleaning up\n");
  goto err_deactivate;
 }

 if (!FUNC_3(VAR_7->dst_port)) {
  FUNC_10(VAR_7,
          "tunnel is not fully activated, cleaning up\n");
  goto err_deactivate;
 }

 FUNC_7(VAR_7, "discovered\n");
 return VAR_7;

err_deactivate:
 FUNC_8(VAR_7);
err_free:
 FUNC_9(VAR_7);

 return ((void*)0);
}
