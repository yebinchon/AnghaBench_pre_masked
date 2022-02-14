
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkt_attrib {int bwmode; scalar_t__ ch_offset; scalar_t__ ht_en; } ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct pkt_attrib *VAR_5, __le32 *VAR_6)
{
 if (VAR_5->ht_en) {
  *VAR_6 |= (VAR_5->bwmode&VAR_4) ? FUNC_1(FUNC_0(25)) : 0;

  if (VAR_5->ch_offset == VAR_2)
   *VAR_6 |= FUNC_1((0x01 << VAR_0) & 0x003f0000);
  else if (VAR_5->ch_offset == VAR_3)
   *VAR_6 |= FUNC_1((0x02 << VAR_0) & 0x003f0000);
  else if (VAR_5->ch_offset == VAR_1)
   *VAR_6 |= 0;
  else
   *VAR_6 |= FUNC_1((0x03 << VAR_0) & 0x003f0000);
 }
}
