
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buf {int b_page_count; scalar_t__ b_addr; } ;



__attribute__((used)) static inline int
FUNC_0(
 struct xfs_buf *VAR_0)
{







 return VAR_0->b_addr && VAR_0->b_page_count > 1;
}
