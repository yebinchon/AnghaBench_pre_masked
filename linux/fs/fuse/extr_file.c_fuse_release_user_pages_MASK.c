
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_args_pages {unsigned int num_pages; int * pages; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct fuse_args_pages *VAR_0,
        bool VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_pages; VAR_2++) {
  if (VAR_1)
   FUNC_1(VAR_0->pages[VAR_2]);
  FUNC_0(VAR_0->pages[VAR_2]);
 }
}
