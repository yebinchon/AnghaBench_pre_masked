
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct typec_altmode {int dummy; } ;
struct TYPE_2__ {int conf; int status; } ;
struct dp_altmode {scalar_t__ state; int lock; int work; TYPE_1__ data; } ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (struct dp_altmode*) ;
 int FUNC_3 (struct dp_altmode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct dp_altmode* FUNC_7 (struct typec_altmode*) ;

__attribute__((used)) static int FUNC_8(struct typec_altmode *VAR_3,
     const u32 VAR_4, const u32 *VAR_5, int VAR_6)
{
 struct dp_altmode *VAR_7 = FUNC_7(VAR_3);
 int VAR_8 = FUNC_1(VAR_4);
 int VAR_9 = FUNC_0(VAR_4);
 int VAR_10 = 0;

 FUNC_4(&VAR_7->lock);

 if (VAR_7->state != VAR_0) {
  VAR_10 = -VAR_2;
  goto err_unlock;
 }

 switch (VAR_8) {
 case 133:
  switch (VAR_9) {
  case 131:
   VAR_7->state = VAR_1;
   break;
  case 130:
   VAR_7->data.status = 0;
   VAR_7->data.conf = 0;
   break;
  case 128:
   VAR_7->data.status = *VAR_5;
   VAR_10 = FUNC_3(VAR_7);
   break;
  case 129:
   VAR_10 = FUNC_2(VAR_7);
   break;
  default:
   break;
  }
  break;
 case 132:
  switch (VAR_9) {
  case 129:
   VAR_7->data.conf = 0;
   VAR_10 = FUNC_2(VAR_7);
   break;
  default:
   break;
  }
  break;
 default:
  break;
 }

 if (VAR_7->state != VAR_0)
  FUNC_6(&VAR_7->work);

err_unlock:
 FUNC_5(&VAR_7->lock);
 return VAR_10;
}
