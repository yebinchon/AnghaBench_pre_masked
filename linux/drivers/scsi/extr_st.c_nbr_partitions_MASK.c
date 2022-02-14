
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_tape {scalar_t__ ready; TYPE_1__* buffer; } ;
struct TYPE_2__ {int* b_data; } ;


 int FUNC_0 (struct scsi_tape*,char*,...) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct scsi_tape*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct scsi_tape *VAR_5)
{
 int VAR_6;

 if (VAR_5->ready != VAR_4)
  return (-VAR_0);

 VAR_6 = FUNC_1(VAR_5, VAR_2, 1);

 if (VAR_6) {
  FUNC_0(VAR_5, "Can't read medium partition page.\n");
  VAR_6 = (-VAR_0);
 } else {
  VAR_6 = (VAR_5->buffer)->b_data[VAR_1 +
           VAR_3] + 1;
  FUNC_0(VAR_5, "Number of partitions %d.\n", VAR_6);
 }

 return VAR_6;
}
