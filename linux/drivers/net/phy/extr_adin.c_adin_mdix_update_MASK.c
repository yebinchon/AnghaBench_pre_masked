
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {void* mdix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (struct phy_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_7)
{
 bool VAR_8, VAR_9;
 bool VAR_10;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_7, VAR_3);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_8 = !!(VAR_11 & VAR_0);
 VAR_9 = !!(VAR_11 & VAR_1);


 if (!VAR_8) {
  if (VAR_9)
   VAR_7->mdix = VAR_6;
  else
   VAR_7->mdix = VAR_5;
  return 0;
 }






 VAR_11 = FUNC_0(VAR_7, VAR_4);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_10 = !!(VAR_11 & VAR_2);

 if (VAR_9 != VAR_10)
  VAR_7->mdix = VAR_6;
 else
  VAR_7->mdix = VAR_5;

 return 0;
}
