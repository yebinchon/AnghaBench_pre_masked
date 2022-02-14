
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snic {int * stats_host; int * reset_stats_file; int * stats_file; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct snic *VAR_0)
{
 FUNC_0(VAR_0->stats_file);
 VAR_0->stats_file = ((void*)0);

 FUNC_0(VAR_0->reset_stats_file);
 VAR_0->reset_stats_file = ((void*)0);

 FUNC_0(VAR_0->stats_host);
 VAR_0->stats_host = ((void*)0);
}
