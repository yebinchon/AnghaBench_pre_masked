
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sprd_adi {scalar_t__ hwlock; int dev; scalar_t__ base; } ;


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
 scalar_t__ VAR_10 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (scalar_t__,int ,unsigned long*) ;
 int FUNC_3 (scalar_t__,unsigned long*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct sprd_adi *VAR_11, u32 VAR_12, u32 *VAR_13)
{
 int VAR_14 = VAR_1;
 unsigned long VAR_15;
 u32 VAR_16, VAR_17;
 int VAR_18 = 0;

 if (VAR_11->hwlock) {
  VAR_18 = FUNC_2(VAR_11->hwlock,
        VAR_0,
        &VAR_15);
  if (VAR_18) {
   FUNC_1(VAR_11->dev, "get the hw lock failed\n");
   return VAR_18;
  }
 }





 FUNC_5(VAR_12, VAR_11->base + VAR_9);







 do {
  VAR_16 = FUNC_4(VAR_11->base + VAR_10);
  if (!(VAR_16 & VAR_2))
   break;

  FUNC_0();
 } while (--VAR_14);

 if (VAR_14 == 0) {
  FUNC_1(VAR_11->dev, "ADI read timeout\n");
  VAR_18 = -VAR_3;
  goto out;
 }







 VAR_17 = (VAR_16 & VAR_5 ) >> VAR_6;

 if (VAR_17 != (VAR_12 & VAR_8)) {
  FUNC_1(VAR_11->dev, "read error, reg addr = 0x%x, val = 0x%x\n",
   VAR_12, VAR_16);
  VAR_18 = -VAR_4;
  goto out;
 }

 *VAR_13 = VAR_16 & VAR_7;

out:
 if (VAR_11->hwlock)
  FUNC_3(VAR_11->hwlock, &VAR_15);
 return VAR_18;
}
