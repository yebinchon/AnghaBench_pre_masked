
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scrub_block {int page_count; } ;


 int FUNC_0 (struct scrub_block*,struct scrub_block*,int,int) ;

__attribute__((used)) static int FUNC_1(struct scrub_block *VAR_0,
          struct scrub_block *VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->page_count; VAR_2++) {
  int VAR_4;

  VAR_4 = FUNC_0(VAR_0,
          VAR_1,
          VAR_2, 1);
  if (VAR_4)
   VAR_3 = VAR_4;
 }

 return VAR_3;
}
