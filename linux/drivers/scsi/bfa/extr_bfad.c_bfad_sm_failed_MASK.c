
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int hal_tmo; } ;
typedef enum bfad_sm_event { ____Placeholder_bfad_sm_event } bfad_sm_event ;



 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct bfad_s*,int) ;
 int FUNC_1 (struct bfad_s*,int ) ;
 int FUNC_2 (struct bfad_s*,int ) ;
 int FUNC_3 (struct bfad_s*,int) ;
 int FUNC_4 (struct bfad_s*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct bfad_s*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct bfad_s *VAR_5, enum bfad_sm_event VAR_6)
{
 int VAR_7;

 FUNC_3(VAR_5, VAR_6);

 switch (VAR_6) {
 case 129:
  VAR_7 = FUNC_5(VAR_5);
  if (VAR_7 != VAR_1)
   break;
  FUNC_2(VAR_5, VAR_3);
  break;

 case 128:
  FUNC_2(VAR_5, VAR_2);
  FUNC_1(VAR_5, VAR_0);
  break;

 case 130:
  FUNC_2(VAR_5, VAR_4);
  FUNC_4(VAR_5);
  FUNC_6(&VAR_5->hal_tmo);
  break;

 default:
  FUNC_0(VAR_5, VAR_6);
 }
}
