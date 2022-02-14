
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sysinfo {int totalram; unsigned long totalhigh; } ;
struct nat_entry {int dummy; } ;
struct ino_entry {int dummy; } ;
struct free_nid {int dummy; } ;
struct f2fs_sb_info {TYPE_4__* sb; int total_ext_node; int total_ext_tree; TYPE_1__* im; } ;
struct f2fs_nm_info {int* nid_cnt; unsigned long ram_thresh; int nat_cnt; } ;
struct extent_tree {int dummy; } ;
struct extent_node {int dummy; } ;
struct TYPE_8__ {TYPE_3__* s_bdi; } ;
struct TYPE_6__ {scalar_t__ dirty_exceeded; } ;
struct TYPE_7__ {TYPE_2__ wb; } ;
struct TYPE_5__ {int ino_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct f2fs_nm_info* FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct f2fs_sb_info*) ;
 unsigned long FUNC_3 (struct f2fs_sb_info*,int ) ;
 int FUNC_4 (struct sysinfo*) ;

bool FUNC_5(struct f2fs_sb_info *VAR_11, int VAR_12)
{
 struct f2fs_nm_info *VAR_13 = FUNC_0(VAR_11);
 struct sysinfo VAR_14;
 unsigned long VAR_15;
 unsigned long VAR_16 = 0;
 bool VAR_17 = 0;

 FUNC_4(&VAR_14);


 VAR_15 = VAR_14.totalram - VAR_14.totalhigh;




 if (VAR_12 == VAR_5) {
  VAR_16 = (VAR_13->nid_cnt[VAR_4] *
    sizeof(struct free_nid)) >> VAR_10;
  VAR_17 = VAR_16 < ((VAR_15 * VAR_13->ram_thresh / 100) >> 2);
 } else if (VAR_12 == VAR_9) {
  VAR_16 = (VAR_13->nat_cnt * sizeof(struct nat_entry)) >>
       VAR_10;
  VAR_17 = VAR_16 < ((VAR_15 * VAR_13->ram_thresh / 100) >> 2);
  if (FUNC_2(VAR_11))
   VAR_17 = 0;
 } else if (VAR_12 == VAR_0) {
  if (VAR_11->sb->s_bdi->wb.dirty_exceeded)
   return 0;
  VAR_16 = FUNC_3(VAR_11, VAR_2);
  VAR_17 = VAR_16 < ((VAR_15 * VAR_13->ram_thresh / 100) >> 1);
 } else if (VAR_12 == VAR_7) {
  int VAR_18;

  for (VAR_18 = 0; VAR_18 < VAR_8; VAR_18++)
   VAR_16 += VAR_11->im[VAR_18].ino_num *
      sizeof(struct ino_entry);
  VAR_16 >>= VAR_10;
  VAR_17 = VAR_16 < ((VAR_15 * VAR_13->ram_thresh / 100) >> 1);
 } else if (VAR_12 == VAR_1) {
  VAR_16 = (FUNC_1(&VAR_11->total_ext_tree) *
    sizeof(struct extent_tree) +
    FUNC_1(&VAR_11->total_ext_node) *
    sizeof(struct extent_node)) >> VAR_10;
  VAR_17 = VAR_16 < ((VAR_15 * VAR_13->ram_thresh / 100) >> 1);
 } else if (VAR_12 == VAR_6) {

  VAR_16 = FUNC_3(VAR_11, VAR_3);
  VAR_17 = VAR_16 < (VAR_14.totalram / 5);
 } else {
  if (!VAR_11->sb->s_bdi->wb.dirty_exceeded)
   return 1;
 }
 return VAR_17;
}
