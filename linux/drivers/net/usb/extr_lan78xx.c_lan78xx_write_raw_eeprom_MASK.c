
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
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct lan78xx_net*) ;
 int FUNC_1 (struct lan78xx_net*,int ,int*) ;
 int FUNC_2 (struct lan78xx_net*) ;
 int FUNC_3 (struct lan78xx_net*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct lan78xx_net *VAR_11, u32 VAR_12,
        u32 VAR_13, u8 *VAR_14)
{
 u32 VAR_15;
 u32 VAR_16;
 int VAR_17, VAR_18;
 int VAR_19;




 VAR_18 = FUNC_1(VAR_11, VAR_7, &VAR_15);
 VAR_16 = VAR_15;
 if (VAR_11->chipid == VAR_10) {
  VAR_15 &= ~(VAR_9 | VAR_8);
  VAR_18 = FUNC_3(VAR_11, VAR_7, VAR_15);
 }

 VAR_19 = FUNC_0(VAR_11);
 if (VAR_19)
  goto exit;


 VAR_15 = VAR_2 | VAR_3;
 VAR_18 = FUNC_3(VAR_11, VAR_0, VAR_15);
 if (FUNC_4(VAR_18 < 0)) {
  VAR_19 = -VAR_6;
  goto exit;
 }

 VAR_19 = FUNC_2(VAR_11);
 if (VAR_19 < 0)
  goto exit;

 for (VAR_17 = 0; VAR_17 < VAR_13; VAR_17++) {

  VAR_15 = VAR_14[VAR_17];
  VAR_18 = FUNC_3(VAR_11, VAR_5, VAR_15);
  if (VAR_18 < 0) {
   VAR_19 = -VAR_6;
   goto exit;
  }


  VAR_15 = VAR_2 | VAR_4;
  VAR_15 |= (VAR_12 & VAR_1);
  VAR_18 = FUNC_3(VAR_11, VAR_0, VAR_15);
  if (VAR_18 < 0) {
   VAR_19 = -VAR_6;
   goto exit;
  }

  VAR_19 = FUNC_2(VAR_11);
  if (VAR_19 < 0)
   goto exit;

  VAR_12++;
 }

 VAR_19 = 0;
exit:
 if (VAR_11->chipid == VAR_10)
  VAR_18 = FUNC_3(VAR_11, VAR_7, VAR_16);

 return VAR_19;
}
