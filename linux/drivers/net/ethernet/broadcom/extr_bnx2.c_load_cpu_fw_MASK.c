
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct cpu_reg {int mode; int mode_value_halt; int state; int state_value_clear; int spad_base; int mips_view_base; int inst; int pc; } ;
struct TYPE_7__ {int offset; int len; int addr; } ;
struct TYPE_6__ {int offset; int len; int addr; } ;
struct TYPE_5__ {int offset; int len; int addr; } ;
struct bnx2_mips_fw_file_entry {int start_addr; TYPE_3__ rodata; TYPE_2__ data; TYPE_1__ text; } ;
struct bnx2 {TYPE_4__* mips_firmware; } ;
typedef int __be32 ;
struct TYPE_8__ {scalar_t__ data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct bnx2*,int) ;
 int FUNC_2 (struct bnx2*,int,int) ;

__attribute__((used)) static int
FUNC_3(struct bnx2 *VAR_0, const struct cpu_reg *VAR_1,
     const struct bnx2_mips_fw_file_entry *VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5;
 __be32 *VAR_6;
 u32 VAR_7;
 u32 VAR_8;


 VAR_8 = FUNC_1(VAR_0, VAR_1->mode);
 VAR_8 |= VAR_1->mode_value_halt;
 FUNC_2(VAR_0, VAR_1->mode, VAR_8);
 FUNC_2(VAR_0, VAR_1->state, VAR_1->state_value_clear);


 VAR_3 = FUNC_0(VAR_2->text.addr);
 VAR_4 = FUNC_0(VAR_2->text.len);
 VAR_5 = FUNC_0(VAR_2->text.offset);
 VAR_6 = (__be32 *)(VAR_0->mips_firmware->data + VAR_5);

 VAR_7 = VAR_1->spad_base + (VAR_3 - VAR_1->mips_view_base);
 if (VAR_4) {
  int VAR_9;

  for (VAR_9 = 0; VAR_9 < (VAR_4 / 4); VAR_9++, VAR_7 += 4)
   FUNC_2(VAR_0, VAR_7, FUNC_0(VAR_6[VAR_9]));
 }


 VAR_3 = FUNC_0(VAR_2->data.addr);
 VAR_4 = FUNC_0(VAR_2->data.len);
 VAR_5 = FUNC_0(VAR_2->data.offset);
 VAR_6 = (__be32 *)(VAR_0->mips_firmware->data + VAR_5);

 VAR_7 = VAR_1->spad_base + (VAR_3 - VAR_1->mips_view_base);
 if (VAR_4) {
  int VAR_10;

  for (VAR_10 = 0; VAR_10 < (VAR_4 / 4); VAR_10++, VAR_7 += 4)
   FUNC_2(VAR_0, VAR_7, FUNC_0(VAR_6[VAR_10]));
 }


 VAR_3 = FUNC_0(VAR_2->rodata.addr);
 VAR_4 = FUNC_0(VAR_2->rodata.len);
 VAR_5 = FUNC_0(VAR_2->rodata.offset);
 VAR_6 = (__be32 *)(VAR_0->mips_firmware->data + VAR_5);

 VAR_7 = VAR_1->spad_base + (VAR_3 - VAR_1->mips_view_base);
 if (VAR_4) {
  int VAR_11;

  for (VAR_11 = 0; VAR_11 < (VAR_4 / 4); VAR_11++, VAR_7 += 4)
   FUNC_2(VAR_0, VAR_7, FUNC_0(VAR_6[VAR_11]));
 }


 FUNC_2(VAR_0, VAR_1->inst, 0);

 VAR_8 = FUNC_0(VAR_2->start_addr);
 FUNC_2(VAR_0, VAR_1->pc, VAR_8);


 VAR_8 = FUNC_1(VAR_0, VAR_1->mode);
 VAR_8 &= ~VAR_1->mode_value_halt;
 FUNC_2(VAR_0, VAR_1->state, VAR_1->state_value_clear);
 FUNC_2(VAR_0, VAR_1->mode, VAR_8);

 return 0;
}
