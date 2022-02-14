
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfe_device {int * wm_output_map; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct vfe_device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->wm_output_map); VAR_2++)
  VAR_1->wm_output_map[VAR_2] = VAR_0;
}
