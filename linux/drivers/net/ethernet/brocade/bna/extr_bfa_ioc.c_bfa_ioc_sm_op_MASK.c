
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int auto_recover; } ;
struct bfa_ioc {TYPE_1__ iocpf; } ;
typedef enum ioc_event { ____Placeholder_ioc_event } ioc_event ;







 int FUNC_0 (struct bfa_ioc*,int ) ;
 int FUNC_1 (struct bfa_ioc*) ;
 int FUNC_2 (struct bfa_ioc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct bfa_ioc*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct bfa_ioc *VAR_3, enum ioc_event VAR_4)
{
 switch (VAR_4) {
 case 131:
  break;

 case 132:
  FUNC_2(VAR_3);
  FUNC_0(VAR_3, VAR_0);
  break;

 case 128:
 case 129:
  FUNC_2(VAR_3);

 case 130:
  if (VAR_3->iocpf.auto_recover)
   FUNC_0(VAR_3, VAR_2);
  else
   FUNC_0(VAR_3, VAR_1);

  FUNC_1(VAR_3);

  if (VAR_4 != 128)
   FUNC_3(VAR_3);
  break;

 default:
  FUNC_4(VAR_4);
 }
}
