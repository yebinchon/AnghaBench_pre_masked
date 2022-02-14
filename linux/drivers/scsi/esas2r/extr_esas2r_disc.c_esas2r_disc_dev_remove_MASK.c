
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_target {scalar_t__ new_target_state; } ;
struct esas2r_request {scalar_t__ interrupt_cx; } ;
struct esas2r_disc_context {struct esas2r_target* curr_targ; int state; } ;
struct esas2r_adapter {struct esas2r_target* targetdb; struct esas2r_target* targetdb_end; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct esas2r_target* FUNC_0 (struct esas2r_adapter*,int ) ;
 int FUNC_1 (struct esas2r_adapter*,struct esas2r_target*) ;
 int FUNC_2 (struct esas2r_target*,struct esas2r_adapter*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static bool FUNC_5(struct esas2r_adapter *VAR_3,
       struct esas2r_request *VAR_4)
{
 struct esas2r_disc_context *VAR_5 =
  (struct esas2r_disc_context *)VAR_4->interrupt_cx;
 struct esas2r_target *VAR_6;
 struct esas2r_target *VAR_7;

 FUNC_3();



 for (VAR_6 = VAR_3->targetdb; VAR_6 < VAR_3->targetdb_end; VAR_6++) {
  if (VAR_6->new_target_state != VAR_2)
   continue;

  VAR_6->new_target_state = VAR_1;



  VAR_7 =
   FUNC_0(VAR_3,
             FUNC_2(VAR_6,
           VAR_3));

  if (VAR_7)
   FUNC_1(VAR_3, VAR_7);
 }



 VAR_5->state = VAR_0;
 VAR_5->curr_targ = VAR_3->targetdb;

 FUNC_4();

 return 0;
}
