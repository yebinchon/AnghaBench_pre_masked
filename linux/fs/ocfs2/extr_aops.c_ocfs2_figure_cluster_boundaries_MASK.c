
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct ocfs2_super {int s_clustersize_bits; unsigned int s_clustersize; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct ocfs2_super *VAR_2,
         u32 VAR_3,
         unsigned int *VAR_4,
         unsigned int *VAR_5)
{
 unsigned int VAR_6 = 0, VAR_7 = VAR_1;

 if (FUNC_1(VAR_0 > VAR_2->s_clustersize_bits)) {
  unsigned int VAR_8;

  VAR_8 = 1 << (VAR_0 - VAR_2->s_clustersize_bits);

  VAR_6 = VAR_3 % VAR_8;
  VAR_6 = VAR_6 << VAR_2->s_clustersize_bits;

  VAR_7 = VAR_6 + VAR_2->s_clustersize;
 }

 FUNC_0(VAR_6 > VAR_1);
 FUNC_0(VAR_7 > VAR_1);

 if (VAR_4)
  *VAR_4 = VAR_6;
 if (VAR_5)
  *VAR_5 = VAR_7;
}
