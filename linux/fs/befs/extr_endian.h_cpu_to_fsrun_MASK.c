
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_6__ {void* len; void* start; int allocation_group; } ;
typedef TYPE_1__ befs_disk_block_run ;
struct TYPE_7__ {int len; int start; int allocation_group; } ;
typedef TYPE_2__ befs_block_run ;
struct TYPE_8__ {scalar_t__ byte_order; } ;


 scalar_t__ VAR_0 ;
 TYPE_5__* FUNC_0 (struct super_block const*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static inline befs_disk_block_run
FUNC_5(const struct super_block *VAR_1, befs_block_run VAR_2)
{
 befs_disk_block_run VAR_3;

 if (FUNC_0(VAR_1)->byte_order == VAR_0) {
  VAR_3.allocation_group = FUNC_4(VAR_2.allocation_group);
  VAR_3.start = FUNC_3(VAR_2.start);
  VAR_3.len = FUNC_3(VAR_2.len);
 } else {
  VAR_3.allocation_group = FUNC_2(VAR_2.allocation_group);
  VAR_3.start = FUNC_1(VAR_2.start);
  VAR_3.len = FUNC_1(VAR_2.len);
 }
 return VAR_3;
}
