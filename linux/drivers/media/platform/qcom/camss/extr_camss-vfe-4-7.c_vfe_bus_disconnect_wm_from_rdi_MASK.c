
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct vfe_device {int dummy; } ;
typedef enum vfe_line_id { ____Placeholder_vfe_line_id } vfe_line_id ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;



 int FUNC_2 (struct vfe_device*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct vfe_device *VAR_5, u8 VAR_6,
        enum vfe_line_id VAR_7)
{
 u32 VAR_8;

 VAR_8 = VAR_4;
 FUNC_2(VAR_5, FUNC_1(VAR_7), VAR_8);

 switch (VAR_7) {
 case 130:
 default:
  VAR_8 = VAR_1 <<
        VAR_0;
  break;
 case 129:
  VAR_8 = VAR_2 <<
        VAR_0;
  break;
 case 128:
  VAR_8 = VAR_3 <<
        VAR_0;
  break;
 }

 if (VAR_6 % 2 == 1)
  VAR_8 <<= 16;

 FUNC_2(VAR_5, FUNC_0(VAR_6), VAR_8);
}
