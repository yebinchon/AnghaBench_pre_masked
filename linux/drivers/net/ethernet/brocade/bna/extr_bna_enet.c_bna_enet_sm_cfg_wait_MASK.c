
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_enet {int flags; } ;
typedef enum bna_enet_event { ____Placeholder_bna_enet_event } bna_enet_event ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (struct bna_enet*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bna_enet*) ;
 int FUNC_3 (struct bna_enet*) ;
 int FUNC_4 (struct bna_enet*) ;
 int FUNC_5 (struct bna_enet*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_6(struct bna_enet *VAR_5,
   enum bna_enet_event VAR_6)
{
 switch (VAR_6) {
 case 128:
  VAR_5->flags &= ~VAR_1;
  VAR_5->flags &= ~VAR_0;
  FUNC_0(VAR_5, VAR_2);
  break;

 case 132:
  VAR_5->flags &= ~VAR_1;
  VAR_5->flags &= ~VAR_0;
  FUNC_0(VAR_5, VAR_4);
  FUNC_3(VAR_5);
  break;

 case 129:
  VAR_5->flags |= VAR_1;
  break;

 case 130:
  VAR_5->flags |= VAR_0;
  break;

 case 133:
  FUNC_4(VAR_5);

 case 131:
  if (VAR_5->flags & VAR_1) {
   VAR_5->flags &= ~VAR_1;
   FUNC_2(VAR_5);
  } else if (VAR_5->flags & VAR_0) {
   VAR_5->flags &= ~VAR_0;
   FUNC_5(VAR_5);
  } else {
   FUNC_0(VAR_5, VAR_3);
  }
  break;

 default:
  FUNC_1(VAR_6);
 }
}
