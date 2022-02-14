
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct gfs2_inode {scalar_t__ i_no_addr; scalar_t__ i_no_formal_ino; } ;



__attribute__((used)) static inline int FUNC_0(const struct gfs2_inode *VAR_0, u64 VAR_1,
      u64 VAR_2)
{
 return VAR_0->i_no_addr == VAR_1 && VAR_0->i_no_formal_ino == VAR_2;
}
