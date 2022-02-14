
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int,int const*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{

 static const u8 VAR_1[2] = {0x00, 0x00};

 FUNC_0(VAR_0, 0x16, &VAR_1[0], 1);
 FUNC_0(VAR_0, 0x18, &VAR_1[1], 1);
}
