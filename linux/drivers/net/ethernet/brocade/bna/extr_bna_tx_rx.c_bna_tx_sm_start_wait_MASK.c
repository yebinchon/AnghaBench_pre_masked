
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_tx {int flags; } ;
typedef enum bna_tx_event { ____Placeholder_bna_tx_event } bna_tx_event ;


 int VAR_0 ;




 int FUNC_0 (struct bna_tx*,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(struct bna_tx *VAR_5, enum bna_tx_event VAR_6)
{
 switch (VAR_6) {
 case 128:
  VAR_5->flags &= ~VAR_0;
  FUNC_0(VAR_5, VAR_3);
  break;

 case 130:
  VAR_5->flags &= ~VAR_0;
  FUNC_0(VAR_5, VAR_4);
  break;

 case 129:
  if (VAR_5->flags & VAR_0) {
   VAR_5->flags &= ~VAR_0;
   FUNC_0(VAR_5, VAR_1);
  } else
   FUNC_0(VAR_5, VAR_2);
  break;

 case 131:
  VAR_5->flags |= VAR_0;
  break;

 default:
  FUNC_1(VAR_6);
 }
}
