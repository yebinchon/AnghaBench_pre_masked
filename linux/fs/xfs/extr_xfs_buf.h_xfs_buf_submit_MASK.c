
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buf {int b_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_buf*,int) ;

__attribute__((used)) static inline int FUNC_1(struct xfs_buf *VAR_1)
{
 bool VAR_2 = VAR_1->b_flags & VAR_0 ? 0 : 1;
 return FUNC_0(VAR_1, VAR_2);
}
