
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delta_mjpeg_ctx {int * ipc_hdl; } ;
struct delta_ctx {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct delta_mjpeg_ctx*) ;
 struct delta_mjpeg_ctx* FUNC_2 (struct delta_ctx*) ;

__attribute__((used)) static int FUNC_3(struct delta_ctx *VAR_0)
{
 struct delta_mjpeg_ctx *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->ipc_hdl) {
  FUNC_0(VAR_1->ipc_hdl);
  VAR_1->ipc_hdl = ((void*)0);
 }

 FUNC_1(VAR_1);

 return 0;
}
