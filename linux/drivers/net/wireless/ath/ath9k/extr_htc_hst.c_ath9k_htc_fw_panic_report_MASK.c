
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sk_buff {scalar_t__ data; } ;
struct htc_target {int dev; } ;
struct htc_panic_bad_vaddr {int badvaddr; int pc; int exccause; } ;
struct htc_panic_bad_epid {int epid; } ;


 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static void FUNC_1(struct htc_target *VAR_0,
          struct sk_buff *VAR_1)
{
 uint32_t *VAR_2 = (uint32_t *)VAR_1->data;

 switch (*VAR_2) {
 case 0x33221199:
  {
  struct htc_panic_bad_vaddr *VAR_3;
  VAR_3 = (struct htc_panic_bad_vaddr *) VAR_1->data;
  FUNC_0(VAR_0->dev, "ath: firmware panic! "
   "exccause: 0x%08x; pc: 0x%08x; badvaddr: 0x%08x.\n",
   VAR_3->exccause, VAR_3->pc,
   VAR_3->badvaddr);
  break;
  }
 case 0x33221299:
  {
  struct htc_panic_bad_epid *VAR_4;
  VAR_4 = (struct htc_panic_bad_epid *) VAR_1->data;
  FUNC_0(VAR_0->dev, "ath: firmware panic! "
   "bad epid: 0x%08x\n", VAR_4->epid);
  break;
  }
 default:
  FUNC_0(VAR_0->dev, "ath: unknown panic pattern!\n");
  break;
 }
}
