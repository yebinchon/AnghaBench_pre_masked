
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_device*) ;
 scalar_t__ FUNC_1 (int ) ;

int FUNC_2(struct scsi_device *VAR_3, int VAR_4,
  bool VAR_5)
{
 if (VAR_4 == VAR_2 && VAR_5) {
  if (FUNC_1(VAR_3->host))
   return -VAR_0;
 } else {
  if (!FUNC_0(VAR_3))
   return -VAR_1;
 }

 return 0;
}
