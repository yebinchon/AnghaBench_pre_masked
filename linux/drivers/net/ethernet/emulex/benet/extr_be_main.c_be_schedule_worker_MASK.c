
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_adapter {int flags; int work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct be_adapter *VAR_2)
{
 FUNC_1(VAR_1, &VAR_2->work, FUNC_0(1000));
 VAR_2->flags |= VAR_0;
}
