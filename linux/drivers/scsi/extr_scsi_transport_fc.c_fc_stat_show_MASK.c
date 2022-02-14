
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct fc_internal {TYPE_1__* f; } ;
struct fc_host_statistics {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int transportt; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct fc_host_statistics* (* get_fc_host_stats ) (struct Scsi_Host*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*,unsigned long long) ;
 struct fc_host_statistics* FUNC_2 (struct Scsi_Host*) ;
 struct fc_internal* FUNC_3 (int ) ;
 struct Scsi_Host* FUNC_4 (struct device const*) ;

__attribute__((used)) static ssize_t
FUNC_5(const struct device *VAR_1, char *VAR_2, unsigned long VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_4(VAR_1);
 struct fc_internal *VAR_5 = FUNC_3(VAR_4->transportt);
 struct fc_host_statistics *VAR_6;
 ssize_t VAR_7 = -VAR_0;

 if (VAR_3 > sizeof(struct fc_host_statistics) ||
     VAR_3 % sizeof(u64) != 0)
  FUNC_0(1);

 if (VAR_5->f->get_fc_host_stats) {
  VAR_6 = (VAR_5->f->get_fc_host_stats)(VAR_4);
  if (VAR_6)
   VAR_7 = FUNC_1(VAR_2, 20, "0x%llx\n",
         (unsigned long long)*(u64 *)(((u8 *) VAR_6) + VAR_3));
 }
 return VAR_7;
}
