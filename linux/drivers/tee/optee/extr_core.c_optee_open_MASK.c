
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tee_device {int dummy; } ;
struct tee_context {struct optee_context_data* data; struct tee_device* teedev; } ;
struct optee_context_data {int sess_list; int mutex; } ;
struct TYPE_2__ {int mutex; struct tee_context* ctx; } ;
struct optee {TYPE_1__ supp; struct tee_device* supp_teedev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct optee_context_data*) ;
 struct optee_context_data* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct optee* FUNC_6 (struct tee_device*) ;

__attribute__((used)) static int FUNC_7(struct tee_context *VAR_3)
{
 struct optee_context_data *VAR_4;
 struct tee_device *VAR_5 = VAR_3->teedev;
 struct optee *VAR_6 = FUNC_6(VAR_5);

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_2);
 if (!VAR_4)
  return -VAR_1;

 if (VAR_5 == VAR_6->supp_teedev) {
  bool VAR_7 = 1;

  FUNC_4(&VAR_6->supp.mutex);
  if (!VAR_6->supp.ctx) {
   VAR_7 = 0;
   VAR_6->supp.ctx = VAR_3;
  }
  FUNC_5(&VAR_6->supp.mutex);
  if (VAR_7) {
   FUNC_1(VAR_4);
   return -VAR_0;
  }
 }

 FUNC_3(&VAR_4->mutex);
 FUNC_0(&VAR_4->sess_list);

 VAR_3->data = VAR_4;
 return 0;
}
