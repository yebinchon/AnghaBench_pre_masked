
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
struct nfp_alink_xstats {int dummy; } ;
struct nfp_alink_stats {void* backlog_bytes; void* backlog_pkts; } ;
struct nfp_abm_link {TYPE_2__* abm; } ;
struct TYPE_4__ {TYPE_1__* app; } ;
struct TYPE_3__ {int cpp; } ;


 int FUNC_0 (struct nfp_abm_link*,unsigned int,unsigned int,struct nfp_alink_stats*) ;
 int FUNC_1 (struct nfp_abm_link*,unsigned int,unsigned int,struct nfp_alink_xstats*) ;
 int FUNC_2 (int ,char*,unsigned int,unsigned int,int) ;

__attribute__((used)) static int
FUNC_3(struct nfp_abm_link *VAR_0, unsigned int VAR_1,
       unsigned int VAR_2, struct nfp_alink_stats *VAR_3,
       struct nfp_alink_xstats *VAR_4)
{
 u64 VAR_5, VAR_6;
 int VAR_7;




 VAR_5 = VAR_3->backlog_pkts;
 VAR_6 = VAR_3->backlog_bytes;

 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_7) {
  FUNC_2(VAR_0->abm->app->cpp,
   "RED stats init (%d, %d) failed with error %d\n",
   VAR_1, VAR_2, VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4);
 if (VAR_7) {
  FUNC_2(VAR_0->abm->app->cpp,
   "RED xstats init (%d, %d) failed with error %d\n",
   VAR_1, VAR_2, VAR_7);
  return VAR_7;
 }

 VAR_3->backlog_pkts = VAR_5;
 VAR_3->backlog_bytes = VAR_6;
 return 0;
}
