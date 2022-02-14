
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_ioceth {int ioc; } ;
typedef enum bna_ioceth_event { ____Placeholder_bna_ioceth_event } bna_ioceth_event ;






 int FUNC_0 (struct bna_ioceth*,void (*) (struct bna_ioceth*,int)) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 void FUNC_3 (struct bna_ioceth*,int) ;
 void FUNC_4 (struct bna_ioceth*,int) ;
 int FUNC_5 (struct bna_ioceth*) ;
 int FUNC_6 (struct bna_ioceth*) ;

__attribute__((used)) static void
FUNC_7(struct bna_ioceth *VAR_0,
   enum bna_ioceth_event VAR_1)
{
 switch (VAR_1) {
 case 130:
  FUNC_0(VAR_0, FUNC_4);
  FUNC_1(&VAR_0->ioc);
  break;

 case 131:
  FUNC_0(VAR_0, FUNC_7);
  break;

 case 128:
  FUNC_6(VAR_0);
  break;

 case 129:
  FUNC_5(VAR_0);
  FUNC_0(VAR_0, FUNC_3);
  break;

 default:
  FUNC_2(VAR_1);
 }
}
