
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* fmt; } ;
struct s5p_jpeg_ctx {TYPE_4__ out_q; TYPE_2__* jpeg; } ;
struct TYPE_7__ {int subsampling; int fourcc; } ;
struct TYPE_6__ {TYPE_1__* variant; } ;
struct TYPE_5__ {int version; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct s5p_jpeg_ctx *VAR_4, int *VAR_5)
{
 switch (VAR_4->jpeg->variant->version) {
 case 128:
  return 0;
 case 131:
 case 129:




  if (VAR_4->out_q.fmt->fourcc == VAR_3)
   *VAR_5 = 0;
  break;
 case 130:





  if (VAR_4->out_q.fmt->fourcc != VAR_2 &&
      *VAR_5 == VAR_1)
   return -VAR_0;
  break;
 }






 if (VAR_4->out_q.fmt->subsampling > *VAR_5)
  *VAR_5 = VAR_4->out_q.fmt->subsampling;

 return 0;
}
