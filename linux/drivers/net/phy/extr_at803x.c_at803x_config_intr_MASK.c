
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ interrupts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_7)
{
 int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_7, VAR_0);

 if (VAR_7->interrupts == VAR_6) {
  VAR_9 |= VAR_1;
  VAR_9 |= VAR_5;
  VAR_9 |= VAR_2;
  VAR_9 |= VAR_3;
  VAR_9 |= VAR_4;

  VAR_8 = FUNC_1(VAR_7, VAR_0, VAR_9);
 }
 else
  VAR_8 = FUNC_1(VAR_7, VAR_0, 0);

 return VAR_8;
}
