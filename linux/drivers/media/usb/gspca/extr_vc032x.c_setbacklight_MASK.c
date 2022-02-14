
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct gspca_dev*,int,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0, s32 VAR_1)
{
 u16 VAR_2;
 u8 VAR_3;

 VAR_3 = (VAR_1 << 4) | 0x0f;
 FUNC_0(VAR_0, 0xaa, &VAR_3, 1);
 VAR_2 = 613 + 12 * VAR_1;
 VAR_3 = VAR_2 >> 8;
 FUNC_0(VAR_0, 0xc4, &VAR_3, 1);
 VAR_3 = VAR_2;
 FUNC_0(VAR_0, 0xc5, &VAR_3, 1);
 VAR_2 = 1093 - 12 * VAR_1;
 VAR_3 = VAR_2 >> 8;
 FUNC_0(VAR_0, 0xc6, &VAR_3, 1);
 VAR_3 = VAR_2;
 FUNC_0(VAR_0, 0xc7, &VAR_3, 1);
 VAR_2 = 342 + 9 * VAR_1;
 VAR_3 = VAR_2 >> 8;
 FUNC_0(VAR_0, 0xc8, &VAR_3, 1);
 VAR_3 = VAR_2;
 FUNC_0(VAR_0, 0xc9, &VAR_3, 1);
 VAR_2 = 702 - 9 * VAR_1;
 VAR_3 = VAR_2 >> 8;
 FUNC_0(VAR_0, 0xca, &VAR_3, 1);
 VAR_3 = VAR_2;
 FUNC_0(VAR_0, 0xcb, &VAR_3, 1);
}
