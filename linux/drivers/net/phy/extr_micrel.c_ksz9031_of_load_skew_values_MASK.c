
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;
struct phy_device {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device_node const*,char const*,int*) ;
 size_t FUNC_1 (struct phy_device*,int,size_t) ;
 int FUNC_2 (struct phy_device*,int,size_t,size_t) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_1,
           const struct device_node *VAR_2,
           u16 VAR_3, size_t VAR_4,
           const char *VAR_5[], u8 VAR_6)
{
 int VAR_7[4] = {-1, -2, -3, -4};
 int VAR_8 = 0;
 u16 VAR_9;
 u16 VAR_10;
 u16 VAR_11;
 int VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++)
  if (!FUNC_0(VAR_2, VAR_5[VAR_12], VAR_7 + VAR_12))
   VAR_8++;

 if (!VAR_8)
  return 0;

 if (VAR_8 < VAR_6)
  VAR_11 = FUNC_1(VAR_1, 2, VAR_3);
 else
  VAR_11 = 0;

 VAR_10 = (VAR_4 == 4) ? 0xf : 0x1f;
 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++)
  if (VAR_7[VAR_12] != -(VAR_12 + 1)) {
   VAR_9 = 0xffff;
   VAR_9 ^= VAR_10 << (VAR_4 * VAR_12);
   VAR_11 = (VAR_11 & VAR_9) |
    (((VAR_7[VAR_12] / VAR_0) & VAR_10)
     << (VAR_4 * VAR_12));
  }

 return FUNC_2(VAR_1, 2, VAR_3, VAR_11);
}
