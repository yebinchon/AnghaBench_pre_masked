
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_0, u16 VAR_1, u16 VAR_2)
{
 FUNC_0(VAR_0, VAR_1 >> 8);
 FUNC_1(VAR_0, VAR_1 & 0xff, VAR_2);
}
