
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_tunnel {struct tb_port* src_port; struct tb_port* dst_port; struct tb_path** paths; int activate; int init; } ;
struct tb_port {int dummy; } ;
struct tb_path {int dummy; } ;
struct tb {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct tb_path*) ;
 int FUNC_1 (struct tb_path*,int) ;
 int FUNC_2 (struct tb_port*,int) ;
 int FUNC_3 (struct tb_port*) ;
 int FUNC_4 (struct tb_port*) ;
 int VAR_8 ;
 struct tb_path* FUNC_5 (struct tb_port*,int,struct tb_port*,int,struct tb_port**,char*) ;
 int FUNC_6 (struct tb_port*) ;
 int FUNC_7 (struct tb_port*,char*) ;
 struct tb_tunnel* FUNC_8 (struct tb*,int,int ) ;
 int FUNC_9 (struct tb_tunnel*,char*) ;
 int FUNC_10 (struct tb_tunnel*) ;
 int FUNC_11 (struct tb_tunnel*) ;
 int FUNC_12 (struct tb_tunnel*,char*) ;

struct tb_tunnel *FUNC_13(struct tb *VAR_9, struct tb_port *VAR_10)
{
 struct tb_tunnel *VAR_11;
 struct tb_port *VAR_12;
 struct tb_path *VAR_13;

 if (!FUNC_4(VAR_10))
  return ((void*)0);

 VAR_11 = FUNC_8(VAR_9, 3, VAR_6);
 if (!VAR_11)
  return ((void*)0);

 VAR_11->init = VAR_8;
 VAR_11->activate = VAR_7;
 VAR_11->src_port = VAR_10;

 VAR_13 = FUNC_5(VAR_10, VAR_4, ((void*)0), -1,
    &VAR_11->dst_port, "Video");
 if (!VAR_13) {

  FUNC_2(VAR_10, 0);
  goto err_free;
 }
 VAR_11->paths[VAR_5] = VAR_13;
 FUNC_1(VAR_11->paths[VAR_5], 1);

 VAR_13 = FUNC_5(VAR_10, VAR_3, ((void*)0), -1, ((void*)0), "AUX TX");
 if (!VAR_13)
  goto err_deactivate;
 VAR_11->paths[VAR_1] = VAR_13;
 FUNC_0(VAR_11->paths[VAR_1]);

 VAR_13 = FUNC_5(VAR_11->dst_port, -1, VAR_10, VAR_2,
    &VAR_12, "AUX RX");
 if (!VAR_13)
  goto err_deactivate;
 VAR_11->paths[VAR_0] = VAR_13;
 FUNC_0(VAR_11->paths[VAR_0]);


 if (!FUNC_6(VAR_11->dst_port)) {
  FUNC_7(VAR_10, "path does not end on a DP adapter, cleaning up\n");
  goto err_deactivate;
 }

 if (!FUNC_4(VAR_11->dst_port))
  goto err_deactivate;

 if (!FUNC_3(VAR_11->dst_port))
  goto err_deactivate;

 if (VAR_12 != VAR_11->src_port) {
  FUNC_12(VAR_11, "path is not complete, cleaning up\n");
  goto err_deactivate;
 }

 FUNC_9(VAR_11, "discovered\n");
 return VAR_11;

err_deactivate:
 FUNC_10(VAR_11);
err_free:
 FUNC_11(VAR_11);

 return ((void*)0);
}
