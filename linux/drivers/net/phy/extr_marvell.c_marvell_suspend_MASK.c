
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_3)
{
 int VAR_4;


 if (!FUNC_1(VAR_0,
          VAR_3->supported)) {
  VAR_4 = FUNC_2(VAR_3, VAR_2);
  if (VAR_4 < 0)
   goto error;


  VAR_4 = FUNC_0(VAR_3);
  if (VAR_4 < 0)
   goto error;


  VAR_4 = FUNC_2(VAR_3, VAR_1);
  if (VAR_4 < 0)
   goto error;
 }


 return FUNC_0(VAR_3);

error:
 FUNC_2(VAR_3, VAR_1);
 return VAR_4;
}
