
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_ioc_s {int dummy; } ;
typedef enum ioc_event { ____Placeholder_ioc_event } ioc_event ;





 int FUNC_0 (struct bfa_ioc_s*,int ) ;
 int FUNC_1 (struct bfa_ioc_s*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct bfa_ioc_s*,int) ;
 int FUNC_3 (struct bfa_ioc_s*,int) ;

__attribute__((used)) static void
FUNC_4(struct bfa_ioc_s *VAR_2, enum ioc_event VAR_3)
{
 FUNC_3(VAR_2, VAR_3);

 switch (VAR_3) {
 case 128:
  FUNC_0(VAR_2, VAR_0);
  break;

 case 129:
  FUNC_1(VAR_2);
  break;

 case 130:
  FUNC_0(VAR_2, VAR_1);
  break;

 default:
  FUNC_2(VAR_2, VAR_3);
 }
}
