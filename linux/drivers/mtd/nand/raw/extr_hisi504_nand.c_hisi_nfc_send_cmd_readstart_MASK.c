
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int writesize; int oobsize; } ;
struct hinfc_host {int* addr_value; int* cache_addr_value; int chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hinfc_host*,int,int ) ;
 int FUNC_1 (struct hinfc_host*,int ) ;
 struct mtd_info* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct hinfc_host *VAR_7)
{
 struct mtd_info *VAR_8 = FUNC_2(&VAR_7->chip);

 if ((VAR_7->addr_value[0] == VAR_7->cache_addr_value[0]) &&
     (VAR_7->addr_value[1] == VAR_7->cache_addr_value[1]))
  return 0;

 VAR_7->addr_value[0] &= 0xffff0000;

 FUNC_0(VAR_7, VAR_7->addr_value[0], VAR_1);
 FUNC_0(VAR_7, VAR_7->addr_value[1], VAR_0);
 FUNC_0(VAR_7, VAR_6 << 8 | VAR_5,
      VAR_2);

 FUNC_0(VAR_7, 0, VAR_3);
 FUNC_0(VAR_7, VAR_8->writesize + VAR_8->oobsize,
      VAR_4);

 FUNC_1(VAR_7, 0);

 VAR_7->cache_addr_value[0] = VAR_7->addr_value[0];
 VAR_7->cache_addr_value[1] = VAR_7->addr_value[1];

 return 0;
}
