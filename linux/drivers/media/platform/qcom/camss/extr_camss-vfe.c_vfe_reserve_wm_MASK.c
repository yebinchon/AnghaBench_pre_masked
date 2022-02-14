
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfe_device {scalar_t__* wm_output_map; } ;
typedef enum vfe_line_id { ____Placeholder_vfe_line_id } vfe_line_id ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1(struct vfe_device *VAR_2, enum vfe_line_id VAR_3)
{
 int VAR_4 = -VAR_0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2->wm_output_map); VAR_5++) {
  if (VAR_2->wm_output_map[VAR_5] == VAR_1) {
   VAR_2->wm_output_map[VAR_5] = VAR_3;
   VAR_4 = VAR_5;
   break;
  }
 }

 return VAR_4;
}
