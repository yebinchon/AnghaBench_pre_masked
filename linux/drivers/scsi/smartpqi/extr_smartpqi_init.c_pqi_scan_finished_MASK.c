
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_ctrl_info {int scan_mutex; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (int *) ;
 struct pqi_ctrl_info* FUNC_1 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_2(struct Scsi_Host *VAR_0,
 unsigned long VAR_1)
{
 struct pqi_ctrl_info *VAR_2;

 VAR_2 = FUNC_1(VAR_0);

 return !FUNC_0(&VAR_2->scan_mutex);
}
