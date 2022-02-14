
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int ,int ) ;
 int FUNC_1 (struct gspca_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_1, u16 VAR_2, u8 VAR_3)
{
 FUNC_0(VAR_1, VAR_0, "reg_w [%04x] = %02x\n", VAR_2, VAR_3);
 FUNC_1(VAR_1, VAR_2, VAR_3);
}
