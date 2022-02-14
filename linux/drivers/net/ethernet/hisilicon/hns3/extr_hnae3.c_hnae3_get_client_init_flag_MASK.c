
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae3_client {int type; } ;
struct hnae3_ae_dev {int flag; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hnae3_client *VAR_2,
          struct hnae3_ae_dev *VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_2->type) {
 case 129:
  VAR_4 = FUNC_0(VAR_3->flag,
           VAR_0);
  break;
 case 128:
  VAR_4 = FUNC_0(VAR_3->flag,
           VAR_1);
  break;
 default:
  break;
 }

 return VAR_4;
}
