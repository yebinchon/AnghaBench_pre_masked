
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct firmware {int size; } ;
struct bnx2_fw_file_section {int len; int offset; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(const struct firmware *VAR_1,
   const struct bnx2_fw_file_section *VAR_2,
   u32 VAR_3, bool VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_2->offset);
 u32 VAR_6 = FUNC_0(VAR_2->len);

 if ((VAR_5 == 0 && VAR_6 != 0) || VAR_5 >= VAR_1->size || VAR_5 & 3)
  return -VAR_0;
 if ((VAR_4 && VAR_6 == 0) || VAR_6 > VAR_1->size - VAR_5 ||
     VAR_6 & (VAR_3 - 1))
  return -VAR_0;
 return 0;
}
