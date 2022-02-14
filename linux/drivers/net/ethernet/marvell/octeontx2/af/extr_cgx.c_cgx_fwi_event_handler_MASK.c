
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct lmac {int cmd_pend; int lmac_id; struct cgx* cgx; int wq_cmd_cmplt; int resp; } ;
struct cgx {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct lmac*) ;
 int FUNC_4 (struct cgx*,int ,int ) ;
 int FUNC_5 (struct cgx*,int ,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_7, void *VAR_8)
{
 struct lmac *VAR_9 = VAR_8;
 struct cgx *VAR_10;
 u64 VAR_11;

 VAR_10 = VAR_9->cgx;

 VAR_11 = FUNC_4(VAR_10, VAR_9->lmac_id, VAR_1);

 if (!FUNC_0(VAR_2, VAR_11))
  return VAR_6;

 switch (FUNC_0(VAR_3, VAR_11)) {
 case 128:



  VAR_9->resp = VAR_11;

  FUNC_6();




  if (FUNC_1(VAR_11))
   FUNC_3(VAR_11, VAR_9);


  VAR_9->cmd_pend = 0;
  FUNC_7(&VAR_9->wq_cmd_cmplt);
  break;
 case 129:
  if (FUNC_2(VAR_11))
   FUNC_3(VAR_11, VAR_9);
  break;
 }





 FUNC_5(VAR_9->cgx, VAR_9->lmac_id, VAR_1, 0);
 FUNC_5(VAR_9->cgx, VAR_9->lmac_id, VAR_0, VAR_4);

 return VAR_5;
}
