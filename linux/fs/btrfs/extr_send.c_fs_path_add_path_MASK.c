
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_path {scalar_t__ start; scalar_t__ end; } ;


 int FUNC_0 (struct fs_path*,scalar_t__,char**) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct fs_path *VAR_0, struct fs_path *VAR_1)
{
 int VAR_2;
 char *VAR_3;

 VAR_2 = FUNC_0(VAR_0, VAR_1->end - VAR_1->start, &VAR_3);
 if (VAR_2 < 0)
  goto out;
 FUNC_1(VAR_3, VAR_1->start, VAR_1->end - VAR_1->start);

out:
 return VAR_2;
}
