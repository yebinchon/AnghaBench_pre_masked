
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct snic_req_info {scalar_t__ start_time; } ;
struct TYPE_3__ {int max_time; } ;
struct TYPE_4__ {TYPE_1__ io; } ;
struct snic {TYPE_2__ s_stats; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ VAR_0 ;

void
FUNC_2(struct snic *VAR_1, struct snic_req_info *VAR_2)
{
 u64 VAR_3;

 VAR_3 = VAR_0 - VAR_2->start_time;

 if (VAR_3 > FUNC_0(&VAR_1->s_stats.io.max_time))
  FUNC_1(&VAR_1->s_stats.io.max_time, VAR_3);
}
