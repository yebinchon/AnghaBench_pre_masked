
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct macvlan_dev {size_t macaddr_count; } ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;

__attribute__((used)) static size_t FUNC_1(const struct macvlan_dev *VAR_1)
{
 if (VAR_1->macaddr_count == 0)
  return 0;
 return FUNC_0(0)
  + VAR_1->macaddr_count * FUNC_0(sizeof(u8) * VAR_0);
}
