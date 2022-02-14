
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct esas2r_adapter {int flags2; } ;


 int VAR_0 ;
 struct esas2r_adapter* VAR_1 ;
 int FUNC_0 (struct esas2r_adapter*) ;
 int FUNC_1 (struct esas2r_adapter*) ;
 struct esas2r_adapter* FUNC_2 (int ,struct timer_list*,int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_3)
{
 struct esas2r_adapter *VAR_4 = FUNC_2(VAR_4, VAR_3, VAR_2);

 FUNC_3(VAR_0, &VAR_4->flags2);

 FUNC_1(VAR_4);

 FUNC_0(VAR_4);
}
