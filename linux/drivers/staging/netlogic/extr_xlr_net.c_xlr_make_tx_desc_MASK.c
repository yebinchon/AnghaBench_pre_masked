
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sk_buff {scalar_t__ len; } ;
struct nlm_fmn_msg {int msg0; int msg1; scalar_t__ msg3; scalar_t__ msg2; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct nlm_fmn_msg *VAR_1, unsigned long VAR_2,
        struct sk_buff *VAR_3)
{
 unsigned long VAR_4 = FUNC_1(VAR_3);
 int VAR_5 = FUNC_0();
 int VAR_6 = VAR_5 * 8 + VAR_0;

 VAR_1->msg0 = (((u64)1 << 63) |
  ((u64)127 << 54) |
  (u64)VAR_3->len << 40 |
  ((u64)VAR_2));
 VAR_1->msg1 = (((u64)1 << 63) |
  ((u64)VAR_6 << 54) |
  (u64)0 << 40 |
  ((u64)VAR_4 & 0xffffffff));
 VAR_1->msg2 = 0;
 VAR_1->msg3 = 0;
}
