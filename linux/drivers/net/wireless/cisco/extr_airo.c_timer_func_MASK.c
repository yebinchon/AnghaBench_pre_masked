
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {struct airo_info* ml_priv; } ;
struct TYPE_2__ {int authType; } ;
struct airo_info {int expires; int jobs; int sem; int flags; TYPE_1__ config; int defindex; int keyindex; } ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct airo_info*,int ) ;
 int FUNC_3 (struct airo_info*,int ) ;
 int FUNC_4 (struct airo_info*,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct airo_info*,int ,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct airo_info*,int ) ;

__attribute__((used)) static void FUNC_9( struct net_device *VAR_5 ) {
 struct airo_info *VAR_6 = VAR_5->ml_priv;


 FUNC_4(VAR_6, 0);
 FUNC_2(VAR_6, 0);
 switch(VAR_6->config.authType) {
  case 129:

   VAR_6->config.authType = VAR_0;
   break;
  case 128:
   if (VAR_6->keyindex < VAR_4) {
    FUNC_6(VAR_6, VAR_6->keyindex, 0, 0);
    VAR_6->config.authType = 128;
    VAR_6->keyindex++;
   } else {

    VAR_6->keyindex = 0;
    FUNC_6(VAR_6, VAR_6->defindex, 0, 0);
    VAR_6->config.authType = 129;
   }
   break;
  default:
   VAR_6->config.authType = 128;
 }
 FUNC_5 (VAR_1, &VAR_6->flags);
 FUNC_8(VAR_6, 0);
 FUNC_3(VAR_6, 0);
 FUNC_7(&VAR_6->sem);


 FUNC_1(VAR_3, &VAR_6->jobs);
 VAR_6->expires = FUNC_0(VAR_2*3);
}
