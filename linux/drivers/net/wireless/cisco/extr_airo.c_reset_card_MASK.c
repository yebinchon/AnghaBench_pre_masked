
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct airo_info* ml_priv; } ;
struct airo_info {int sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct airo_info*,int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct airo_info*) ;

__attribute__((used)) static int FUNC_5( struct net_device *VAR_2 , int VAR_3) {
 struct airo_info *VAR_4 = VAR_2->ml_priv;

 if (VAR_3 && FUNC_1(&VAR_4->sem))
  return -1;
 FUNC_4 (VAR_4);
 FUNC_0(VAR_4,VAR_1,VAR_0);
 FUNC_2(200);
 FUNC_4 (VAR_4);
 FUNC_2(200);
 if (VAR_3)
  FUNC_3(&VAR_4->sem);
 return 0;
}
