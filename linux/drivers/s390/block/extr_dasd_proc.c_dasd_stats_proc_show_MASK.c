
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct dasd_profile_info {int dasd_io_reqs; int dasd_io_nr_req; int dasd_io_time3; int dasd_io_time2ps; int dasd_io_time2; int dasd_io_time1; int dasd_io_timps; int dasd_io_times; int dasd_io_secs; int dasd_io_sects; } ;
struct TYPE_2__ {int lock; struct dasd_profile_info* data; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct seq_file*,int ,int) ;
 int FUNC_1 (struct seq_file*,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_1, void *VAR_2)
{
 FUNC_1(VAR_1, "Statistics are not activated in this kernel\n");

 return 0;
}
