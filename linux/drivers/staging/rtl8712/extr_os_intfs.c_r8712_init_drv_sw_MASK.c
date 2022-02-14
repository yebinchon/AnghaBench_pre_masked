
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct security_priv {int dummy; } ;
struct TYPE_6__ {struct _adapter* padapter; } ;
struct TYPE_4__ {int tkip_timer; } ;
struct TYPE_5__ {struct _adapter* padapter; } ;
struct _adapter {TYPE_3__ stapriv; TYPE_1__ securitypriv; int recvpriv; int xmitpriv; int evtpriv; TYPE_2__ cmdpriv; } ;


 int FUNC_0 (int *,struct _adapter*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,struct _adapter*) ;
 int FUNC_3 (struct _adapter*) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 (struct _adapter*) ;
 int FUNC_6 (struct _adapter*) ;
 int FUNC_7 (struct _adapter*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct _adapter*) ;
 int FUNC_11 (struct _adapter*) ;
 int VAR_0 ;
 int FUNC_12 (int *,int ,int ) ;

int FUNC_13(struct _adapter *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_8(&VAR_1->cmdpriv);
 if (VAR_2)
  return VAR_2;
 VAR_1->cmdpriv.padapter = VAR_1;
 VAR_2 = FUNC_9(&VAR_1->evtpriv);
 if (VAR_2)
  return VAR_2;
 VAR_2 = FUNC_10(VAR_1);
 if (VAR_2)
  return VAR_2;
 FUNC_2(&VAR_1->xmitpriv, VAR_1);
 FUNC_0(&VAR_1->recvpriv, VAR_1);
 FUNC_4((unsigned char *)&VAR_1->securitypriv, 0,
        sizeof(struct security_priv));
 FUNC_12(&VAR_1->securitypriv.tkip_timer,
      VAR_0, 0);
 VAR_2 = FUNC_1(&VAR_1->stapriv);
 if (VAR_2)
  return VAR_2;
 VAR_1->stapriv.padapter = VAR_1;
 FUNC_7(VAR_1);
 FUNC_11(VAR_1);
 FUNC_5(VAR_1);
 FUNC_3(VAR_1);
 FUNC_6(VAR_1);
 return VAR_2;
}
