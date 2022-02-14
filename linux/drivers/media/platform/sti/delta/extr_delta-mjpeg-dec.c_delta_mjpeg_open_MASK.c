
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delta_mjpeg_ctx {int dummy; } ;
struct delta_ctx {struct delta_mjpeg_ctx* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct delta_mjpeg_ctx* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct delta_ctx *VAR_2)
{
 struct delta_mjpeg_ctx *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;
 VAR_2->priv = VAR_3;

 return 0;
}
