
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkt_attrib {int vcs_mode; int bwmode; scalar_t__ ch_offset; scalar_t__ ht_en; } ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;

 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct pkt_attrib *VAR_7, __le32 *VAR_8)
{
 switch (VAR_7->vcs_mode) {
 case 128:
  *VAR_8 |= FUNC_1(VAR_6);
  break;
 case 130:
  *VAR_8 |= FUNC_1(VAR_0);
  break;
 case 129:
 default:
  break;
 }
 if (VAR_7->vcs_mode) {
  *VAR_8 |= FUNC_1(VAR_5);

  if (VAR_7->ht_en) {
   *VAR_8 |= (VAR_7->bwmode&VAR_4) ? FUNC_1(FUNC_0(27)) : 0;

   if (VAR_7->ch_offset == VAR_2)
    *VAR_8 |= FUNC_1((0x01 << 28) & 0x30000000);
   else if (VAR_7->ch_offset == VAR_3)
    *VAR_8 |= FUNC_1((0x02 << 28) & 0x30000000);
   else if (VAR_7->ch_offset == VAR_1)
    *VAR_8 |= 0;
   else
    *VAR_8 |= FUNC_1((0x03 << 28) & 0x30000000);
  }
 }
}
