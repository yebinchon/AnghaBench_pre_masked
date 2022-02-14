
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int portno; int lan_type; } ;
struct TYPE_4__ {TYPE_1__ lcs_std_cmd; } ;
struct lcs_cmd {TYPE_2__ cmd; } ;
struct lcs_card {int portno; int lan_type; } ;


 int FUNC_0 (int,int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct lcs_card *VAR_1, struct lcs_cmd *VAR_2)
{
 FUNC_0(2, VAR_0, "srtlancb");
 VAR_1->lan_type = VAR_2->cmd.lcs_std_cmd.lan_type;
 VAR_1->portno = VAR_2->cmd.lcs_std_cmd.portno;
}
