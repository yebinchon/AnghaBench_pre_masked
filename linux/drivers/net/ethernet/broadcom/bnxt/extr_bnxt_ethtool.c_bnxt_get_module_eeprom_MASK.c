
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {scalar_t__ offset; scalar_t__ len; } ;
struct bnxt {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnxt*,int ,int,scalar_t__,scalar_t__,int *) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 struct bnxt* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3,
      struct ethtool_eeprom *VAR_4,
      u8 *VAR_5)
{
 struct bnxt *VAR_6 = FUNC_2(VAR_3);
 u16 VAR_7 = VAR_4->offset, VAR_8 = VAR_4->len;
 int VAR_9 = 0;

 FUNC_1(VAR_5, 0, VAR_4->len);


 if (VAR_7 < VAR_0) {
  if (VAR_7 + VAR_4->len > VAR_0)
   VAR_8 = VAR_0 - VAR_7;
  VAR_9 = FUNC_0(VAR_6, VAR_1, 0,
            VAR_7, VAR_8, VAR_5);
  if (VAR_9)
   return VAR_9;
  VAR_7 += VAR_8;
  VAR_5 += VAR_8;
  VAR_8 = VAR_4->len - VAR_8;
 }


 if (VAR_8) {
  VAR_7 -= VAR_0;
  VAR_9 = FUNC_0(VAR_6, VAR_2, 1,
            VAR_7, VAR_8, VAR_5);
 }
 return VAR_9;
}
