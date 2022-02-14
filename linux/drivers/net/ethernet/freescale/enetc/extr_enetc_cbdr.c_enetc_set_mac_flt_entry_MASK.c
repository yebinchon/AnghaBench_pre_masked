
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct enetc_si {int dummy; } ;
struct enetc_cbd {int cls; void** addr; void** opt; int index; int status_flags; } ;
typedef int cbd ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct enetc_si*,struct enetc_cbd*) ;
 int FUNC_4 (struct enetc_cbd*,int ,int) ;

int FUNC_5(struct enetc_si *VAR_1, int VAR_2,
       char *VAR_3, int VAR_4)
{
 struct enetc_cbd VAR_5;
 u32 VAR_6;
 u16 VAR_7;

 FUNC_4(&VAR_5, 0, sizeof(VAR_5));


 VAR_5.cls = 1;
 VAR_5.status_flags = VAR_0;
 VAR_5.index = FUNC_1(VAR_2);
 VAR_5.opt[3] = FUNC_2(VAR_4);

 VAR_5.opt[0] = FUNC_2(FUNC_0(31));

 VAR_6 = *(const u32 *)VAR_3;
 VAR_7 = *(const u16 *)(VAR_3 + 4);
 VAR_5.addr[0] = FUNC_2(VAR_6);
 VAR_5.addr[1] = FUNC_2(VAR_7);

 return FUNC_3(VAR_1, &VAR_5);
}
