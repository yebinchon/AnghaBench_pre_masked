
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phy_device {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct phy_device*,int ) ;
 int FUNC_1 (struct phy_device*,int ,int) ;
 int FUNC_2 (struct device_node const*,char const*,int*) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_1,
           const struct device_node *VAR_2,
           u16 VAR_3,
           const char *VAR_4, const char *VAR_5,
           const char *VAR_6, const char *VAR_7)
{
 int VAR_8 = -1;
 int VAR_9 = -2;
 int VAR_10 = -3;
 int VAR_11 = -4;
 int VAR_12;
 int VAR_13 = 0;

 if (!FUNC_2(VAR_2, VAR_4, &VAR_8))
  VAR_13++;

 if (!FUNC_2(VAR_2, VAR_5, &VAR_9))
  VAR_13++;

 if (!FUNC_2(VAR_2, VAR_6, &VAR_10))
  VAR_13++;

 if (!FUNC_2(VAR_2, VAR_7, &VAR_11))
  VAR_13++;

 if (!VAR_13)
  return 0;

 if (VAR_13 < 4)
  VAR_12 = FUNC_0(VAR_1, VAR_3);
 else
  VAR_12 = 0;

 if (VAR_8 != -1)
  VAR_12 = ((VAR_12 & 0xfff0) | ((VAR_8 / VAR_0) & 0xf) << 0);

 if (VAR_9 != -2)
  VAR_12 = ((VAR_12 & 0xff0f) | ((VAR_9 / VAR_0) & 0xf) << 4);

 if (VAR_10 != -3)
  VAR_12 = ((VAR_12 & 0xf0ff) | ((VAR_10 / VAR_0) & 0xf) << 8);

 if (VAR_11 != -4)
  VAR_12 = ((VAR_12 & 0x0fff) | ((VAR_11 / VAR_0) & 0xf) << 12);

 return FUNC_1(VAR_1, VAR_3, VAR_12);
}
