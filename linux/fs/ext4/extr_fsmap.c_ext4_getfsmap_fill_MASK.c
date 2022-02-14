
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct list_head {int dummy; } ;
struct ext4_fsmap {int fmr_list; void* fmr_length; int fmr_owner; void* fmr_physical; scalar_t__ fmr_flags; scalar_t__ fmr_device; } ;
typedef void* ext4_fsblk_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ext4_fsmap* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,struct list_head*) ;

__attribute__((used)) static inline int FUNC_2(struct list_head *VAR_2,
         ext4_fsblk_t VAR_3, ext4_fsblk_t VAR_4,
         uint64_t VAR_5)
{
 struct ext4_fsmap *VAR_6;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_6->fmr_device = 0;
 VAR_6->fmr_flags = 0;
 VAR_6->fmr_physical = VAR_3;
 VAR_6->fmr_owner = VAR_5;
 VAR_6->fmr_length = VAR_4;
 FUNC_1(&VAR_6->fmr_list, VAR_2);

 return 0;
}
