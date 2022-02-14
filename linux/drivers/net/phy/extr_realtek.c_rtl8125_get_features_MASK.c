
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct phy_device*,int,int) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_2(VAR_6, 0xa61, 0x13);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_1(VAR_1,
    VAR_6->supported, VAR_7 & VAR_4);
 FUNC_1(VAR_2,
    VAR_6->supported, VAR_7 & VAR_5);
 FUNC_1(VAR_0,
    VAR_6->supported, VAR_7 & VAR_3);

 return FUNC_0(VAR_6);
}
