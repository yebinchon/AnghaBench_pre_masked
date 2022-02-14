
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uas_dev_info {int flags; scalar_t__ qdepth; } ;
struct scsi_device {int no_report_opcodes; int broken_fua; int skip_ms_page_3f; int skip_ms_page_8; int wce_default_on; int fix_capacity; struct uas_dev_info* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct scsi_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_5)
{
 struct uas_dev_info *VAR_6 = VAR_5->hostdata;

 if (VAR_6->flags & VAR_3)
  VAR_5->no_report_opcodes = 1;


 if (VAR_6->flags & VAR_1)
  VAR_5->broken_fua = 1;


 if (VAR_6->flags & VAR_0) {
  VAR_5->skip_ms_page_3f = 1;
  VAR_5->skip_ms_page_8 = 1;
  VAR_5->wce_default_on = 1;
 }






 if (VAR_6->flags & VAR_2)
  VAR_5->fix_capacity = 1;
 if (VAR_6->flags & VAR_4)
  VAR_5->skip_ms_page_3f = 1;

 FUNC_0(VAR_5, VAR_6->qdepth - 2);
 return 0;
}
