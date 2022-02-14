
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;
struct phy_device {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device_node*,char*,int*) ;
 size_t FUNC_1 (struct phy_device*,int,size_t) ;
 int FUNC_2 (struct phy_device*,int,size_t,size_t) ;

__attribute__((used)) static int FUNC_3(struct phy_device *VAR_4,
           struct device_node *VAR_5,
           u16 VAR_6, size_t VAR_7,
           char *VAR_8[], u8 VAR_9)
{
 int VAR_10[4] = {-(1 + VAR_0), -(2 + VAR_0),
        -(3 + VAR_0), -(4 + VAR_0)};
 int VAR_11, VAR_12 = 0;
 int VAR_13 = 0;
 u16 VAR_14;
 u16 VAR_15;
 u16 VAR_16;
 int VAR_17;


 if (VAR_7 == 5)
  VAR_12 = VAR_2;
 else
  VAR_12 = VAR_1;

 for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++)
  if (!FUNC_0(VAR_5, VAR_8[VAR_17], &VAR_11)) {
   if (VAR_11 < -VAR_0)
    VAR_11 = -VAR_0;
   else if (VAR_11 > VAR_12)
    VAR_11 = VAR_12;

   VAR_10[VAR_17] = VAR_11 + VAR_0;
   VAR_13++;
  }

 if (!VAR_13)
  return 0;

 if (VAR_13 < VAR_9)
  VAR_15 = FUNC_1(VAR_4, 2, VAR_6);
 else
  VAR_15 = 0;

 VAR_14 = (VAR_7 == 4) ? 0xf : 0x1f;
 for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++)
  if (VAR_10[VAR_17] != -(VAR_17 + 1 + VAR_0)) {
   VAR_16 = 0xffff;
   VAR_16 ^= VAR_14 << (VAR_7 * VAR_17);
   VAR_15 = (VAR_15 & VAR_16) |
    (((VAR_10[VAR_17] / VAR_3) & VAR_14)
     << (VAR_7 * VAR_17));
  }

 return FUNC_2(VAR_4, 2, VAR_6, VAR_15);
}
