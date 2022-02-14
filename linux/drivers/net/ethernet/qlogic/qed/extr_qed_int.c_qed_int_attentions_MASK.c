
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct qed_sb_attn_info {int known_attn; struct atten_status_block* sb_attn; } ;
struct qed_hwfn {struct qed_sb_attn_info* p_sb_attn; } ;
struct atten_status_block {scalar_t__ sb_index; int atten_ack; int atten_bits; } ;
typedef scalar_t__ __le16 ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,char*,...) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct qed_hwfn*,int) ;
 int FUNC_5 (struct qed_hwfn*,int) ;

__attribute__((used)) static int FUNC_6(struct qed_hwfn *VAR_2)
{
 struct qed_sb_attn_info *VAR_3 = VAR_2->p_sb_attn;
 struct atten_status_block *VAR_4 = VAR_3->sb_attn;
 u32 VAR_5 = 0, VAR_6 = 0;
 u16 VAR_7, VAR_8;
 __le16 VAR_9;
 int VAR_10 = 0;




 do {
  VAR_9 = VAR_4->sb_index;

  FUNC_2();
  VAR_5 = FUNC_3(VAR_4->atten_bits);
  VAR_6 = FUNC_3(VAR_4->atten_ack);
 } while (VAR_9 != VAR_4->sb_index);
 VAR_4->sb_index = VAR_9;






 VAR_7 = (VAR_5 & ~VAR_6 & VAR_0) &
  ~VAR_3->known_attn;
 VAR_8 = (~VAR_5 & VAR_6 & VAR_0) &
  VAR_3->known_attn;

 if ((VAR_7 & ~0x100) || (VAR_8 & ~0x100)) {
  FUNC_0(VAR_2,
   "Attention: Index: 0x%04x, Bits: 0x%08x, Acks: 0x%08x, asserted: 0x%04x, De-asserted 0x%04x [Prev. known: 0x%04x]\n",
   VAR_9, VAR_5, VAR_6, VAR_7,
   VAR_8, VAR_3->known_attn);
 } else if (VAR_7 == 0x100) {
  FUNC_0(VAR_2, "MFW indication via attention\n");
 } else {
  FUNC_1(VAR_2, VAR_1,
      "MFW indication [deassertion]\n");
 }

 if (VAR_7) {
  VAR_10 = FUNC_4(VAR_2, VAR_7);
  if (VAR_10)
   return VAR_10;
 }

 if (VAR_8)
  VAR_10 = FUNC_5(VAR_2, VAR_8);

 return VAR_10;
}
