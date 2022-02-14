
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct encx24j600_context {int bank; int spi; } ;


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
 int FUNC_0 (struct encx24j600_context*,int) ;
 int FUNC_1 (int ,int*,int,int*,size_t) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(void *VAR_12, u8 VAR_13, u8 *VAR_14,
          size_t VAR_15)
{
 struct encx24j600_context *VAR_16 = VAR_12;
 u8 VAR_17 = VAR_13 & VAR_0;
 u8 VAR_18 = ((VAR_13 & VAR_1) >> VAR_2);
 u8 VAR_19 = VAR_5;
 int VAR_20 = 0;
 int VAR_21 = 0;
 u8 VAR_22[2];

 if (VAR_13 < 0x80) {
  VAR_19 = VAR_4 | VAR_17;
  if ((VAR_17 < 0x16) && (VAR_16->bank != VAR_18))
   VAR_20 = FUNC_0(VAR_16, VAR_18);
  if (FUNC_2(VAR_20))
   return VAR_20;
 } else {



  switch (VAR_13) {
  case 135:
   VAR_19 = VAR_6; break;
  case 134:
   VAR_19 = VAR_7; break;
  case 132:
   VAR_19 = VAR_8; break;
  case 131:
   VAR_19 = VAR_9; break;
  case 129:
   VAR_19 = VAR_10; break;
  case 128:
   VAR_19 = VAR_11; break;
  case 136:
  case 133:
  case 130:
  default:
   return -VAR_3;
  }
 }

 VAR_22[VAR_21++] = VAR_19;
 if (VAR_19 == VAR_5)
  VAR_22[VAR_21++] = VAR_13;

 VAR_20 = FUNC_1(VAR_16->spi, VAR_22, VAR_21, VAR_14, VAR_15);

 return VAR_20;
}
