
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {int phy_mode; scalar_t__ state; int net_dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum ef4_phy_mode { ____Placeholder_ef4_phy_mode } ef4_phy_mode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ef4_nic* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ef4_nic*) ;
 int FUNC_2 (struct ef4_nic*) ;
 int FUNC_3 (struct ef4_nic*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct ef4_nic*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_3,
     struct device_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 struct ef4_nic *VAR_7 = FUNC_0(VAR_3);
 enum ef4_phy_mode VAR_8, VAR_9;
 int VAR_10;

 FUNC_5();
 VAR_8 = VAR_7->phy_mode;
 if (VAR_6 == 0 || *VAR_5 == '0')
  VAR_9 = VAR_8 & ~VAR_1;
 else
  VAR_9 = VAR_1;
 if (!((VAR_8 ^ VAR_9) & VAR_1)) {
  VAR_10 = 0;
 } else if (VAR_7->state != VAR_2 || FUNC_4(VAR_7->net_dev)) {
  VAR_10 = -VAR_0;
 } else {


  VAR_7->phy_mode = VAR_9;
  if (VAR_9 & VAR_1)
   FUNC_3(VAR_7);
  VAR_10 = FUNC_7(VAR_7);
  if (!VAR_10)
   VAR_10 = FUNC_1(VAR_7);
  if (!(VAR_9 & VAR_1))
   FUNC_2(VAR_7);
 }
 FUNC_6();

 return VAR_10 ? VAR_10 : VAR_6;
}
