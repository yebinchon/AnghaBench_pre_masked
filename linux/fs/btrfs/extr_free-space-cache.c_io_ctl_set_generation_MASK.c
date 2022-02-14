
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct btrfs_io_ctl {int num_pages; int size; int * cur; scalar_t__ check_crcs; } ;
typedef int __le64 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct btrfs_io_ctl*,int) ;

__attribute__((used)) static void FUNC_2(struct btrfs_io_ctl *VAR_0, u64 VAR_1)
{
 __le64 *VAR_2;

 FUNC_1(VAR_0, 1);





 if (VAR_0->check_crcs) {
  VAR_0->cur += (sizeof(u32) * VAR_0->num_pages);
  VAR_0->size -= sizeof(u64) + (sizeof(u32) * VAR_0->num_pages);
 } else {
  VAR_0->cur += sizeof(u64);
  VAR_0->size -= sizeof(u64) * 2;
 }

 VAR_2 = VAR_0->cur;
 *VAR_2 = FUNC_0(VAR_1);
 VAR_0->cur += sizeof(u64);
}
