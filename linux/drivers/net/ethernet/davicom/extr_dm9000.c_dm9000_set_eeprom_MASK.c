
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int offset; int len; scalar_t__ magic; } ;
struct board_info {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct board_info*,int,int *) ;
 int FUNC_1 (struct board_info*,int,int *) ;
 struct board_info* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4,
        struct ethtool_eeprom *VAR_5, u8 *VAR_6)
{
 struct board_info *VAR_7 = FUNC_2(VAR_4);
 int VAR_8 = VAR_5->offset;
 int VAR_9 = VAR_5->len;
 int VAR_10;



 if (VAR_7->flags & VAR_0)
  return -VAR_3;

 if (VAR_5->magic != VAR_1)
  return -VAR_2;

 while (VAR_9 > 0) {
  if (VAR_9 & 1 || VAR_8 & 1) {
   int VAR_11 = VAR_8 & 1;
   u8 VAR_12[2];

   FUNC_0(VAR_7, VAR_8 / 2, VAR_12);
   VAR_12[VAR_11] = *VAR_6;
   FUNC_1(VAR_7, VAR_8 / 2, VAR_12);

   VAR_10 = 1;
  } else {
   FUNC_1(VAR_7, VAR_8 / 2, VAR_6);
   VAR_10 = 2;
  }

  VAR_6 += VAR_10;
  VAR_8 += VAR_10;
  VAR_9 -= VAR_10;
 }

 return 0;
}
