
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dummy; } ;
struct ovl_fs {int namelen; } ;
struct kstatfs {int f_namelen; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (struct path*,struct kstatfs*) ;

__attribute__((used)) static int FUNC_3(struct path *VAR_0, struct ovl_fs *VAR_1,
        const char *VAR_2)
{
 struct kstatfs VAR_3;
 int VAR_4 = FUNC_2(VAR_0, &VAR_3);

 if (VAR_4)
  FUNC_1("overlayfs: statfs failed on '%s'\n", VAR_2);
 else
  VAR_1->namelen = FUNC_0(VAR_1->namelen, VAR_3.f_namelen);

 return VAR_4;
}
