
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct rvu {int hw; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (struct rvu*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct rvu*,int ,int) ;

int FUNC_4(struct rvu *VAR_14, int VAR_15, u16 VAR_16)
{
 int VAR_17, VAR_18 = -VAR_8;
 u64 VAR_19, VAR_20;
 bool VAR_21;

 switch (VAR_15) {
 case 131:
  VAR_18 = VAR_3;
  goto exit;
 case 132:
  VAR_18 = VAR_2;
  goto exit;
 case 133:

  if (!VAR_16) {
   VAR_18 = VAR_1;
   goto exit;
  }
  break;
 case 130:
  VAR_18 = VAR_5;
  goto exit;
 case 129:
  VAR_18 = VAR_6;
  goto exit;
 case 128:
  VAR_18 = VAR_7;
  goto exit;
 case 134:

  if (!VAR_16) {
   VAR_18 = VAR_0;
   goto exit;
  }
  break;
 }


 if (VAR_16 & VAR_9) {
  VAR_21 = 0;
  VAR_17 = FUNC_1(VAR_14, VAR_16);
 } else {
  VAR_21 = 1;
  VAR_17 = FUNC_2(VAR_16);
 }


 if (VAR_15 == 133) {
  VAR_20 = VAR_21 ? VAR_13 : VAR_11;
  VAR_19 = FUNC_3(VAR_14, VAR_4, VAR_20 | (VAR_17 << 16));
  if (VAR_19)
   VAR_18 = VAR_1;
 }


 if (VAR_15 == 134) {
  VAR_20 = VAR_21 ? VAR_12 : VAR_10;
  VAR_19 = FUNC_3(VAR_14, VAR_4, VAR_20 | (VAR_17 << 16));
  if (VAR_19)
   VAR_18 = VAR_0;
 }

exit:
 if (FUNC_0(VAR_14->hw, VAR_18))
  return VAR_18;
 return -VAR_8;
}
