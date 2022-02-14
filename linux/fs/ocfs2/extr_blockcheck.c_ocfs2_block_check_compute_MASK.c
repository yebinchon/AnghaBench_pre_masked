
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct ocfs2_block_check {int bc_ecc; int bc_crc32e; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,void*,size_t) ;
 int FUNC_4 (struct ocfs2_block_check*,int ,int) ;
 scalar_t__ FUNC_5 (void*,size_t) ;

void FUNC_6(void *VAR_1, size_t VAR_2,
          struct ocfs2_block_check *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;

 FUNC_4(VAR_3, 0, sizeof(struct ocfs2_block_check));

 VAR_4 = FUNC_3(~0, VAR_1, VAR_2);
 VAR_5 = FUNC_5(VAR_1, VAR_2);





 FUNC_0(VAR_5 > VAR_0);

 VAR_3->bc_crc32e = FUNC_2(VAR_4);
 VAR_3->bc_ecc = FUNC_1((u16)VAR_5);
}
