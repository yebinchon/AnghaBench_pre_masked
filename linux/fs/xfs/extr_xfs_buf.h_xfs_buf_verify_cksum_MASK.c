
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buf {int b_length; int b_addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,unsigned long) ;

__attribute__((used)) static inline int
FUNC_2(struct xfs_buf *VAR_0, unsigned long VAR_1)
{
 return FUNC_1(VAR_0->b_addr, FUNC_0(VAR_0->b_length),
    VAR_1);
}
