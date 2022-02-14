
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unicode_map {int dummy; } ;
struct f2fs_sb_info {TYPE_1__* sb; int s_encoding_flags; struct unicode_map* s_encoding; int raw_super; } ;
struct f2fs_sb_encodings {scalar_t__ version; int name; } ;
typedef int __u16 ;
struct TYPE_2__ {int * s_d_op; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct unicode_map*) ;
 int FUNC_1 (struct unicode_map*) ;
 int VAR_1 ;
 int FUNC_2 (struct f2fs_sb_info*,char*,...) ;
 int FUNC_3 (struct f2fs_sb_info*,char*,int ,char*,int ) ;
 scalar_t__ FUNC_4 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_5 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_6 (int ,struct f2fs_sb_encodings const**,int *) ;
 struct unicode_map* FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct f2fs_sb_info *VAR_2)
{
 if (FUNC_4(VAR_2)) {
  FUNC_2(VAR_2, "Filesystem with casefold feature cannot be mounted without CONFIG_UNICODE");
  return -VAR_0;
 }

 return 0;
}
