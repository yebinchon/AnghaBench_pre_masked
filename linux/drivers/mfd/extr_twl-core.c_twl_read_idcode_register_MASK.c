
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int twl_idcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int *,int ,int) ;
 int FUNC_2 (int ,int,int ) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_3,
      VAR_1);
 if (VAR_5) {
  FUNC_0("TWL4030 Unable to unlock IDCODE registers -%d\n", VAR_5);
  goto fail;
 }

 VAR_5 = FUNC_1(VAR_2, (u8 *)(&VAR_4->twl_idcode),
      VAR_0, 4);
 if (VAR_5) {
  FUNC_0("TWL4030: unable to read IDCODE -%d\n", VAR_5);
  goto fail;
 }

 VAR_5 = FUNC_2(VAR_2, 0x0, VAR_1);
 if (VAR_5)
  FUNC_0("TWL4030 Unable to relock IDCODE registers -%d\n", VAR_5);
fail:
 return VAR_5;
}
