
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int name; } ;


 scalar_t__ FUNC_0 (struct pvr2_hdw*,int) ;
 int FUNC_1 (char*,int ,...) ;

__attribute__((used)) static void FUNC_2(struct pvr2_hdw *VAR_0)
{
 int VAR_1;
 FUNC_1("%s: i2c scan beginning\n", VAR_0->name);
 for (VAR_1 = 0; VAR_1 < 128; VAR_1++) {
  if (FUNC_0(VAR_0, VAR_1)) {
   FUNC_1("%s: i2c scan: found device @ 0x%x\n",
          VAR_0->name, VAR_1);
  }
 }
 FUNC_1("%s: i2c scan done.\n", VAR_0->name);
}
