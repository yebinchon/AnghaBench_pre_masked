
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_path {int reversed; } ;


 int FUNC_0 (struct fs_path*,struct fs_path*) ;
 int FUNC_1 (struct fs_path*) ;

__attribute__((used)) static int FUNC_2(struct fs_path *VAR_0, struct fs_path *VAR_1)
{
 int VAR_2;

 VAR_0->reversed = VAR_1->reversed;
 FUNC_1(VAR_0);

 VAR_2 = FUNC_0(VAR_0, VAR_1);

 return VAR_2;
}
