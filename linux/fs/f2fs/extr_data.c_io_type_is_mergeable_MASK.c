
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_io_info {scalar_t__ op; scalar_t__ op_flags; } ;
struct TYPE_2__ {scalar_t__ op; scalar_t__ op_flags; } ;
struct f2fs_bio_info {TYPE_1__ fio; } ;



__attribute__((used)) static bool FUNC_0(struct f2fs_bio_info *VAR_0,
      struct f2fs_io_info *VAR_1)
{
 if (VAR_0->fio.op != VAR_1->op)
  return 0;
 return VAR_0->fio.op_flags == VAR_1->op_flags;
}
