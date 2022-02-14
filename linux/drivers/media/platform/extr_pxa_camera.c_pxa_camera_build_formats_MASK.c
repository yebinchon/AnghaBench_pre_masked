
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_camera_format_xlate {int dummy; } ;
struct pxa_camera_dev {struct pxa_camera_format_xlate* user_formats; int sensor; int v4l2_dev; } ;


 scalar_t__ FUNC_0 (struct pxa_camera_format_xlate*) ;
 int FUNC_1 (struct pxa_camera_format_xlate*) ;
 int VAR_0 ;
 struct pxa_camera_format_xlate* FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct pxa_camera_dev *VAR_1)
{
 struct pxa_camera_format_xlate *VAR_2;

 VAR_2 = FUNC_2(&VAR_1->v4l2_dev, VAR_1->sensor,
       VAR_0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_1->user_formats = VAR_2;
 return 0;
}
