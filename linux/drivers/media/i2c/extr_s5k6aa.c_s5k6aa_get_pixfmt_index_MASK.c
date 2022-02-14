
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_mbus_framefmt {scalar_t__ colorspace; scalar_t__ code; } ;
struct s5k6aa {int dummy; } ;
struct TYPE_3__ {scalar_t__ colorspace; scalar_t__ code; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct s5k6aa *VAR_1,
       struct v4l2_mbus_framefmt *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  if (VAR_2->colorspace == VAR_0[VAR_3].colorspace &&
      VAR_2->code == VAR_0[VAR_3].code)
   return VAR_3;
 return 0;
}
