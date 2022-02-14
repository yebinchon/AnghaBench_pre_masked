
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int recovery_supported; } ;
struct be_adapter {int priv_flags; int flags; TYPE_1__ error_recovery; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (struct be_adapter*) ;
 int FUNC_4 (struct be_adapter*) ;

__attribute__((used)) static int FUNC_5(struct be_adapter *VAR_3)
{
 int VAR_4;

 if (!FUNC_4(VAR_3)) {
  if (!VAR_3->error_recovery.recovery_supported ||
      VAR_3->priv_flags & VAR_0)
   return -VAR_2;
  VAR_4 = FUNC_3(VAR_3);
  if (VAR_4)
   goto err;
 }




 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  goto err;

 VAR_3->flags |= VAR_1;

 FUNC_0(VAR_3);

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  goto err;

 VAR_3->flags &= ~VAR_1;

err:
 return VAR_4;
}
