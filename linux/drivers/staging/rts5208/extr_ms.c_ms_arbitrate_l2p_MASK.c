
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef size_t u16 ;
struct zone_entry {size_t* l2p_table; } ;
struct ms_info {struct zone_entry* segment; } ;
struct rtsx_chip {int card_wp; struct ms_info ms_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtsx_chip*,size_t) ;
 int FUNC_1 (struct rtsx_chip*,size_t) ;

__attribute__((used)) static int FUNC_2(struct rtsx_chip *VAR_2, u16 VAR_3,
       u16 VAR_4, u8 VAR_5, u8 VAR_6)
{
 struct ms_info *VAR_7 = &VAR_2->ms_card;
 struct zone_entry *VAR_8;
 int VAR_9;
 u16 VAR_10;

 VAR_9 = (int)VAR_3 >> 9;
 VAR_8 = &VAR_7->segment[VAR_9];
 VAR_10 = VAR_8->l2p_table[VAR_4];

 if (VAR_5 != VAR_6) {
  if (VAR_5 == 0) {
   if (!(VAR_2->card_wp & VAR_0))
    FUNC_0(VAR_2, VAR_10);

   FUNC_1(VAR_2, VAR_10);
   VAR_8->l2p_table[VAR_4] = VAR_3;
  } else {
   if (!(VAR_2->card_wp & VAR_0))
    FUNC_0(VAR_2, VAR_3);

   FUNC_1(VAR_2, VAR_3);
  }
 } else {
  if (VAR_3 < VAR_10) {
   if (!(VAR_2->card_wp & VAR_0))
    FUNC_0(VAR_2, VAR_3);

   FUNC_1(VAR_2, VAR_3);
  } else {
   if (!(VAR_2->card_wp & VAR_0))
    FUNC_0(VAR_2, VAR_10);

   FUNC_1(VAR_2, VAR_10);
   VAR_8->l2p_table[VAR_4] = VAR_3;
  }
 }

 return VAR_1;
}
