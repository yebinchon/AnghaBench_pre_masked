
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iwreq_data {int dummy; } iwreq_data ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,int,int,int) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0,
                            struct iw_request_info *VAR_1,
                            union iwreq_data *VAR_2, char *VAR_3)
{
 struct adapter *VAR_4 = (struct adapter *)FUNC_1(VAR_0);
 u32 VAR_5, VAR_6, VAR_7;


 VAR_5 = *(u32 *)VAR_3;
 VAR_6 = *((u32 *)VAR_3 + 1);
 VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6, 0xFFFFF);





 FUNC_2(VAR_3, "0x%05x", VAR_7);

 return 0;
}
