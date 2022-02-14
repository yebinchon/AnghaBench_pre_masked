
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bm_rcr {int available; } ;
struct bm_portal {struct bm_rcr rcr; } ;



__attribute__((used)) static int FUNC_0(struct bm_portal *VAR_0)
{
 struct bm_rcr *VAR_1 = &VAR_0->rcr;

 return VAR_1->available;
}
