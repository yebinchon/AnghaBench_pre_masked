
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rio_mport {int host_deviceid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct rio_mport*,int ,int ,int ,int*) ;
 int FUNC_2 (struct rio_mport*,int ,int ,int ,int ) ;

int FUNC_3(struct rio_mport *VAR_2, u16 VAR_3, u8 VAR_4)
{
 u32 VAR_5;


 FUNC_2(VAR_2, VAR_3,
      VAR_4,
      VAR_1,
      VAR_2->host_deviceid);
 FUNC_1(VAR_2, VAR_3, VAR_4,
  VAR_1, &VAR_5);
 if ((VAR_5 & 0xffff) != 0xffff) {
  FUNC_0("RIO: badness when releasing device lock %x:%x\n",
    VAR_3, VAR_4);
  return -VAR_0;
 }

 return 0;
}
