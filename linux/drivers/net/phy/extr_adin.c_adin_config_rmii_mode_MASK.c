
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {scalar_t__ interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct phy_device*,char*,int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct phy_device*,int ,int ,int) ;
 int FUNC_3 (struct phy_device*,int ,int ) ;
 int FUNC_4 (struct phy_device*,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct phy_device *VAR_7)
{
 u32 VAR_8;
 int VAR_9;

 if (VAR_7->interface != VAR_5)
  return FUNC_2(VAR_7, VAR_4,
       VAR_0,
       VAR_1);

 VAR_9 = FUNC_3(VAR_7, VAR_4, VAR_0);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 |= VAR_1;

 VAR_8 = FUNC_1(VAR_7, "adi,fifo-depth-bits",
     VAR_6,
     VAR_3);

 VAR_9 &= ~VAR_2;
 VAR_9 |= FUNC_0(VAR_8);

 return FUNC_4(VAR_7, VAR_4,
        VAR_0, VAR_9);
}
