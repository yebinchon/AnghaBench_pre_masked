
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u16 ;
struct gfs2_inode {scalar_t__ i_no_addr; scalar_t__ i_eattr; } ;



__attribute__((used)) static u16 FUNC_0(const struct gfs2_inode *VAR_0)
{
 u64 VAR_1 = VAR_0->i_no_addr + 1;
 if (VAR_0->i_eattr == VAR_1)
  return 1;
 return 0;
}
