
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct palmas_pctrl_chip_info {int dev; int palmas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct palmas_pctrl_chip_info *VAR_3,
  bool VAR_4)
{
 int VAR_5;
 int VAR_6;

 VAR_6 = VAR_4 ? VAR_1 : 0;
 VAR_5 = FUNC_1(VAR_3->palmas, VAR_2,
   VAR_0,
   VAR_1, VAR_6);
 if (VAR_5 < 0)
  FUNC_0(VAR_3->dev, "SECONDARY_PAD3 update failed %d\n", VAR_5);
 return VAR_5;
}
