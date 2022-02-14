
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zcrypt_queue {int dummy; } ;
struct ap_queue {struct zcrypt_queue* private; } ;
struct ap_device {int device; } ;


 struct ap_queue* FUNC_0 (int *) ;
 int FUNC_1 (struct zcrypt_queue*) ;

__attribute__((used)) static void FUNC_2(struct ap_device *VAR_0)
{
 struct ap_queue *VAR_1 = FUNC_0(&VAR_0->device);
 struct zcrypt_queue *VAR_2 = VAR_1->private;

 if (VAR_2)
  FUNC_1(VAR_2);
}
