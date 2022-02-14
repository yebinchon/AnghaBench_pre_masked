
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_jpeg_ctx {scalar_t__ mode; scalar_t__ state; int hdr_parsed; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(void *VAR_2)
{
 struct s5p_jpeg_ctx *VAR_3 = VAR_2;

 if (VAR_3->mode == VAR_1) {




  if (VAR_3->state == VAR_0)
   return 0;

  return VAR_3->hdr_parsed;
 }

 return 1;
}
