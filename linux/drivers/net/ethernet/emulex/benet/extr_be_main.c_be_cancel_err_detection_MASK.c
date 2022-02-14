
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_error_recovery {int err_detection_work; } ;
struct be_adapter {int flags; struct be_error_recovery error_recovery; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct be_adapter *VAR_2)
{
 struct be_error_recovery *VAR_3 = &VAR_2->error_recovery;

 if (!VAR_1)
  return;

 if (VAR_2->flags & VAR_0) {
  FUNC_0(&VAR_3->err_detection_work);
  VAR_2->flags &= ~VAR_0;
 }
}
