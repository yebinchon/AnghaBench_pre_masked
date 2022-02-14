
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char*,unsigned int) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,char*,char*,char*) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_2)
{
 int VAR_3;
 char VAR_4[16], VAR_5[16];

 FUNC_1(VAR_4, "cpu/%u", VAR_2);
 VAR_3 = FUNC_4(VAR_1, VAR_4, "availability", "%15s", VAR_5);
 if (VAR_3 != 1) {
  if (!FUNC_3())
   FUNC_0("Unable to read cpu state\n");
  return VAR_3;
 }

 if (FUNC_2(VAR_5, "online") == 0)
  return 1;
 else if (FUNC_2(VAR_5, "offline") == 0)
  return 0;

 FUNC_0("unknown state(%s) on CPU%d\n", VAR_5, VAR_2);
 return -VAR_0;
}
