
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hnae3_handle {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void FUNC_5(struct hnae3_handle *VAR_1)
{


 char VAR_2[256];

 FUNC_0(&VAR_1->pdev->dev, "available commands\n");
 FUNC_0(&VAR_1->pdev->dev, "queue info <number>\n");
 FUNC_0(&VAR_1->pdev->dev, "queue map\n");
 FUNC_0(&VAR_1->pdev->dev, "bd info <q_num> <bd index>\n");

 if (!FUNC_1(VAR_1->pdev))
  return;

 FUNC_0(&VAR_1->pdev->dev, "dump fd tcam\n");
 FUNC_0(&VAR_1->pdev->dev, "dump tc\n");
 FUNC_0(&VAR_1->pdev->dev, "dump tm map <q_num>\n");
 FUNC_0(&VAR_1->pdev->dev, "dump tm\n");
 FUNC_0(&VAR_1->pdev->dev, "dump qos pause cfg\n");
 FUNC_0(&VAR_1->pdev->dev, "dump qos pri map\n");
 FUNC_0(&VAR_1->pdev->dev, "dump qos buf cfg\n");
 FUNC_0(&VAR_1->pdev->dev, "dump mng tbl\n");
 FUNC_0(&VAR_1->pdev->dev, "dump reset info\n");
 FUNC_0(&VAR_1->pdev->dev, "dump m7 info\n");
 FUNC_0(&VAR_1->pdev->dev, "dump ncl_config <offset> <length>(in hex)\n");
 FUNC_0(&VAR_1->pdev->dev, "dump mac tnl status\n");

 FUNC_2(VAR_2, 0, 256);
 FUNC_4(VAR_2, "dump reg [[bios common] [ssu <port_id>]",
  256 - 1);
 FUNC_4(VAR_2 + FUNC_3(VAR_2),
  " [igu egu <port_id>] [rpu <tc_queue_num>]",
  256 - FUNC_3(VAR_2) - 1);
 FUNC_4(VAR_2 + FUNC_3(VAR_2),
  " [rtc] [ppp] [rcb] [tqp <queue_num>]]\n",
  256 - FUNC_3(VAR_2) - 1);
 FUNC_0(&VAR_1->pdev->dev, "%s", VAR_2);

 FUNC_2(VAR_2, 0, 256);
 FUNC_4(VAR_2, "dump reg dcb <port_id> <pri_id> <pg_id>",
  256 - 1);
 FUNC_4(VAR_2 + FUNC_3(VAR_2), " <rq_id> <nq_id> <qset_id>\n",
  256 - FUNC_3(VAR_2) - 1);
 FUNC_0(&VAR_1->pdev->dev, "%s", VAR_2);
}
