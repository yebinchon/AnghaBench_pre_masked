
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {struct venus_core* core; } ;
struct venus_core {int dummy; } ;


 int FUNC_0 (struct venus_inst*) ;
 int FUNC_1 (struct venus_inst*) ;
 int FUNC_2 (struct venus_inst*) ;
 int FUNC_3 (struct venus_inst*) ;
 int FUNC_4 (struct venus_inst*) ;
 int FUNC_5 (struct venus_inst*) ;
 int FUNC_6 (struct venus_core*) ;
 int FUNC_7 (struct venus_inst*) ;

int FUNC_8(struct venus_inst *VAR_0)
{
 struct venus_core *VAR_1 = VAR_0->core;
 int VAR_2;

 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2)
  goto err_bufs_free;

 FUNC_6(VAR_1);

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  goto err_unreg_bufs;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  goto err_unload_res;

 return 0;

err_unload_res:
 FUNC_2(VAR_0);
err_unreg_bufs:
 FUNC_7(VAR_0);
err_bufs_free:
 FUNC_5(VAR_0);
 return VAR_2;
}
