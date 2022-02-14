
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0, u8 VAR_1)
{
 u8 VAR_2;

 VAR_2 = VAR_1 - (VAR_1 >> 3) - 1;
 FUNC_0(VAR_0, 0x94, &VAR_2, 1);
 FUNC_0(VAR_0, 0x95, &VAR_1, 1);
}
