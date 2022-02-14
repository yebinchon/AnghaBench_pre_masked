
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct scsi_cmnd {int request; scalar_t__ result; struct scsi_device* device; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,struct scsi_cmnd*,char*,struct scsi_cmnd*) ;
 int FUNC_3 (struct scsi_device*) ;
 int FUNC_4 (struct scsi_cmnd*,int) ;

__attribute__((used)) static void FUNC_5(struct scsi_cmnd *VAR_1, int VAR_2, bool VAR_3)
{
 struct scsi_device *VAR_4 = VAR_1->device;

 FUNC_0(1, FUNC_2(VAR_0, VAR_1,
  "Inserting command %p into mlqueue\n", VAR_1));

 FUNC_4(VAR_1, VAR_2);





 if (VAR_3)
  FUNC_3(VAR_4);







 VAR_1->result = 0;

 FUNC_1(VAR_1->request, 1);
}
