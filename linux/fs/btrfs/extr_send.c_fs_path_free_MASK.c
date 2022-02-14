
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_path {scalar_t__ buf; scalar_t__ inline_buf; } ;


 int FUNC_0 (struct fs_path*) ;

__attribute__((used)) static void FUNC_1(struct fs_path *VAR_0)
{
 if (!VAR_0)
  return;
 if (VAR_0->buf != VAR_0->inline_buf)
  FUNC_0(VAR_0->buf);
 FUNC_0(VAR_0);
}
