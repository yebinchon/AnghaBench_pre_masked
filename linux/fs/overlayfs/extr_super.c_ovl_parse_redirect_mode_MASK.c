
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_config {int redirect_dir; int redirect_follow; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(struct ovl_config *VAR_2, const char *VAR_3)
{
 if (FUNC_1(VAR_3, "on") == 0) {
  VAR_2->redirect_dir = 1;




  VAR_2->redirect_follow = 1;
 } else if (FUNC_1(VAR_3, "follow") == 0) {
  VAR_2->redirect_follow = 1;
 } else if (FUNC_1(VAR_3, "off") == 0) {
  if (VAR_1)
   VAR_2->redirect_follow = 1;
 } else if (FUNC_1(VAR_3, "nofollow") != 0) {
  FUNC_0("overlayfs: bad mount option \"redirect_dir=%s\"\n",
         VAR_3);
  return -VAR_0;
 }

 return 0;
}
