
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_ethport {int dummy; } ;
typedef enum bna_ethport_event { ____Placeholder_bna_ethport_event } bna_ethport_event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int FUNC_0 (struct bna_ethport*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bna_ethport*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct bna_ethport*,int ) ;

__attribute__((used)) static void
FUNC_4(struct bna_ethport *VAR_8,
   enum bna_ethport_event VAR_9)
{
 switch (VAR_9) {
 case 128:
  FUNC_0(VAR_8, VAR_5);
  break;

 case 132:
  FUNC_3(VAR_8, VAR_0);
  FUNC_0(VAR_8, VAR_6);
  break;

 case 133:
  FUNC_3(VAR_8, VAR_1);
  FUNC_0(VAR_8, VAR_4);
  break;

 case 129:
  FUNC_3(VAR_8, VAR_2);
  FUNC_0(VAR_8, VAR_7);
  break;

 case 130:
  FUNC_3(VAR_8, VAR_0);
  FUNC_0(VAR_8, VAR_3);
  break;

 case 131:

  FUNC_2(VAR_8);
  break;

 default:
  FUNC_1(VAR_9);
 }
}
