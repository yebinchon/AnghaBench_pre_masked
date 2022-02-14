
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delta_mjpeg_ctx {struct delta_frame* out_frame; } ;
struct delta_frame {int dummy; } ;
struct delta_ctx {int dummy; } ;


 int VAR_0 ;
 struct delta_mjpeg_ctx* FUNC_0 (struct delta_ctx*) ;

__attribute__((used)) static int FUNC_1(struct delta_ctx *VAR_1,
     struct delta_frame **VAR_2)
{
 struct delta_mjpeg_ctx *VAR_3 = FUNC_0(VAR_1);

 if (!VAR_3->out_frame)
  return -VAR_0;

 *VAR_2 = VAR_3->out_frame;

 VAR_3->out_frame = ((void*)0);

 return 0;
}
