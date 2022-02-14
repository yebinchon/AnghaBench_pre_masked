
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct e1000_hw_stats {int gorcl; scalar_t__ roc; int prc1522; int prc1023; int prc511; int prc255; int prc127; int prc64; int mprc; int bprc; int gorch; int gprc; int crcerrs; } ;
struct e1000_hw {int max_frame_size; } ;


 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;

__attribute__((used)) static void FUNC_2(struct e1000_hw *VAR_0,
       struct e1000_hw_stats *VAR_1,
       u32 VAR_2, const u8 *VAR_3)
{
 u64 VAR_4;


 VAR_2--;





 VAR_1->crcerrs--;

 VAR_1->gprc++;


 VAR_4 = 0x80000000 & VAR_1->gorcl;
 VAR_1->gorcl += VAR_2;







 if (VAR_4 && ((VAR_1->gorcl & 0x80000000) == 0))
  VAR_1->gorch++;




 if (FUNC_0(VAR_3))
  VAR_1->bprc++;
 else if (FUNC_1(VAR_3))
  VAR_1->mprc++;

 if (VAR_2 == VAR_0->max_frame_size) {



  if (VAR_1->roc > 0)
   VAR_1->roc--;
 }




 if (VAR_2 == 64) {
  VAR_1->prc64++;
  VAR_1->prc127--;
 } else if (VAR_2 == 127) {
  VAR_1->prc127++;
  VAR_1->prc255--;
 } else if (VAR_2 == 255) {
  VAR_1->prc255++;
  VAR_1->prc511--;
 } else if (VAR_2 == 511) {
  VAR_1->prc511++;
  VAR_1->prc1023--;
 } else if (VAR_2 == 1023) {
  VAR_1->prc1023++;
  VAR_1->prc1522--;
 } else if (VAR_2 == 1522) {
  VAR_1->prc1522++;
 }
}
