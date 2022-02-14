
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_flags; int hal_tmo; } ;
typedef enum bfad_sm_event { ____Placeholder_bfad_sm_event } bfad_sm_event ;



 int VAR_0 ;
 int FUNC_0 (struct bfad_s*,int) ;
 int FUNC_1 (struct bfad_s*,int ) ;
 int FUNC_2 (struct bfad_s*,int) ;
 int FUNC_3 (struct bfad_s*) ;
 int FUNC_4 (struct bfad_s*) ;
 int VAR_1 ;
 int FUNC_5 (struct bfad_s*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct bfad_s *VAR_2, enum bfad_sm_event VAR_3)
{
 FUNC_2(VAR_2, VAR_3);

 switch (VAR_3) {
 case 128:
  FUNC_1(VAR_2, VAR_1);
  FUNC_4(VAR_2);
  FUNC_6(&VAR_2->hal_tmo);
  FUNC_3(VAR_2);
  VAR_2->bfad_flags &= ~VAR_0;
  FUNC_5(VAR_2);
  break;

 default:
  FUNC_0(VAR_2, VAR_3);
  break;
 }
}
