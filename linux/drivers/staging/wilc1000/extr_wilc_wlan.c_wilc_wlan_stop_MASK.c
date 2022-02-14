
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wilc_vif {int ndev; } ;
struct wilc {TYPE_1__* hif_func; } ;
struct TYPE_2__ {int (* hif_read_reg ) (struct wilc*,int ,int*) ;int (* hif_write_reg ) (struct wilc*,int ,int) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct wilc*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wilc*,int ) ;
 int FUNC_4 (struct wilc*,int ,int*) ;
 int FUNC_5 (struct wilc*,int ,int) ;
 int FUNC_6 (struct wilc*,int ,int*) ;
 int FUNC_7 (struct wilc*,int ,int) ;

int FUNC_8(struct wilc *VAR_6, struct wilc_vif *VAR_7)
{
 u32 VAR_8 = 0;
 int VAR_9;

 FUNC_1(VAR_6, VAR_2);

 VAR_9 = VAR_6->hif_func->hif_read_reg(VAR_6, VAR_5, &VAR_8);
 if (!VAR_9) {
  FUNC_2(VAR_7->ndev, "Error while reading reg\n");
  FUNC_3(VAR_6, VAR_3);
  return -VAR_0;
 }

 VAR_9 = VAR_6->hif_func->hif_write_reg(VAR_6, VAR_5,
     (VAR_8 | VAR_1));
 if (!VAR_9) {
  FUNC_2(VAR_7->ndev, "Error while writing reg\n");
  FUNC_3(VAR_6, VAR_3);
  return -VAR_0;
 }

 VAR_9 = VAR_6->hif_func->hif_read_reg(VAR_6, VAR_4, &VAR_8);
 if (!VAR_9) {
  FUNC_2(VAR_7->ndev, "Error while reading reg\n");
  FUNC_3(VAR_6, VAR_3);
  return -VAR_0;
 }
 VAR_8 = FUNC_0(0);

 VAR_9 = VAR_6->hif_func->hif_write_reg(VAR_6, VAR_4, VAR_8);
 if (!VAR_9) {
  FUNC_2(VAR_7->ndev, "Error while writing reg\n");
  FUNC_3(VAR_6, VAR_3);
  return -VAR_0;
 }

 FUNC_3(VAR_6, VAR_3);

 return 0;
}
