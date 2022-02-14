
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snic {int stats_host; void* reset_stats_file; void* stats_file; TYPE_1__* shost; } ;
typedef int name ;
struct TYPE_4__ {int stats_root; } ;
struct TYPE_3__ {int host_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 void* FUNC_1 (char*,int,int ,struct snic*,int *) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,int,char*,int) ;

void FUNC_3(struct snic *VAR_6)
{
 char VAR_7[16];

 FUNC_2(VAR_7, sizeof(VAR_7), "host%d", VAR_6->shost->host_no);

 VAR_6->stats_host = FUNC_0(VAR_7, VAR_3->stats_root);

 VAR_6->stats_file = FUNC_1("stats", VAR_0|VAR_1,
            VAR_6->stats_host, VAR_6,
            &VAR_5);

 VAR_6->reset_stats_file = FUNC_1("reset_stats",
           VAR_0|VAR_1|VAR_2,
           VAR_6->stats_host, VAR_6,
           &VAR_4);
}
