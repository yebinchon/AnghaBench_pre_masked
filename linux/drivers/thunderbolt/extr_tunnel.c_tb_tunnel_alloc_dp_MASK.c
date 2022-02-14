
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_tunnel {struct tb_path** paths; struct tb_port* dst_port; struct tb_port* src_port; int activate; int init; } ;
struct tb_port {int cap_adap; } ;
struct tb_path {int dummy; } ;
struct tb {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (struct tb_path*) ;
 int FUNC_2 (struct tb_path*,int) ;
 int VAR_8 ;
 struct tb_path* FUNC_3 (struct tb*,struct tb_port*,int ,struct tb_port*,int ,int,char*) ;
 struct tb_tunnel* FUNC_4 (struct tb*,int,int ) ;
 int FUNC_5 (struct tb_tunnel*) ;

struct tb_tunnel *FUNC_6(struct tb *VAR_9, struct tb_port *VAR_10,
         struct tb_port *VAR_11)
{
 struct tb_tunnel *VAR_12;
 struct tb_path **VAR_13;
 struct tb_path *VAR_14;

 if (FUNC_0(!VAR_10->cap_adap || !VAR_11->cap_adap))
  return ((void*)0);

 VAR_12 = FUNC_4(VAR_9, 3, VAR_6);
 if (!VAR_12)
  return ((void*)0);

 VAR_12->init = VAR_8;
 VAR_12->activate = VAR_7;
 VAR_12->src_port = VAR_10;
 VAR_12->dst_port = VAR_11;

 VAR_13 = VAR_12->paths;

 VAR_14 = FUNC_3(VAR_9, VAR_10, VAR_4, VAR_11, VAR_4,
        1, "Video");
 if (!VAR_14)
  goto err_free;
 FUNC_2(VAR_14, 0);
 VAR_13[VAR_5] = VAR_14;

 VAR_14 = FUNC_3(VAR_9, VAR_10, VAR_3, VAR_11,
        VAR_3, 1, "AUX TX");
 if (!VAR_14)
  goto err_free;
 FUNC_1(VAR_14);
 VAR_13[VAR_1] = VAR_14;

 VAR_14 = FUNC_3(VAR_9, VAR_11, VAR_2, VAR_10,
        VAR_2, 1, "AUX RX");
 if (!VAR_14)
  goto err_free;
 FUNC_1(VAR_14);
 VAR_13[VAR_0] = VAR_14;

 return VAR_12;

err_free:
 FUNC_5(VAR_12);
 return ((void*)0);
}
