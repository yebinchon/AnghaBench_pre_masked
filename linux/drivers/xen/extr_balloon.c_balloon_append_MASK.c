
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int lru; } ;
struct TYPE_2__ {int balloon_low; int balloon_high; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct page *VAR_3)
{
 FUNC_1(VAR_3);


 if (FUNC_0(VAR_3)) {
  FUNC_3(&VAR_3->lru, &VAR_2);
  VAR_0.balloon_high++;
 } else {
  FUNC_2(&VAR_3->lru, &VAR_2);
  VAR_0.balloon_low++;
 }
 FUNC_4(&VAR_1);
}
