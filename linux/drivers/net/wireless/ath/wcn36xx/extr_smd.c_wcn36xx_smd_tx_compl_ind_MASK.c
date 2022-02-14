
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_hal_tx_compl_ind_msg {int status; } ;
struct wcn36xx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wcn36xx*,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct wcn36xx *VAR_1, void *VAR_2, size_t VAR_3)
{
 struct wcn36xx_hal_tx_compl_ind_msg *VAR_4 = VAR_2;

 if (VAR_3 != sizeof(*VAR_4)) {
  FUNC_1("Bad TX complete indication\n");
  return -VAR_0;
 }

 FUNC_0(VAR_1, VAR_4->status);

 return 0;
}
