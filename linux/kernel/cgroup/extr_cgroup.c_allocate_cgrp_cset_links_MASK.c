
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct cgrp_cset_link {int cset_link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct list_head*) ;
 struct cgrp_cset_link* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct list_head*) ;

__attribute__((used)) static int FUNC_4(int VAR_2, struct list_head *VAR_3)
{
 struct cgrp_cset_link *VAR_4;
 int VAR_5;

 FUNC_0(VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
  if (!VAR_4) {
   FUNC_1(VAR_3);
   return -VAR_0;
  }
  FUNC_3(&VAR_4->cset_link, VAR_3);
 }
 return 0;
}
