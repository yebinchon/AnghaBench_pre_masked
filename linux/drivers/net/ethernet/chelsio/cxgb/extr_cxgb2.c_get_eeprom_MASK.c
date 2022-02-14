
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {struct adapter* ml_priv; } ;
struct ethtool_eeprom {int offset; int len; int magic; } ;
struct adapter {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (struct adapter*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct adapter*,int,int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, struct ethtool_eeprom *VAR_2,
        u8 *VAR_3)
{
 int VAR_4;
 u8 VAR_5[VAR_0] __attribute__((aligned(4)));
 struct adapter *VAR_6 = VAR_1->ml_priv;

 VAR_2->magic = FUNC_0(VAR_6);
 for (VAR_4 = VAR_2->offset & ~3; VAR_4 < VAR_2->offset + VAR_2->len; VAR_4 += sizeof(u32))
  FUNC_2(VAR_6, VAR_4, (__le32 *)&VAR_5[VAR_4]);
 FUNC_1(VAR_3, VAR_5 + VAR_2->offset, VAR_2->len);
 return 0;
}
