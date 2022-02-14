
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_path {int dummy; } ;


 int FUNC_0 (struct fs_path*,int,char**) ;
 int FUNC_1 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_2(struct fs_path *VAR_0, const char *VAR_1, int VAR_2)
{
 int VAR_3;
 char *VAR_4;

 VAR_3 = FUNC_0(VAR_0, VAR_2, &VAR_4);
 if (VAR_3 < 0)
  goto out;
 FUNC_1(VAR_4, VAR_1, VAR_2);

out:
 return VAR_3;
}
