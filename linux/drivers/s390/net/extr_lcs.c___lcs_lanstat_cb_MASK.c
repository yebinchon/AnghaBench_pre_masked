
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mac_addr; } ;
struct TYPE_4__ {TYPE_1__ lcs_lanstat_cmd; } ;
struct lcs_cmd {TYPE_2__ cmd; } ;
struct lcs_card {int mac; } ;


 int FUNC_0 (int,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct lcs_card *VAR_2, struct lcs_cmd *VAR_3)
{
 FUNC_0(2, VAR_1, "statcb");
 FUNC_1(VAR_2->mac, VAR_3->cmd.lcs_lanstat_cmd.mac_addr, VAR_0);
}
