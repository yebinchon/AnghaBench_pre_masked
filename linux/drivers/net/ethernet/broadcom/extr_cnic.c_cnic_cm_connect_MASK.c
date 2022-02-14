
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cnic_sockaddr {int dummy; } ;
struct cnic_sock {int flags; TYPE_1__* dev; } ;
struct cnic_local {TYPE_2__* ethdev; } ;
struct TYPE_4__ {int drv_state; } ;
struct TYPE_3__ {struct cnic_local* cnic_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct cnic_sock*,struct cnic_sockaddr*) ;
 int FUNC_2 (struct cnic_sock*) ;
 int FUNC_3 (struct cnic_sock*) ;
 int FUNC_4 (struct cnic_sock*,struct cnic_sockaddr*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct cnic_sock *VAR_4, struct cnic_sockaddr *VAR_5)
{
 struct cnic_local *VAR_6 = VAR_4->dev->cnic_priv;
 int VAR_7 = 0;

 if (VAR_6->ethdev->drv_state & VAR_0)
  return -VAR_2;

 if (!FUNC_2(VAR_4))
  return -VAR_1;

 if (FUNC_5(VAR_3, &VAR_4->flags))
  return -VAR_1;

 FUNC_3(VAR_4);

 VAR_7 = FUNC_1(VAR_4, VAR_5);
 if (VAR_7)
  goto err_out;

 VAR_7 = FUNC_4(VAR_4, VAR_5);
 if (!VAR_7)
  return 0;

err_out:
 FUNC_0(VAR_3, &VAR_4->flags);
 return VAR_7;
}
