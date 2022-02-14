
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {int height; int width; int code; } ;
struct csis_pix_format {int pix_width_alignment; int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct csis_pix_format* FUNC_0 (struct v4l2_mbus_framefmt*) ;
 struct csis_pix_format* VAR_2 ;
 int FUNC_1 (int *,int,int ,int ,int *,int,int ,int,int ) ;

__attribute__((used)) static struct csis_pix_format const *FUNC_2(
 struct v4l2_mbus_framefmt *VAR_3)
{
 struct csis_pix_format const *VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 == ((void*)0))
  VAR_4 = &VAR_2[0];

 VAR_3->code = VAR_4->code;
 FUNC_1(&VAR_3->width, 1, VAR_1,
         VAR_4->pix_width_alignment,
         &VAR_3->height, 1, VAR_0, 1,
         0);
 return VAR_4;
}
