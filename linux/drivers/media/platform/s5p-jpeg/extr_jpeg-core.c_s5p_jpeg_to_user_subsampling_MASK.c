
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s5p_jpeg_ctx {int subsampling; TYPE_2__* jpeg; } ;
struct TYPE_4__ {TYPE_1__* variant; } ;
struct TYPE_3__ {int version; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int* VAR_3 ;
 int* VAR_4 ;

__attribute__((used)) static int FUNC_1(struct s5p_jpeg_ctx *VAR_5)
{
 switch (VAR_5->jpeg->variant->version) {
 case 128:
  FUNC_0(VAR_5->subsampling > 3);
  if (VAR_5->subsampling > 2)
   return VAR_2;
  return VAR_5->subsampling;
 case 132:
 case 130:
  FUNC_0(VAR_5->subsampling > 6);
  if (VAR_5->subsampling > 3)
   return VAR_0;
  return VAR_3[VAR_5->subsampling];
 case 131:
  FUNC_0(VAR_5->subsampling > 3);
  if (VAR_5->subsampling > 2)
   return VAR_1;
  return VAR_4[VAR_5->subsampling];
 case 129:
  return VAR_5->subsampling;
 default:
  FUNC_0(VAR_5->subsampling > 3);
  return VAR_2;
 }
}
