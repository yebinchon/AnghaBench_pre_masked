
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;


 int FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct phy_device*,int ) ;
 int FUNC_4 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct phy_device *VAR_6,
         unsigned int VAR_7, unsigned int VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_2(VAR_6);
 if (VAR_9)
  goto out;

 VAR_9 = FUNC_4(VAR_6, VAR_0, VAR_1 |
   FUNC_0(VAR_3, VAR_7) |
   VAR_4 |
   FUNC_0(VAR_2, VAR_8));
 if (VAR_9)
  goto out;

 VAR_9 = FUNC_3(VAR_6, VAR_5);
out:

 FUNC_1(VAR_6);
 return VAR_9;
}
