
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct MPT3SAS_ADAPTER {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,char*,char*) ;

u8
FUNC_2(struct MPT3SAS_ADAPTER *VAR_1,
  u8 VAR_2, void *VAR_3, int VAR_4)
{
 u8 VAR_5 = 0;

 if (!(VAR_2 & VAR_0))
  VAR_5 = 1;

 FUNC_1(VAR_1, "Command %s\n",
  VAR_5 == 0 ? "terminated due to Host Reset" : "Timeout");
 FUNC_0(VAR_3, VAR_4);

 return VAR_5;
}
