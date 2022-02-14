
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct TYPE_2__ {unsigned int* nr_dirty; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_1__* FUNC_0 (struct f2fs_sb_info*) ;
 size_t VAR_4 ;
 size_t VAR_5 ;

__attribute__((used)) static inline unsigned int FUNC_1(struct f2fs_sb_info *VAR_6)
{
 return FUNC_0(VAR_6)->nr_dirty[VAR_2] +
  FUNC_0(VAR_6)->nr_dirty[VAR_4] +
  FUNC_0(VAR_6)->nr_dirty[VAR_0] +
  FUNC_0(VAR_6)->nr_dirty[VAR_3] +
  FUNC_0(VAR_6)->nr_dirty[VAR_5] +
  FUNC_0(VAR_6)->nr_dirty[VAR_1];
}
