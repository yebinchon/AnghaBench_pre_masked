
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_extent_t ;
typedef int xfs_efd_log_format_t ;
struct TYPE_2__ {int efd_nextents; } ;
struct xfs_efd_log_item {TYPE_1__ efd_format; } ;



__attribute__((used)) static inline int
FUNC_0(
 struct xfs_efd_log_item *VAR_0)
{
 return sizeof(xfs_efd_log_format_t) +
        (VAR_0->efd_format.efd_nextents - 1) * sizeof(xfs_extent_t);
}
