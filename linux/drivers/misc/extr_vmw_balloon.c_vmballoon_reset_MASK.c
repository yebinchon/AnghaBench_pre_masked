
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmballoon {int capabilities; int reset_required; int conf_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vmballoon*) ;
 scalar_t__ FUNC_4 (struct vmballoon*) ;
 int FUNC_5 (struct vmballoon*) ;
 scalar_t__ FUNC_6 (struct vmballoon*) ;
 int FUNC_7 (struct vmballoon*,int ) ;
 int FUNC_8 (struct vmballoon*,int ) ;
 int FUNC_9 (struct vmballoon*) ;
 int FUNC_10 (struct vmballoon*) ;

__attribute__((used)) static void FUNC_11(struct vmballoon *VAR_4)
{
 int VAR_5;

 FUNC_0(&VAR_4->conf_sem);

 FUNC_9(VAR_4);


 FUNC_5(VAR_4);

 if (FUNC_7(VAR_4, VAR_2))
  goto unlock;

 if ((VAR_4->capabilities & VAR_1) != 0) {
  if (FUNC_4(VAR_4)) {






   FUNC_7(VAR_4, 0);
   goto unlock;
  }
 } else if ((VAR_4->capabilities & VAR_0) != 0) {
  FUNC_3(VAR_4);
 }

 FUNC_8(VAR_4, VAR_3);
 VAR_4->reset_required = 0;

 VAR_5 = FUNC_10(VAR_4);
 if (VAR_5)
  FUNC_1("failed to initialize vmci doorbell\n");

 if (FUNC_6(VAR_4))
  FUNC_1("failed to send guest ID to the host\n");

unlock:
 FUNC_2(&VAR_4->conf_sem);
}
