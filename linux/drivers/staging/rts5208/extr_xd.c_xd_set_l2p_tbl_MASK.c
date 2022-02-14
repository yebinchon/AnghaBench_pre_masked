
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct zone_entry {size_t* l2p_table; } ;
struct xd_info {struct zone_entry* zone; } ;
struct rtsx_chip {struct xd_info xd_card; } ;



__attribute__((used)) static void FUNC_0(struct rtsx_chip *VAR_0,
      int VAR_1, u16 VAR_2, u16 VAR_3)
{
 struct xd_info *VAR_4 = &VAR_0->xd_card;
 struct zone_entry *VAR_5;

 VAR_5 = &VAR_4->zone[VAR_1];
 VAR_5->l2p_table[VAR_2] = VAR_3;
}
