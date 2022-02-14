
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zcrypt_queue {int queue; TYPE_1__* zcard; } ;
struct ica_rsa_modexpo_crt {int outputdatalength; int outputdata; } ;
struct completion {int dummy; } ;
struct ap_message {int rc; void* message; struct completion* private; scalar_t__ psmid; int receive; } ;
struct TYPE_4__ {scalar_t__ pid; } ;
struct TYPE_3__ {scalar_t__ user_space_type; } ;


 long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct zcrypt_queue*,struct ap_message*,struct ica_rsa_modexpo_crt*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,struct ap_message*) ;
 int FUNC_2 (struct ap_message*) ;
 int FUNC_3 (int ,struct ap_message*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct zcrypt_queue*,struct ap_message*,int ,int ) ;
 TYPE_2__* VAR_5 ;
 int FUNC_6 (struct completion*) ;
 int FUNC_7 (void*) ;
 void* FUNC_8 (int ,int ) ;
 int FUNC_9 (struct completion*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static long FUNC_10(struct zcrypt_queue *VAR_8,
         struct ica_rsa_modexpo_crt *VAR_9)
{
 struct ap_message VAR_10;
 struct completion VAR_11;
 int VAR_12;

 FUNC_2(&VAR_10);
 if (VAR_8->zcard->user_space_type == VAR_4)
  VAR_10.message = FUNC_8(VAR_2,
      VAR_1);
 else
  VAR_10.message = FUNC_8(VAR_3,
      VAR_1);
 if (!VAR_10.message)
  return -VAR_0;
 VAR_10.receive = VAR_6;
 VAR_10.psmid = (((unsigned long long) VAR_5->pid) << 32) +
    FUNC_4(&VAR_7);
 VAR_10.private = &VAR_11;
 VAR_12 = FUNC_0(VAR_8, &VAR_10, VAR_9);
 if (VAR_12)
  goto out_free;
 FUNC_6(&VAR_11);
 FUNC_3(VAR_8->queue, &VAR_10);
 VAR_12 = FUNC_9(&VAR_11);
 if (VAR_12 == 0) {
  VAR_12 = VAR_10.rc;
  if (VAR_12 == 0)
   VAR_12 = FUNC_5(VAR_8, &VAR_10, VAR_9->outputdata,
           VAR_9->outputdatalength);
 } else

  FUNC_1(VAR_8->queue, &VAR_10);
out_free:
 FUNC_7(VAR_10.message);
 return VAR_12;
}
