
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct squashfs_decompressor {int name; int supported; } ;
struct fs_context {int dummy; } ;


 short VAR_0 ;
 short VAR_1 ;
 int FUNC_0 (struct fs_context*,char*,...) ;
 struct squashfs_decompressor* FUNC_1 (short) ;

__attribute__((used)) static const struct squashfs_decompressor *FUNC_2(
 struct fs_context *VAR_2,
 short VAR_3, short VAR_4, short VAR_5)
{
 const struct squashfs_decompressor *VAR_6;

 if (VAR_3 < VAR_0) {
  FUNC_0(VAR_2, "Major/Minor mismatch, older Squashfs %d.%d "
         "filesystems are unsupported", VAR_3, VAR_4);
  return ((void*)0);
 } else if (VAR_3 > VAR_0 || VAR_4 > VAR_1) {
  FUNC_0(VAR_2, "Major/Minor mismatch, trying to mount newer "
         "%d.%d filesystem", VAR_3, VAR_4);
  FUNC_0(VAR_2, "Please update your kernel");
  return ((void*)0);
 }

 VAR_6 = FUNC_1(VAR_5);
 if (!VAR_6->supported) {
  FUNC_0(VAR_2, "Filesystem uses \"%s\" compression. This is not supported",
         VAR_6->name);
  return ((void*)0);
 }

 return VAR_6;
}
