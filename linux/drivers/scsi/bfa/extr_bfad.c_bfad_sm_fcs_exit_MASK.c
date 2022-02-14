
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int dummy; } ;
typedef enum bfad_sm_event { ____Placeholder_bfad_sm_event } bfad_sm_event ;



 int FUNC_0 (struct bfad_s*,int) ;
 int FUNC_1 (struct bfad_s*,int ) ;
 int FUNC_2 (struct bfad_s*,int) ;
 int VAR_0 ;
 int FUNC_3 (struct bfad_s*) ;

__attribute__((used)) static void
FUNC_4(struct bfad_s *VAR_1, enum bfad_sm_event VAR_2)
{
 FUNC_2(VAR_1, VAR_2);

 switch (VAR_2) {
 case 128:
  FUNC_1(VAR_1, VAR_0);
  FUNC_3(VAR_1);
  break;

 default:
  FUNC_0(VAR_1, VAR_2);
 }
}
