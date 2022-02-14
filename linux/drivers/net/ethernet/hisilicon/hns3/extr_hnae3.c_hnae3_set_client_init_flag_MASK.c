
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae3_client {int type; } ;
struct hnae3_ae_dev {int flag; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int) ;

void FUNC_1(struct hnae3_client *VAR_2,
    struct hnae3_ae_dev *VAR_3,
    unsigned int VAR_4)
{
 if (!VAR_2 || !VAR_3)
  return;

 switch (VAR_2->type) {
 case 129:
  FUNC_0(VAR_3->flag, VAR_0, VAR_4);
  break;
 case 128:
  FUNC_0(VAR_3->flag, VAR_1, VAR_4);
  break;
 default:
  break;
 }
}
