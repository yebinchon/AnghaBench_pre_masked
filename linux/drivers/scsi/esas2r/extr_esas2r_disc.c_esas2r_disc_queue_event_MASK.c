
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct esas2r_disc_context {int disc_evt; } ;
struct esas2r_adapter {int flags; struct esas2r_disc_context disc_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct esas2r_adapter*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct esas2r_adapter *VAR_2, u8 VAR_3)
{
 struct esas2r_disc_context *VAR_4 = &VAR_2->disc_ctx;

 FUNC_2();

 FUNC_1("disc_event: %d", VAR_3);


 VAR_4->disc_evt |= VAR_3;





 if (!FUNC_4(VAR_0, &VAR_2->flags) &&
     !FUNC_4(VAR_1, &VAR_2->flags))
  FUNC_0(VAR_2);

 FUNC_3();
}
