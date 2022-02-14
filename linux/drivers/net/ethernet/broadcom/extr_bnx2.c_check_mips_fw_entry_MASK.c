
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firmware {int dummy; } ;
struct bnx2_mips_fw_file_entry {int rodata; int data; int text; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct firmware const*,int *,int,int) ;

__attribute__((used)) static int
FUNC_1(const struct firmware *VAR_1,
      const struct bnx2_mips_fw_file_entry *VAR_2)
{
 if (FUNC_0(VAR_1, &VAR_2->text, 4, 1) ||
     FUNC_0(VAR_1, &VAR_2->data, 4, 0) ||
     FUNC_0(VAR_1, &VAR_2->rodata, 4, 0))
  return -VAR_0;
 return 0;
}
