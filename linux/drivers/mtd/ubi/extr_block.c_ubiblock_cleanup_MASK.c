
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ubiblock {TYPE_1__* gd; int tag_set; int rq; int wq; } ;
struct TYPE_4__ {int first_minor; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_8(struct ubiblock *VAR_1)
{

 FUNC_2(VAR_1->gd);

 FUNC_3(VAR_1->wq);

 FUNC_0(VAR_1->rq);
 FUNC_1(&VAR_1->tag_set);
 FUNC_4(FUNC_5(VAR_1->gd), "released");
 FUNC_6(&VAR_0, VAR_1->gd->first_minor);
 FUNC_7(VAR_1->gd);
}
