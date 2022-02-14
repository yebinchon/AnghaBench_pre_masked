
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct super_block {int s_blocksize; } ;
typedef int daddr_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline u_long
FUNC_1(struct super_block *VAR_0, daddr_t VAR_1, u_long VAR_2)
{
 FUNC_0(VAR_0->s_blocksize % VAR_2);
 return (VAR_1 * (VAR_0->s_blocksize / VAR_2));
}
