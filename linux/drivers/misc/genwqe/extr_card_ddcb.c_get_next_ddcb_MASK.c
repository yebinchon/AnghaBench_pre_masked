
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct genwqe_dev {int dummy; } ;
struct ddcb_queue {size_t ddcb_next; int ddcb_max; int ddcb_seq; struct ddcb* ddcb_vaddr; } ;
struct ddcb {int icrc_hsi_shi_32; int seqnum_16; int pre; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ddcb_queue*) ;

__attribute__((used)) static struct ddcb *FUNC_2(struct genwqe_dev *VAR_2,
      struct ddcb_queue *VAR_3,
      int *VAR_4)
{
 u64 *VAR_5;
 struct ddcb *VAR_6;

 if (FUNC_1(VAR_3) == 0)
  return ((void*)0);


 VAR_6 = &VAR_3->ddcb_vaddr[VAR_3->ddcb_next];



 if ((VAR_6->icrc_hsi_shi_32 & VAR_0) == 0x00000000)
  return ((void*)0);

 *VAR_4 = VAR_3->ddcb_next;
 VAR_3->ddcb_next = (VAR_3->ddcb_next + 1) % VAR_3->ddcb_max;


 VAR_5 = (u64 *)VAR_6;
 VAR_5[0] = 0ULL;
 VAR_5[1] = 0ULL;


 VAR_5[0x80/8] = 0ULL;
 VAR_5[0x88/8] = 0ULL;
 VAR_5[0x90/8] = 0ULL;
 VAR_5[0x98/8] = 0ULL;
 VAR_5[0xd0/8] = 0ULL;

 VAR_6->pre = VAR_1;
 VAR_6->seqnum_16 = FUNC_0(VAR_3->ddcb_seq++);
 return VAR_6;
}
