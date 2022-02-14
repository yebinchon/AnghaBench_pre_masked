
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct _adapter {int cmd_thread; TYPE_1__* pnetdev; } ;
struct TYPE_2__ {int name; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct _adapter*,char*,int ) ;
 int VAR_2 ;

__attribute__((used)) static u32 FUNC_2(struct _adapter *VAR_3)
{
 VAR_3->cmd_thread = FUNC_1(VAR_2, VAR_3, "%s",
       VAR_3->pnetdev->name);
 if (FUNC_0(VAR_3->cmd_thread))
  return VAR_0;
 return VAR_1;
}
