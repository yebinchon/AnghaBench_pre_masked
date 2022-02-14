
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_channel {unsigned int saved_ier; } ;
typedef enum xlgmac_int { ____Placeholder_xlgmac_int } xlgmac_int ;


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
 int VAR_14 ;
 unsigned int VAR_15 ;
 int FUNC_0 (struct xlgmac_channel*,int ) ;
 unsigned int FUNC_1 (unsigned int,int ,int ,int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct xlgmac_channel *VAR_16,
         enum xlgmac_int VAR_17)
{
 unsigned int VAR_18;

 VAR_18 = FUNC_2(FUNC_0(VAR_16, VAR_0));

 switch (VAR_17) {
 case 130:
  VAR_18 = FUNC_1(
    VAR_18, VAR_12,
    VAR_11, 0);
  break;
 case 128:
  VAR_18 = FUNC_1(
    VAR_18, VAR_14,
    VAR_13, 0);
  break;
 case 131:
  VAR_18 = FUNC_1(
    VAR_18, VAR_10,
    VAR_9, 0);
  break;
 case 133:
  VAR_18 = FUNC_1(
    VAR_18, VAR_6,
    VAR_5, 0);
  break;
 case 134:
  VAR_18 = FUNC_1(
    VAR_18, VAR_4,
    VAR_3, 0);
  break;
 case 132:
  VAR_18 = FUNC_1(
    VAR_18, VAR_8,
    VAR_7, 0);
  break;
 case 129:
  VAR_18 = FUNC_1(
    VAR_18, VAR_12,
    VAR_11, 0);
  VAR_18 = FUNC_1(
    VAR_18, VAR_6,
    VAR_5, 0);
  break;
 case 135:
  VAR_18 = FUNC_1(
    VAR_18, VAR_2,
    VAR_1, 0);
  break;
 case 136:
  VAR_16->saved_ier = VAR_18 & VAR_15;
  VAR_18 &= ~VAR_15;
  break;
 default:
  return -1;
 }

 FUNC_3(VAR_18, FUNC_0(VAR_16, VAR_0));

 return 0;
}
