
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ index; } ;
struct ovl_fs {TYPE_1__ config; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static int FUNC_2(struct ovl_fs *VAR_1, const char *VAR_2)
{
 if (VAR_1->config.index) {
  FUNC_0("overlayfs: %s is in-use as upperdir/workdir of another mount, mount with '-o index=off' to override exclusive upperdir protection.\n",
         VAR_2);
  return -VAR_0;
 } else {
  FUNC_1("overlayfs: %s is in-use as upperdir/workdir of another mount, accessing files from both mounts will result in undefined behavior.\n",
   VAR_2);
  return 0;
 }
}
