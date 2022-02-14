
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfe_device {scalar_t__ base; int reg_update; } ;
typedef enum vfe_line_id { ____Placeholder_vfe_line_id } vfe_line_id ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct vfe_device *VAR_1, enum vfe_line_id VAR_2)
{
 VAR_1->reg_update |= FUNC_0(VAR_2);
 FUNC_1();
 FUNC_2(VAR_1->reg_update, VAR_1->base + VAR_0);
 FUNC_1();
}
