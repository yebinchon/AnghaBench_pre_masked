
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_ioend {scalar_t__ io_fork; scalar_t__ io_state; scalar_t__ io_offset; scalar_t__ io_size; TYPE_1__* io_bio; } ;
struct TYPE_2__ {scalar_t__ bi_status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool
FUNC_0(
 struct xfs_ioend *VAR_2,
 struct xfs_ioend *VAR_3)
{
 if (VAR_2->io_bio->bi_status != VAR_3->io_bio->bi_status)
  return 0;
 if ((VAR_2->io_fork == VAR_0) ^ (VAR_3->io_fork == VAR_0))
  return 0;
 if ((VAR_2->io_state == VAR_1) ^
     (VAR_3->io_state == VAR_1))
  return 0;
 if (VAR_2->io_offset + VAR_2->io_size != VAR_3->io_offset)
  return 0;
 return 1;
}
