
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vfe_device {scalar_t__* wm_output_map; } ;


 unsigned int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct vfe_device*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct vfe_device *VAR_1, u8 VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->wm_output_map); VAR_3++)
  if (VAR_1->wm_output_map[VAR_3] == VAR_0) {
   FUNC_1(VAR_1, VAR_3);
   break;
  }
}
