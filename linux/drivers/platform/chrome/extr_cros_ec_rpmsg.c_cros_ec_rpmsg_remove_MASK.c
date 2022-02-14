
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmsg_device {int dev; } ;
struct cros_ec_rpmsg {int host_event_work; int ept; } ;
struct cros_ec_device {struct cros_ec_rpmsg* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct cros_ec_device*) ;
 struct cros_ec_device* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct rpmsg_device *VAR_0)
{
 struct cros_ec_device *VAR_1 = FUNC_2(&VAR_0->dev);
 struct cros_ec_rpmsg *VAR_2 = VAR_1->priv;

 FUNC_1(VAR_1);
 FUNC_3(VAR_2->ept);
 FUNC_0(&VAR_2->host_event_work);
}
