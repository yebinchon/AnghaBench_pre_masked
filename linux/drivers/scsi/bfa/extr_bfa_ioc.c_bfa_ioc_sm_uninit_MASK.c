
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_ioc_s {int dummy; } ;
typedef enum ioc_event { ____Placeholder_ioc_event } ioc_event ;



 int FUNC_0 (struct bfa_ioc_s*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct bfa_ioc_s*,int) ;
 int FUNC_2 (struct bfa_ioc_s*,int) ;

__attribute__((used)) static void
FUNC_3(struct bfa_ioc_s *VAR_1, enum ioc_event VAR_2)
{
 FUNC_2(VAR_1, VAR_2);

 switch (VAR_2) {
 case 128:
  FUNC_0(VAR_1, VAR_0);
  break;

 default:
  FUNC_1(VAR_1, VAR_2);
 }
}
