
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union myrb_cmd_mbox {int* bytes; } ;
struct myrb_cmdblk {union myrb_cmd_mbox mbox; } ;



__attribute__((used)) static inline void FUNC_0(struct myrb_cmdblk *VAR_0)
{
 union myrb_cmd_mbox *VAR_1 = &VAR_0->mbox;
 int VAR_2 = VAR_1->bytes[7];

 VAR_1->bytes[7] = VAR_1->bytes[3] >> 6;
 VAR_1->bytes[3] &= 0x7;
 VAR_1->bytes[3] |= VAR_2 << 3;
}
