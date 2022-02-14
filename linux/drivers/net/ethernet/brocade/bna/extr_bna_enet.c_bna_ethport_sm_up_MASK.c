
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_ethport {int dummy; } ;
typedef enum bna_ethport_event { ____Placeholder_bna_ethport_event } bna_ethport_event ;





 int FUNC_0 (struct bna_ethport*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bna_ethport*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct bna_ethport *VAR_3,
   enum bna_ethport_event VAR_4)
{
 switch (VAR_4) {
 case 128:
  FUNC_0(VAR_3, VAR_1);
  FUNC_2(VAR_3);
  break;

 case 129:
  FUNC_0(VAR_3, VAR_2);
  break;

 case 130:
  FUNC_0(VAR_3, VAR_0);
  FUNC_2(VAR_3);
  break;

 default:
  FUNC_1(VAR_4);
 }
}
