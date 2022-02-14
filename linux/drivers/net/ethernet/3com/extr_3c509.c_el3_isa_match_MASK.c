
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct el3_private {int dummy; } ;
struct device {int dummy; } ;
typedef int __be16 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*,struct device*) ;
 scalar_t__ VAR_3 ;
 struct net_device* FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (struct device*,struct net_device*) ;
 size_t VAR_5 ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,int *,int,int,int,int ) ;
 struct net_device** VAR_6 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct net_device*) ;
 int VAR_7 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int* VAR_8 ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (int,scalar_t__) ;
 int FUNC_13 (int,int ,char*) ;

__attribute__((used)) static int FUNC_14(struct device *VAR_9, unsigned int VAR_10)
{
 struct net_device *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;
 unsigned int VAR_16;
 __be16 VAR_17[3];

 while ((VAR_15 = FUNC_6(VAR_17)) == 2)
  ;
 if (VAR_15 == 1)
  return 0;

 VAR_16 = FUNC_8(8);
 VAR_14 = VAR_16 >> 14;
 VAR_12 = 0x200 + ((VAR_16 & 0x1f) << 4);
 if (VAR_8[VAR_5] > 1 && VAR_8[VAR_5] < 16)
  VAR_13 = VAR_8[VAR_5];
 else
  VAR_13 = FUNC_8(9) >> 12;

 VAR_11 = FUNC_2(sizeof(struct el3_private));
 if (!VAR_11)
  return -VAR_2;

 FUNC_1(VAR_11, VAR_9);
 FUNC_10(VAR_11);

 if (!FUNC_13(VAR_12, VAR_0, "3c509-isa")) {
  FUNC_7(VAR_11);
  return 0;
 }


 FUNC_11(0xd0 + ++VAR_4, VAR_7);


 FUNC_11((VAR_12 >> 4) | 0xe0, VAR_7);

 FUNC_0(0);
 if (FUNC_9(VAR_12) != 0x6d50) {
  FUNC_7(VAR_11);
  return 0;
 }


 FUNC_12(0x0f00, VAR_12 + VAR_3);

 FUNC_5(VAR_11, VAR_17, VAR_12, VAR_13, VAR_14, VAR_1);
 FUNC_3(VAR_9, VAR_11);
 if (FUNC_4(VAR_11)) {
  FUNC_7(VAR_11);
  return 0;
 }

 VAR_6[VAR_5++] = VAR_11;
 return 1;
}
