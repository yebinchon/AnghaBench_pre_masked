
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_path {int reversed; } ;


 struct fs_path* FUNC_0 () ;
 int FUNC_1 (struct fs_path*) ;

__attribute__((used)) static struct fs_path *FUNC_2(void)
{
 struct fs_path *VAR_0;

 VAR_0 = FUNC_0();
 if (!VAR_0)
  return ((void*)0);
 VAR_0->reversed = 1;
 FUNC_1(VAR_0);
 return VAR_0;
}
