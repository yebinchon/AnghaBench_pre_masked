
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_enet {int flags; } ;
typedef enum bna_enet_event { ____Placeholder_bna_enet_event } bna_enet_event ;


 int VAR_0 ;





 int FUNC_0 (struct bna_enet*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bna_enet*) ;
 int FUNC_3 (struct bna_enet*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(struct bna_enet *VAR_4,
    enum bna_enet_event VAR_5)
{
 switch (VAR_5) {
 case 128:
  VAR_4->flags &= ~VAR_0;
  FUNC_0(VAR_4, VAR_1);
  break;

 case 132:
  VAR_4->flags &= ~VAR_0;
  FUNC_0(VAR_4, VAR_3);
  break;

 case 129:
  VAR_4->flags |= VAR_0;
  break;

 case 130:

  break;

 case 131:
  if (VAR_4->flags & VAR_0) {
   VAR_4->flags &= ~VAR_0;
   FUNC_2(VAR_4);
  } else {
   FUNC_0(VAR_4, VAR_2);
   FUNC_3(VAR_4);
  }
  break;

 default:
  FUNC_1(VAR_5);
 }
}
