
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct domain_device {int sas_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__* FUNC_1 (int ) ;
 scalar_t__* FUNC_2 (int ) ;
 int FUNC_3 (struct domain_device*,scalar_t__*) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (char*,int ,scalar_t__) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (struct domain_device*,scalar_t__*,int ,scalar_t__*,int ) ;

__attribute__((used)) static int FUNC_8(struct domain_device *VAR_5)
{
 u8 *VAR_6;
 u8 *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_1(VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_2);
 if (!VAR_7) {
  FUNC_4(VAR_6);
  return -VAR_0;
 }

 VAR_6[1] = VAR_3;

 VAR_8 = FUNC_7(VAR_5, VAR_6, VAR_1, VAR_7,VAR_2);
 if (VAR_8) {
  FUNC_6("MI: ex %016llx failed:0x%x\n",
     FUNC_0(VAR_5->sas_addr), VAR_8);
  goto out;
 } else if (VAR_7[2] != VAR_4) {
  FUNC_5("MI ex %016llx returned SMP result:0x%x\n",
    FUNC_0(VAR_5->sas_addr), VAR_7[2]);
  goto out;
 }

 FUNC_3(VAR_5, VAR_7);
out:
 FUNC_4(VAR_6);
 FUNC_4(VAR_7);
 return VAR_8;
}
