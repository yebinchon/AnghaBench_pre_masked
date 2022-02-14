
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int FUNC_2 (struct vfe_device*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct vfe_device *VAR_8, u8 VAR_9,
          enum vfe_line_id VAR_10)
{
 u32 VAR_11;

 VAR_11 = VAR_4;
 FUNC_2(VAR_8, FUNC_1(0), VAR_11);

 VAR_11 = VAR_5;
 VAR_11 |= ((3 * VAR_10) << VAR_7) &
  VAR_6;
 FUNC_2(VAR_8, FUNC_1(VAR_10), VAR_11);

 switch (VAR_10) {
 case 130:
 default:
  VAR_11 = VAR_1 <<
        VAR_0;
  break;
 case 129:
  VAR_11 = VAR_2 <<
        VAR_0;
  break;
 case 128:
  VAR_11 = VAR_3 <<
        VAR_0;
  break;
 }

 if (VAR_9 % 2 == 1)
  VAR_11 <<= 16;

 FUNC_2(VAR_8, FUNC_0(VAR_9), VAR_11);
}
