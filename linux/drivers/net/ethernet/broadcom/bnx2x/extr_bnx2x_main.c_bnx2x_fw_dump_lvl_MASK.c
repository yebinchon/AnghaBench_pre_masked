
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int bc_ver; scalar_t__ shmem_base; } ;
struct bnx2x {TYPE_1__ common; int pdev; int dev; } ;
typedef int __be32 ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 scalar_t__ FUNC_3 (struct bnx2x*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (struct bnx2x*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct bnx2x*) ;
 scalar_t__ FUNC_6 (struct bnx2x*,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (char const*,int ,char*,int,int,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,char const*,...) ;

void FUNC_12(struct bnx2x *VAR_4, const char *VAR_5)
{
 u32 VAR_6, VAR_7;
 u32 VAR_8, VAR_9;
 __be32 VAR_10[9];
 int VAR_11;
 u32 VAR_12;
 if (FUNC_1(VAR_4)) {
  FUNC_0("NO MCP - can not dump\n");
  return;
 }
 FUNC_8(VAR_5, VAR_4->dev, "bc %d.%d.%d\n",
  (VAR_4->common.bc_ver & 0xff0000) >> 16,
  (VAR_4->common.bc_ver & 0xff00) >> 8,
  (VAR_4->common.bc_ver & 0xff));

 if (FUNC_9(VAR_4->pdev)) {
  FUNC_0("Cannot dump MCP info while in PCI error\n");
  return;
 }

 VAR_7 = FUNC_4(VAR_4, VAR_1);
 if (VAR_7 == FUNC_4(VAR_4, VAR_1))
  FUNC_0("%s" "MCP PC at 0x%x\n", VAR_5, VAR_7);

 if (FUNC_2(VAR_4) == 0)
  VAR_12 = VAR_4->common.shmem_base;
 else
  VAR_12 = FUNC_6(VAR_4, VAR_3);


 if (VAR_12 < FUNC_3(VAR_4) + VAR_0 ||
     VAR_12 >= FUNC_3(VAR_4) +
    FUNC_5(VAR_4)) {
  FUNC_0("Unable to dump trace buffer (mark %x)\n",
     VAR_12);
  return;
 }

 VAR_6 = VAR_12 - VAR_0;


 VAR_8 = FUNC_4(VAR_4, VAR_6);
 if (VAR_8 != VAR_2) {
  FUNC_0("Trace buffer signature is missing.");
  return ;
 }


 VAR_6 += 4;
 VAR_8 = FUNC_4(VAR_4, VAR_6);
 VAR_8 = FUNC_3(VAR_4) + ((VAR_8 + 0x3) & ~0x3) - 0x08000000;
 if (VAR_8 >= VAR_12 || VAR_8 < VAR_6 + 4) {
  FUNC_0("Mark doesn't fall inside Trace Buffer\n");
  return;
 }
 FUNC_11("%s" "begin fw dump (mark 0x%x)\n", VAR_5, VAR_8);

 FUNC_11("%s", VAR_5);


 for (VAR_9 = VAR_8; VAR_9 < VAR_12; VAR_9 += 0x8*4) {
  for (VAR_11 = 0; VAR_11 < 8; VAR_11++)
   VAR_10[VAR_11] = FUNC_7(FUNC_4(VAR_4, VAR_9 + 4*VAR_11));
  VAR_10[8] = 0x0;
  FUNC_10("%s", (char *)VAR_10);
 }


 for (VAR_9 = VAR_6 + 4; VAR_9 <= VAR_8; VAR_9 += 0x8*4) {
  for (VAR_11 = 0; VAR_11 < 8; VAR_11++)
   VAR_10[VAR_11] = FUNC_7(FUNC_4(VAR_4, VAR_9 + 4*VAR_11));
  VAR_10[8] = 0x0;
  FUNC_10("%s", (char *)VAR_10);
 }
 FUNC_11("%s" "end of fw dump\n", VAR_5);
}
