
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct lan78xx_net {scalar_t__ chipid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct lan78xx_net*) ;
 int FUNC_1 (struct lan78xx_net*,int ,int*) ;
 int FUNC_2 (struct lan78xx_net*) ;
 int FUNC_3 (struct lan78xx_net*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct lan78xx_net *VAR_10, u32 VAR_11,
       u32 VAR_12, u8 *VAR_13)
{
 u32 VAR_14;
 u32 VAR_15;
 int VAR_16, VAR_17;
 int VAR_18;




 VAR_17 = FUNC_1(VAR_10, VAR_6, &VAR_14);
 VAR_15 = VAR_14;
 if (VAR_10->chipid == VAR_9) {
  VAR_14 &= ~(VAR_8 | VAR_7);
  VAR_17 = FUNC_3(VAR_10, VAR_6, VAR_14);
 }

 VAR_18 = FUNC_0(VAR_10);
 if (VAR_18)
  return VAR_18;

 for (VAR_16 = 0; VAR_16 < VAR_12; VAR_16++) {
  VAR_14 = VAR_2 | VAR_3;
  VAR_14 |= (VAR_11 & VAR_1);
  VAR_17 = FUNC_3(VAR_10, VAR_0, VAR_14);
  if (FUNC_4(VAR_17 < 0)) {
   VAR_18 = -VAR_5;
   goto exit;
  }

  VAR_18 = FUNC_2(VAR_10);
  if (VAR_18 < 0)
   goto exit;

  VAR_17 = FUNC_1(VAR_10, VAR_4, &VAR_14);
  if (FUNC_4(VAR_17 < 0)) {
   VAR_18 = -VAR_5;
   goto exit;
  }

  VAR_13[VAR_16] = VAR_14 & 0xFF;
  VAR_11++;
 }

 VAR_18 = 0;
exit:
 if (VAR_10->chipid == VAR_9)
  VAR_17 = FUNC_3(VAR_10, VAR_6, VAR_15);

 return VAR_18;
}
