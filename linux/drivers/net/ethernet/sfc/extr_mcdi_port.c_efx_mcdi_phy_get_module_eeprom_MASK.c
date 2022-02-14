
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ethtool_eeprom {scalar_t__ len; int offset; } ;
struct efx_nic {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct efx_nic*,int,int *,unsigned int,scalar_t__) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int FUNC_4(struct efx_nic *VAR_5,
       struct ethtool_eeprom *VAR_6, u8 *VAR_7)
{
 int VAR_8;
 ssize_t VAR_9 = VAR_6->len;
 unsigned int VAR_10;
 bool VAR_11;
 int VAR_12;
 int VAR_13;

 switch (FUNC_1(VAR_5)) {
 case 128:
  VAR_12 = FUNC_2(VAR_5) > 0 ?
    VAR_3 : VAR_1;
  VAR_13 = 0;
  VAR_11 = 0;
  break;
 case 129:
  VAR_12 = VAR_2;
  VAR_13 = -1;
  VAR_11 = 1;
  break;
 default:
  return -VAR_0;
 }

 VAR_10 = VAR_6->offset % VAR_4;
 VAR_13 += VAR_6->offset / VAR_4;

 while (VAR_9 && (VAR_13 < VAR_12)) {
  VAR_8 = FUNC_0(VAR_5, VAR_13,
        VAR_7, VAR_10,
        VAR_9);

  if (VAR_8 > 0) {
   VAR_9 -= VAR_8;
   VAR_7 += VAR_8;
   VAR_10 = 0;
   VAR_13++;
  } else if (VAR_8 == 0) {
   VAR_9 = 0;
  } else if (VAR_11 && (VAR_13 > 0)) {
   int VAR_14 = VAR_4 - VAR_10;

   VAR_9 -= VAR_14;
   if (VAR_9 < 0) {
    VAR_9 = 0;
   } else {
    FUNC_3(VAR_7, 0, VAR_14);
    VAR_7 += VAR_14;
    VAR_10 = 0;
    VAR_13++;
    VAR_8 = 0;
   }
  } else {
   return VAR_8;
  }
 }

 return 0;
}
