
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct qeth_card {int state; TYPE_1__ qdio; } ;


 int FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 int FUNC_1 (struct qeth_card*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct qeth_card*,int,char*) ;
 int FUNC_3 (struct qeth_card*,int,char*,int) ;
 int VAR_3 ;


 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct qeth_card*,int) ;

int FUNC_8(struct qeth_card *VAR_4, int VAR_5)
{
 int VAR_6 = 0;

 FUNC_2(VAR_4, 3, "qdioclr");
 switch (FUNC_4(&VAR_4->qdio.state, 128,
  129)) {
 case 128:
  if (FUNC_1(VAR_4))
   VAR_6 = FUNC_6(FUNC_0(VAR_4),
    VAR_2);
  else
   VAR_6 = FUNC_6(FUNC_0(VAR_4),
    VAR_1);
  if (VAR_6)
   FUNC_3(VAR_4, 3, "1err%d", VAR_6);
  FUNC_5(&VAR_4->qdio.state, VAR_3);
  break;
 case 129:
  return VAR_6;
 default:
  break;
 }
 VAR_6 = FUNC_7(VAR_4, VAR_5);
 if (VAR_6)
  FUNC_3(VAR_4, 3, "2err%d", VAR_6);
 VAR_4->state = VAR_0;
 return VAR_6;
}
