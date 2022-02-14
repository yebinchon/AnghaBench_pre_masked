
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ldev_num; } ;
struct TYPE_4__ {TYPE_1__ ld; } ;
union myrb_cmd_mbox {int* bytes; TYPE_2__ type5; } ;
struct myrb_cmdblk {union myrb_cmd_mbox mbox; } ;



__attribute__((used)) static inline void FUNC_0(struct myrb_cmdblk *VAR_0)
{
 union myrb_cmd_mbox *VAR_1 = &VAR_0->mbox;
 int VAR_2 = VAR_1->type5.ld.ldev_num;

 VAR_1->bytes[3] &= 0x7;
 VAR_1->bytes[3] |= VAR_1->bytes[7] << 6;
 VAR_1->bytes[7] = VAR_2;
}
