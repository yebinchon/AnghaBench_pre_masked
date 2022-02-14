
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_path {char* start; char* end; char* buf; scalar_t__ reversed; } ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static void FUNC_1(struct fs_path *VAR_0)
{
 char *VAR_1;
 int VAR_2;

 if (!VAR_0->reversed)
  return;

 VAR_1 = VAR_0->start;
 VAR_2 = VAR_0->end - VAR_0->start;
 VAR_0->start = VAR_0->buf;
 VAR_0->end = VAR_0->start + VAR_2;
 FUNC_0(VAR_0->start, VAR_1, VAR_2 + 1);
 VAR_0->reversed = 0;
}
