
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct rio_mport {scalar_t__ host_deviceid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct rio_mport*,int ,int ,int ,scalar_t__*) ;
 int FUNC_3 (struct rio_mport*,int ,int ,int ,scalar_t__) ;

int FUNC_4(struct rio_mport *VAR_2, u16 VAR_3,
      u8 VAR_4, int VAR_5)
{
 u32 VAR_6;
 int VAR_7 = 0;


 FUNC_3(VAR_2, VAR_3, VAR_4,
      VAR_1, VAR_2->host_deviceid);
 FUNC_2(VAR_2, VAR_3, VAR_4,
     VAR_1, &VAR_6);

 while (VAR_6 != VAR_2->host_deviceid) {
  if (VAR_5 != 0 && VAR_7 == VAR_5) {
   FUNC_1("RIO: timeout when locking device %x:%x\n",
    VAR_3, VAR_4);
   return -VAR_0;
  }


  FUNC_0(1);
  VAR_7++;

  FUNC_3(VAR_2, VAR_3,
   VAR_4,
   VAR_1,
   VAR_2->host_deviceid);
  FUNC_2(VAR_2, VAR_3,
   VAR_4,
   VAR_1, &VAR_6);
 }

 return 0;
}
