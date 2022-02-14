
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enetc_si {int dummy; } ;
struct enetc_cbd {int cls; int index; int status_flags; } ;
typedef int cbd ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct enetc_si*,struct enetc_cbd*) ;
 int FUNC_2 (struct enetc_cbd*,int ,int) ;

int FUNC_3(struct enetc_si *VAR_1, int VAR_2)
{
 struct enetc_cbd VAR_3;

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.cls = 1;
 VAR_3.status_flags = VAR_0;
 VAR_3.index = FUNC_0(VAR_2);

 return FUNC_1(VAR_1, &VAR_3);
}
