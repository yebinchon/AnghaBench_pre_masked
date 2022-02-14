
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct zfcp_qdio {int req_q_full; int stat_lock; scalar_t__ req_q_util; } ;
struct zfcp_adapter {struct zfcp_qdio* qdio; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__* hostdata; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int,unsigned long long) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
           struct device_attribute *VAR_1,
           char *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_1(VAR_0);
 struct zfcp_qdio *VAR_4 =
  ((struct zfcp_adapter *) VAR_3->hostdata[0])->qdio;
 u64 VAR_5;

 FUNC_2(&VAR_4->stat_lock);
 VAR_5 = VAR_4->req_q_util;
 FUNC_3(&VAR_4->stat_lock);

 return FUNC_4(VAR_2, "%d %llu\n", FUNC_0(&VAR_4->req_q_full),
         (unsigned long long)VAR_5);
}
