
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct airo_info {TYPE_1__* dev; } ;
typedef int WepKeyRid ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (struct airo_info*,int ,int *,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct airo_info *VAR_3, WepKeyRid *VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;
 VAR_7 = FUNC_0(VAR_3, VAR_1, VAR_4, sizeof(*VAR_4), VAR_6);
 if (VAR_7!=VAR_2)
  FUNC_1(VAR_3->dev->name, "WEP_TEMP set %x", VAR_7);
 if (VAR_5) {
  VAR_7 = FUNC_0(VAR_3, VAR_0, VAR_4, sizeof(*VAR_4), VAR_6);
  if (VAR_7!=VAR_2)
   FUNC_1(VAR_3->dev->name, "WEP_PERM set %x", VAR_7);
 }
 return VAR_7;
}
