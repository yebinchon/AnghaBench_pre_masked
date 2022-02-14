
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_bmap {int b_state; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const struct nilfs_bmap *VAR_1)
{
 return !!(VAR_1->b_state & VAR_0);
}
