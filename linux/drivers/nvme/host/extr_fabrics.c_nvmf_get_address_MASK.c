
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_ctrl {TYPE_1__* opts; } ;
struct TYPE_2__ {int mask; char* traddr; char* trsvcid; char* host_traddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int,char*,...) ;

int FUNC_1(struct nvme_ctrl *VAR_3, char *VAR_4, int VAR_5)
{
 int VAR_6 = 0;

 if (VAR_3->opts->mask & VAR_1)
  VAR_6 += FUNC_0(VAR_4, VAR_5, "traddr=%s", VAR_3->opts->traddr);
 if (VAR_3->opts->mask & VAR_2)
  VAR_6 += FUNC_0(VAR_4 + VAR_6, VAR_5 - VAR_6, "%strsvcid=%s",
    (VAR_6) ? "," : "", VAR_3->opts->trsvcid);
 if (VAR_3->opts->mask & VAR_0)
  VAR_6 += FUNC_0(VAR_4 + VAR_6, VAR_5 - VAR_6, "%shost_traddr=%s",
    (VAR_6) ? "," : "", VAR_3->opts->host_traddr);
 VAR_6 += FUNC_0(VAR_4 + VAR_6, VAR_5 - VAR_6, "\n");

 return VAR_6;
}
