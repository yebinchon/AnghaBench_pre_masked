
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfs4_ol_stateid {unsigned char st_access_bmap; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline void
FUNC_1(u32 VAR_1, struct nfs4_ol_stateid *VAR_2)
{
 unsigned char VAR_3 = 1 << VAR_1;

 FUNC_0(VAR_1 > VAR_0);
 VAR_2->st_access_bmap &= ~VAR_3;
}
