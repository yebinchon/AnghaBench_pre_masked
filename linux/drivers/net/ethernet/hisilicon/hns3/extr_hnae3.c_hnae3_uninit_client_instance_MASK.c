
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hnae3_client {int type; } ;
struct hnae3_ae_dev {TYPE_1__* ops; int flag; } ;
struct TYPE_2__ {int (* uninit_client_instance ) (struct hnae3_client*,struct hnae3_ae_dev*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct hnae3_client*,struct hnae3_ae_dev*) ;
 int FUNC_3 (struct hnae3_client*,struct hnae3_ae_dev*,int ) ;
 int FUNC_4 (struct hnae3_client*,struct hnae3_ae_dev*) ;

__attribute__((used)) static void FUNC_5(struct hnae3_client *VAR_1,
      struct hnae3_ae_dev *VAR_2)
{

 if (!(FUNC_0(VAR_1->type) &&
       FUNC_1(VAR_2->flag, VAR_0)))
  return;

 if (FUNC_2(VAR_1, VAR_2)) {
  VAR_2->ops->uninit_client_instance(VAR_1, VAR_2);

  FUNC_3(VAR_1, VAR_2, 0);
 }
}
