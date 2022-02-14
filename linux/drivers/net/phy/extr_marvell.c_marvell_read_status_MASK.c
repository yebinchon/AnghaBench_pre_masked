
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ interface; scalar_t__ link; int supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct phy_device*,int ) ;
 int FUNC_2 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_4)
{
 int VAR_5;


 if (FUNC_0(VAR_0,
         VAR_4->supported) &&
     VAR_4->interface != VAR_3) {
  VAR_5 = FUNC_2(VAR_4, VAR_2);
  if (VAR_5 < 0)
   goto error;

  VAR_5 = FUNC_1(VAR_4, VAR_2);
  if (VAR_5 < 0)
   goto error;
  if (VAR_4->link)
   return 0;


  VAR_5 = FUNC_2(VAR_4, VAR_1);
  if (VAR_5 < 0)
   goto error;
 }

 return FUNC_1(VAR_4, VAR_1);

error:
 FUNC_2(VAR_4, VAR_1);
 return VAR_5;
}
