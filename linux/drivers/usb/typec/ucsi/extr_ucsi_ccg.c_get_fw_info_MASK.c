
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ucsi_ccg {int fw_version; int info; TYPE_2__* version; } ;
struct TYPE_3__ {int patch; int ver; } ;
struct TYPE_4__ {TYPE_1__ app; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t VAR_2 ;
 int FUNC_2 (struct ucsi_ccg*,int ,int *,int) ;

__attribute__((used)) static int FUNC_3(struct ucsi_ccg *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3, VAR_1, (u8 *)(&VAR_3->version),
         sizeof(VAR_3->version));
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3->fw_version = FUNC_0(VAR_3->version[VAR_2].app.ver) |
   FUNC_1(VAR_3->version[VAR_2].app.patch);

 VAR_4 = FUNC_2(VAR_3, VAR_0, (u8 *)(&VAR_3->info),
         sizeof(VAR_3->info));
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}
