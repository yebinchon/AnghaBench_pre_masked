
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct csio_lnode* hostdata; } ;
struct fc_rport {scalar_t__ dd_data; } ;
struct csio_lnode {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct fc_rport*) ;
 int FUNC_1 (struct scsi_device*) ;
 struct fc_rport* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct scsi_device *VAR_1)
{
 struct fc_rport *VAR_2 = FUNC_2(FUNC_1(VAR_1));

 if (!VAR_2 || FUNC_0(VAR_2))
  return -VAR_0;

 VAR_1->hostdata = *((struct csio_lnode **)(VAR_2->dd_data));

 return 0;
}
