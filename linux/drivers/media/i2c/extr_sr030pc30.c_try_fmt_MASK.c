
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; } ;
struct sr030pc30_format {scalar_t__ code; } ;


 int FUNC_0 (struct sr030pc30_format const*) ;
 struct sr030pc30_format const* VAR_0 ;
 int FUNC_1 (struct v4l2_mbus_framefmt*) ;

__attribute__((used)) static const struct sr030pc30_format *FUNC_2(struct v4l2_subdev *VAR_1,
           struct v4l2_mbus_framefmt *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_2);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_2->code == VAR_0[VAR_3].code)
   break;
 }
 if (VAR_3 == FUNC_0(VAR_0))
  VAR_3 = 0;

 VAR_2->code = VAR_0[VAR_3].code;

 return &VAR_0[VAR_3];
}
