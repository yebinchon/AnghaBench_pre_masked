
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mt7601u_dev {scalar_t__ macaddr; int dev; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int const*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct mt7601u_dev*,int ,int) ;

void FUNC_8(struct mt7601u_dev *VAR_3, const u8 *VAR_4)
{
 FUNC_3(VAR_3->macaddr, VAR_4);

 if (!FUNC_6(VAR_3->macaddr)) {
  FUNC_2(VAR_3->macaddr);
  FUNC_1(VAR_3->dev,
    "Invalid MAC address, using random address %pM\n",
    VAR_3->macaddr);
 }

 FUNC_7(VAR_3, VAR_0, FUNC_5(VAR_3->macaddr));
 FUNC_7(VAR_3, VAR_1, FUNC_4(VAR_3->macaddr + 4) |
  FUNC_0(VAR_2, 0xff));
}
