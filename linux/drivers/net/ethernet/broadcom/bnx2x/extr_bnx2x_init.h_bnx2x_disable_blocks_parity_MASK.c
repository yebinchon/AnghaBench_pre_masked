
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct bnx2x {int dummy; } ;
struct TYPE_3__ {int name; int mask_addr; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (struct bnx2x*,int ,scalar_t__) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_3 (struct bnx2x*,int) ;
 int FUNC_4 (struct bnx2x*,int) ;

__attribute__((used)) static inline void FUNC_5(struct bnx2x *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  u32 VAR_4 = FUNC_3(VAR_2, VAR_3);

  if (VAR_4) {
   FUNC_2(VAR_2, VAR_1[VAR_3].mask_addr,
          VAR_4);
   FUNC_1(VAR_0, "Setting parity mask "
       "for %s to\t\t0x%x\n",
        VAR_1[VAR_3].name, VAR_4);
  }
 }


 FUNC_4(VAR_2, 0);
}
