
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_enet {int dummy; } ;
typedef enum bna_enet_event { ____Placeholder_bna_enet_event } bna_enet_event ;






 int FUNC_0 (struct bna_enet*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bna_enet*) ;
 int FUNC_3 (struct bna_enet*) ;
 int FUNC_4 (struct bna_enet*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(struct bna_enet *VAR_3,
   enum bna_enet_event VAR_4)
{
 switch (VAR_4) {
 case 128:
  FUNC_0(VAR_3, VAR_1);
  break;

 case 131:
  FUNC_0(VAR_3, VAR_2);
  FUNC_3(VAR_3);
  break;

 case 129:
  FUNC_0(VAR_3, VAR_0);
  FUNC_2(VAR_3);
  break;

 case 130:
  FUNC_0(VAR_3, VAR_0);
  FUNC_4(VAR_3);
  break;

 default:
  FUNC_1(VAR_4);
 }
}
