
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct vfe_device {int dummy; } ;
typedef enum vfe_line_id { ____Placeholder_vfe_line_id } vfe_line_id ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct vfe_device*,int ,int) ;
 int FUNC_5 (struct vfe_device*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct vfe_device *VAR_2, u8 VAR_3,
       enum vfe_line_id VAR_4, u8 VAR_5)
{
 u32 VAR_6 = FUNC_0(VAR_3) |
        FUNC_1(VAR_4);
 u32 VAR_7 = FUNC_2(VAR_3) |
        FUNC_3(VAR_4);

 if (VAR_5) {
  FUNC_5(VAR_2, VAR_0, VAR_6);
  FUNC_5(VAR_2, VAR_1, VAR_7);
 } else {
  FUNC_4(VAR_2, VAR_0, VAR_6);
  FUNC_4(VAR_2, VAR_1, VAR_7);
 }
}
