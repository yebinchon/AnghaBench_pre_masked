
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dentry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int ,struct path*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct path*) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(const char *VAR_2, struct path *VAR_3)
{
 int VAR_4 = -VAR_0;

 if (!*VAR_2) {
  FUNC_4("overlayfs: empty lowerdir\n");
  goto out;
 }
 VAR_4 = FUNC_1(VAR_2, VAR_1, VAR_3);
 if (VAR_4) {
  FUNC_4("overlayfs: failed to resolve '%s': %i\n", VAR_2, VAR_4);
  goto out;
 }
 VAR_4 = -VAR_0;
 if (FUNC_2(VAR_3->dentry)) {
  FUNC_4("overlayfs: filesystem on '%s' not supported\n", VAR_2);
  goto out_put;
 }
 if (!FUNC_0(VAR_3->dentry)) {
  FUNC_4("overlayfs: '%s' not a directory\n", VAR_2);
  goto out_put;
 }
 return 0;

out_put:
 FUNC_3(VAR_3);
out:
 return VAR_4;
}
