
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int ) ;
 int FUNC_1 (struct gspca_dev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_0, u16 VAR_1, u8 VAR_2, u8 VAR_3)
{
 VAR_2 = (FUNC_0(VAR_0, VAR_1) & ~VAR_3) | (VAR_2 & VAR_3);
 FUNC_1(VAR_0, VAR_1, VAR_2);
}
