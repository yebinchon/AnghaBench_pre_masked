
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bm_rcr {int available; } ;
struct bm_portal {struct bm_rcr rcr; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct bm_portal *VAR_1)
{
 struct bm_rcr *VAR_2 = &VAR_1->rcr;

 return VAR_0 - 1 - VAR_2->available;
}
