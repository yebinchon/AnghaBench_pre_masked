
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct be_error_recovery {int err_detection_work; } ;
struct be_adapter {int flags; struct be_error_recovery error_recovery; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct be_adapter *VAR_2, u32 VAR_3)
{
 struct be_error_recovery *VAR_4 = &VAR_2->error_recovery;

 if (!VAR_1)
  return;

 FUNC_1(VAR_1, &VAR_4->err_detection_work,
      FUNC_0(VAR_3));
 VAR_2->flags |= VAR_0;
}
