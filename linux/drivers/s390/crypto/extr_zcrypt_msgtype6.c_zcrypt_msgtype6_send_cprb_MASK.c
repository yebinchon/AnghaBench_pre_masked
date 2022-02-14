
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zcrypt_queue {int queue; } ;
struct response_type {int work; } ;
struct ica_xcRB {int dummy; } ;
struct ap_message {int rc; scalar_t__ private; } ;


 int FUNC_0 (int ,struct ap_message*) ;
 int FUNC_1 (int ,struct ap_message*) ;
 int FUNC_2 (struct zcrypt_queue*,struct ap_message*,struct ica_xcRB*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static long FUNC_5(struct zcrypt_queue *VAR_0,
        struct ica_xcRB *VAR_1,
        struct ap_message *VAR_2)
{
 int VAR_3;
 struct response_type *VAR_4 = (struct response_type *)(VAR_2->private);

 FUNC_3(&VAR_4->work);
 FUNC_1(VAR_0->queue, VAR_2);
 VAR_3 = FUNC_4(&VAR_4->work);
 if (VAR_3 == 0) {
  VAR_3 = VAR_2->rc;
  if (VAR_3 == 0)
   VAR_3 = FUNC_2(VAR_0, VAR_2, VAR_1);
 } else

  FUNC_0(VAR_0->queue, VAR_2);

 return VAR_3;
}
