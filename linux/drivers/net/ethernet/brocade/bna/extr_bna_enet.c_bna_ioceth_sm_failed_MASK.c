
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_ioceth {int ioc; } ;
typedef enum bna_ioceth_event { ____Placeholder_bna_ioceth_event } bna_ioceth_event ;





 int FUNC_0 (struct bna_ioceth*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct bna_ioceth*) ;

__attribute__((used)) static void
FUNC_4(struct bna_ioceth *VAR_2,
   enum bna_ioceth_event VAR_3)
{
 switch (VAR_3) {
 case 130:
  FUNC_0(VAR_2, VAR_0);
  FUNC_1(&VAR_2->ioc);
  break;

 case 128:
  FUNC_3(VAR_2);
  FUNC_0(VAR_2, VAR_1);
  break;

 case 129:
  break;

 default:
  FUNC_2(VAR_3);
 }
}
