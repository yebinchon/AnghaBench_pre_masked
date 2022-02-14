
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_mbus_framefmt {scalar_t__ colorspace; scalar_t__ code; } ;
struct TYPE_3__ {scalar_t__ colorspace; scalar_t__ code; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct v4l2_mbus_framefmt *VAR_1)
{
 int VAR_2, VAR_3 = -1;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_1->colorspace != VAR_0[VAR_2].colorspace)
   continue;
  if (VAR_1->code == VAR_0[VAR_2].code)
   return VAR_2;
  if (VAR_3 < 0)
   VAR_3 = VAR_2;
 }
 return (VAR_3 < 0) ? 0 : VAR_3;
}
