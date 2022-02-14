
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct seq_file {int dummy; } ;
struct TYPE_3__ {int border; int large_file_size; int preallocmin; int preallocsize; } ;
struct TYPE_4__ {TYPE_1__ s_alloc_options; } ;


 TYPE_2__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (int ,struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct seq_file*,int*) ;
 int FUNC_4 (struct seq_file*,char*,int) ;
 int FUNC_5 (struct seq_file*,char*) ;
 int VAR_15 ;

void FUNC_6(struct seq_file *VAR_16, struct super_block *VAR_17)
{
 int VAR_18 = 1;

 if (FUNC_1(VAR_17) == ((1 << VAR_2) |
  (1 << VAR_0) | (1 << VAR_1)))
  return;

 FUNC_5(VAR_16, ",alloc=");

 if (FUNC_2(VAR_3, VAR_17)) {
  FUNC_3(VAR_16, &VAR_18);
  if (FUNC_0(VAR_17)->s_alloc_options.border != 10) {
   FUNC_4(VAR_16, "concentrating_formatted_nodes=%d",
    100 / FUNC_0(VAR_17)->s_alloc_options.border);
  } else
   FUNC_5(VAR_16, "concentrating_formatted_nodes");
 }
 if (FUNC_2(VAR_6, VAR_17)) {
  FUNC_3(VAR_16, &VAR_18);
  if (FUNC_0(VAR_17)->s_alloc_options.large_file_size != 16) {
   FUNC_4(VAR_16, "displacing_large_files=%lu",
       FUNC_0(VAR_17)->s_alloc_options.large_file_size);
  } else
   FUNC_5(VAR_16, "displacing_large_files");
 }
 if (FUNC_2(VAR_7, VAR_17)) {
  FUNC_3(VAR_16, &VAR_18);
  FUNC_5(VAR_16, "displacing_new_packing_localities");
 }
 if (FUNC_2(VAR_12, VAR_17)) {
  FUNC_3(VAR_16, &VAR_18);
  FUNC_5(VAR_16, "old_hashed_relocation");
 }
 if (FUNC_2(VAR_10, VAR_17)) {
  FUNC_3(VAR_16, &VAR_18);
  FUNC_5(VAR_16, "new_hashed_relocation");
 }
 if (FUNC_2(VAR_4, VAR_17)) {
  FUNC_3(VAR_16, &VAR_18);
  FUNC_5(VAR_16, "dirid_groups");
 }
 if (FUNC_2(VAR_11, VAR_17)) {
  FUNC_3(VAR_16, &VAR_18);
  FUNC_5(VAR_16, "oid_groups");
 }
 if (FUNC_2(VAR_14, VAR_17)) {
  FUNC_3(VAR_16, &VAR_18);
  FUNC_5(VAR_16, "packing_groups");
 }
 if (FUNC_2(VAR_8, VAR_17)) {
  FUNC_3(VAR_16, &VAR_18);
  FUNC_5(VAR_16, "hashed_formatted_nodes");
 }
 if (FUNC_2(VAR_15, VAR_17)) {
  FUNC_3(VAR_16, &VAR_18);
  FUNC_5(VAR_16, "skip_busy");
 }
 if (FUNC_2(VAR_9, VAR_17)) {
  FUNC_3(VAR_16, &VAR_18);
  FUNC_5(VAR_16, "hundredth_slices");
 }
 if (FUNC_2(VAR_13, VAR_17)) {
  FUNC_3(VAR_16, &VAR_18);
  FUNC_5(VAR_16, "old_way");
 }
 if (FUNC_2(VAR_5, VAR_17)) {
  FUNC_3(VAR_16, &VAR_18);
  FUNC_5(VAR_16, "displace_based_on_dirid");
 }
 if (FUNC_0(VAR_17)->s_alloc_options.preallocmin != 0) {
  FUNC_3(VAR_16, &VAR_18);
  FUNC_4(VAR_16, "preallocmin=%d",
    FUNC_0(VAR_17)->s_alloc_options.preallocmin);
 }
 if (FUNC_0(VAR_17)->s_alloc_options.preallocsize != 17) {
  FUNC_3(VAR_16, &VAR_18);
  FUNC_4(VAR_16, "preallocsize=%d",
    FUNC_0(VAR_17)->s_alloc_options.preallocsize);
 }
}
