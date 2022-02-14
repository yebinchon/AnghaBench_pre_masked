
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct vfe_device {int * wm_output_map; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct vfe_device *VAR_2, u8 VAR_3)
{
 if (VAR_3 >= FUNC_0(VAR_2->wm_output_map))
  return -VAR_0;

 VAR_2->wm_output_map[VAR_3] = VAR_1;

 return 0;
}
