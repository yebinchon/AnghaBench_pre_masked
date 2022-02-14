
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct ctlr_info {TYPE_4__* pdev; } ;
struct TYPE_6__ {int * LunAddrBytes; } ;
struct TYPE_7__ {TYPE_2__ LUN; } ;
struct TYPE_5__ {int * CDB; } ;
struct CommandList {TYPE_3__ Header; TYPE_1__ Request; } ;
struct TYPE_8__ {int dev; } ;


 int FUNC_0 (int *,char*,char*,int const*,int const*) ;

__attribute__((used)) static void FUNC_1(struct ctlr_info *VAR_0, char *VAR_1,
    struct CommandList *VAR_2)
{
 const u8 *VAR_3 = VAR_2->Request.CDB;
 const u8 *VAR_4 = VAR_2->Header.LUN.LunAddrBytes;

 FUNC_0(&VAR_0->pdev->dev, "%s: LUN:%8phN CDB:%16phN\n",
   VAR_1, VAR_4, VAR_3);
}
