
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int fw_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct lbs_private*,int,int *,int *) ;
 int FUNC_2 (int ,int,char const*,int ,int ,struct lbs_private*,void (*) (struct firmware const*,void*)) ;

__attribute__((used)) static void FUNC_3(struct lbs_private *VAR_2, const char *VAR_3,
 void (*VAR_4)(const struct firmware *VAR_5, void *VAR_6))
{
 int VAR_7;

 FUNC_0("Requesting %s\n", VAR_3);
 VAR_7 = FUNC_2(VAR_1, 1, VAR_3,
   VAR_2->fw_device, VAR_0, VAR_2, VAR_4);
 if (VAR_7) {
  FUNC_0("request_firmware_nowait error %d\n", VAR_7);
  FUNC_1(VAR_2, VAR_7, ((void*)0), ((void*)0));
 }
}
