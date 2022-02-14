
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ocfs2_super {int s_clustersize_bits; } ;


 int VAR_0 ;

__attribute__((used)) static inline u16 FUNC_0(struct ocfs2_super *VAR_1)
{
 return (1 << VAR_1->s_clustersize_bits) / VAR_0;
}
