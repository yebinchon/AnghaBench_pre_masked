
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_path {int dummy; } ;
struct extent_buffer {int dummy; } ;


 int FUNC_0 (struct fs_path*,int,char**) ;
 int FUNC_1 (struct extent_buffer*,char*,unsigned long,int) ;

__attribute__((used)) static int FUNC_2(struct fs_path *VAR_0,
       struct extent_buffer *VAR_1,
       unsigned long VAR_2, int VAR_3)
{
 int VAR_4;
 char *VAR_5;

 VAR_4 = FUNC_0(VAR_0, VAR_3, &VAR_5);
 if (VAR_4 < 0)
  goto out;

 FUNC_1(VAR_1, VAR_5, VAR_2, VAR_3);

out:
 return VAR_4;
}
