
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buf {int b_page_count; int b_offset; } ;


 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_0(
 struct xfs_buf *VAR_1)
{
 return (VAR_1->b_page_count * VAR_0) - VAR_1->b_offset;
}
