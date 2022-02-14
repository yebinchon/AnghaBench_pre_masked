
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlm_block {int b_flags; TYPE_1__* b_deferred_req; } ;
struct TYPE_2__ {int (* revisit ) (TYPE_1__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct nlm_block*,int) ;
 int FUNC_1 (struct nlm_block*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_3(struct nlm_block *VAR_3)
{
 if (!(VAR_3->b_flags & VAR_0))
  VAR_3->b_flags |= VAR_1;
 FUNC_1(VAR_3, VAR_2);
 FUNC_0("revisit block %p flags %d\n", VAR_3, VAR_3->b_flags);
 if (VAR_3->b_deferred_req) {
  VAR_3->b_deferred_req->revisit(VAR_3->b_deferred_req, 0);
  VAR_3->b_deferred_req = ((void*)0);
 }
}
