
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_path {int buf_len; int inline_buf; int buf; scalar_t__ reversed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fs_path*) ;
 struct fs_path* FUNC_1 (int,int ) ;

__attribute__((used)) static struct fs_path *FUNC_2(void)
{
 struct fs_path *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_1);
 if (!VAR_2)
  return ((void*)0);
 VAR_2->reversed = 0;
 VAR_2->buf = VAR_2->inline_buf;
 VAR_2->buf_len = VAR_0;
 FUNC_0(VAR_2);
 return VAR_2;
}
