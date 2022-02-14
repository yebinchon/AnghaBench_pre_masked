
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_peer {int service; TYPE_2__* perf; int sts; } ;
typedef enum perf_cmd { ____Placeholder_perf_cmd } perf_cmd ;
struct TYPE_4__ {TYPE_1__* ntb; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;





 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct perf_peer *VAR_2, enum perf_cmd VAR_3)
{
 switch (VAR_3) {
 case 129:
 case 131:
 case 128:
 case 130:
 case 132:
  break;
 default:
  FUNC_1(&VAR_2->perf->ntb->dev, "Exec invalid command\n");
  return -VAR_0;
 }


 FUNC_3(VAR_3, &VAR_2->sts);

 FUNC_0(&VAR_2->perf->ntb->dev, "CMD exec: %d\n", VAR_3);

 (void)FUNC_2(VAR_1, &VAR_2->service);

 return 0;
}
