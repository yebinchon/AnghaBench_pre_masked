
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnxt {int flags; int nr_vnics; int dev; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt*,int,int) ;
 int FUNC_1 (int ,char*,int,int) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct bnxt *VAR_2, bool VAR_3)
{
 int VAR_4, VAR_5;
 u32 VAR_6 = 0;

 if (VAR_3)
  VAR_6 = VAR_2->flags & VAR_0;
 else if (FUNC_2(VAR_1, &VAR_2->state))
  return 0;
 for (VAR_5 = 0; VAR_5 < VAR_2->nr_vnics; VAR_5++) {
  VAR_4 = FUNC_0(VAR_2, VAR_5, VAR_6);
  if (VAR_4) {
   FUNC_1(VAR_2->dev, "hwrm vnic set tpa failure rc for vnic %d: %x\n",
       VAR_5, VAR_4);
   return VAR_4;
  }
 }
 return 0;
}
