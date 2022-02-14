
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int s_flags; } ;
struct TYPE_4__ {TYPE_1__* s_es; } ;
struct TYPE_3__ {int s_feature_ro_compat; int s_feature_incompat; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct super_block*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*) ;
 scalar_t__ FUNC_4 (struct super_block*) ;
 scalar_t__ FUNC_5 (struct super_block*) ;
 scalar_t__ FUNC_6 (struct super_block*) ;
 scalar_t__ FUNC_7 (struct super_block*) ;
 scalar_t__ FUNC_8 (struct super_block*) ;
 int FUNC_9 (struct super_block*,int ,char*,...) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct super_block *VAR_5, int VAR_6)
{
 if (FUNC_7(VAR_5)) {
  FUNC_9(VAR_5, VAR_2,
   "Couldn't mount because of "
   "unsupported optional features (%x)",
   (FUNC_10(FUNC_0(VAR_5)->s_es->s_feature_incompat) &
   ~VAR_0));
  return 0;
 }


 if (FUNC_2(VAR_5)) {
  FUNC_9(VAR_5, VAR_2,
    "Filesystem with casefold feature cannot be "
    "mounted without CONFIG_UNICODE");
  return 0;
 }


 if (VAR_6)
  return 1;

 if (FUNC_6(VAR_5)) {
  FUNC_9(VAR_5, VAR_3, "filesystem is read-only");
  VAR_5->s_flags |= VAR_4;
  return 1;
 }


 if (FUNC_8(VAR_5)) {
  FUNC_9(VAR_5, VAR_2, "couldn't mount RDWR because of "
    "unsupported optional features (%x)",
    (FUNC_10(FUNC_0(VAR_5)->s_es->s_feature_ro_compat) &
    ~VAR_1));
  return 0;
 }
 if (FUNC_1(VAR_5) && !FUNC_3(VAR_5)) {
  FUNC_9(VAR_5, VAR_2,
    "Can't support bigalloc feature without "
    "extents feature\n");
  return 0;
 }


 if (FUNC_5(VAR_5) && !VAR_6) {
  FUNC_9(VAR_5, VAR_2,
    "Filesystem with quota feature cannot be mounted RDWR "
    "without CONFIG_QUOTA");
  return 0;
 }
 if (FUNC_4(VAR_5) && !VAR_6) {
  FUNC_9(VAR_5, VAR_2,
    "Filesystem with project quota feature cannot be mounted RDWR "
    "without CONFIG_QUOTA");
  return 0;
 }

 return 1;
}
