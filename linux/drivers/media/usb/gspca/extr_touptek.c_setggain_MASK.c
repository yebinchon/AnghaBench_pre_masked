
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct gspca_dev*,int ,char*,int ,int ,int ) ;
 int FUNC_2 (struct gspca_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_3, u16 VAR_4)
{
 u16 VAR_5;

 VAR_5 = FUNC_0(VAR_4);
 FUNC_1(VAR_3, VAR_0, "gain G1/G2 (0x%04X): 0x%04X (src 0x%04X)\n\n",
    VAR_1,
    VAR_5, VAR_4);

 FUNC_2(VAR_3, VAR_5, VAR_1);
 FUNC_2(VAR_3, VAR_5, VAR_2);
}
