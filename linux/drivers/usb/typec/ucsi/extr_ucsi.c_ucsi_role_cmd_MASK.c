
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ucsi_control {int dummy; } ;
struct ucsi_connector {TYPE_1__* ucsi; } ;
struct TYPE_3__ {int ppm_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct ucsi_control,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ucsi_connector*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,struct ucsi_control*,int *,int ) ;

__attribute__((used)) static int FUNC_6(struct ucsi_connector *VAR_2, struct ucsi_control *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_5(VAR_2->ucsi, VAR_3, ((void*)0), 0);
 if (VAR_4 == -VAR_0) {
  struct ucsi_control VAR_5;


  FUNC_1(&VAR_2->ucsi->ppm_lock);
  FUNC_4(VAR_2->ucsi);
  FUNC_2(&VAR_2->ucsi->ppm_lock);

  FUNC_0(VAR_5, VAR_1);
  FUNC_5(VAR_2->ucsi, &VAR_5, ((void*)0), 0);

  FUNC_3(VAR_2, 1);
 }

 return VAR_4;
}
