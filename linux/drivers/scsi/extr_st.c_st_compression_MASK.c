
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_tape {scalar_t__ ready; unsigned char c_algo; int compression_changed; TYPE_1__* buffer; } ;
struct TYPE_2__ {unsigned char* b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (struct scsi_tape*,char*,...) ;
 int VAR_5 ;
 size_t VAR_6 ;
 unsigned char VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct scsi_tape*,int ,int ) ;
 int FUNC_2 (struct scsi_tape*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct scsi_tape * VAR_9, int VAR_10)
{
 int VAR_11;
 int VAR_12;
 unsigned char *VAR_13 = (VAR_9->buffer)->b_data;

 if (VAR_9->ready != VAR_8)
  return (-VAR_5);


 VAR_11 = FUNC_1(VAR_9, VAR_0, 0);
 if (VAR_11) {
  FUNC_0(VAR_9, "Compression mode page not supported.\n");
  return (-VAR_5);
 }

 VAR_12 = VAR_7 + VAR_13[VAR_6];
 FUNC_0(VAR_9, "Compression state is %d.\n",
      (VAR_13[VAR_12 + VAR_2] & VAR_4 ? 1 : 0));


 if ((VAR_13[VAR_12 + VAR_2] & VAR_3) == 0) {
  FUNC_0(VAR_9, "Compression not supported.\n");
  return (-VAR_5);
 }


 if (VAR_10) {
  VAR_13[VAR_12 + VAR_2] |= VAR_4;
  if (VAR_9->c_algo != 0)
   VAR_13[VAR_12 + VAR_1] = VAR_9->c_algo;
 }
 else {
  VAR_13[VAR_12 + VAR_2] &= ~VAR_4;
  if (VAR_9->c_algo != 0)
   VAR_13[VAR_12 + VAR_1] = 0;
 }

 VAR_11 = FUNC_2(VAR_9, VAR_0, 0);
 if (VAR_11) {
  FUNC_0(VAR_9, "Compression change failed.\n");
  return (-VAR_5);
 }
 FUNC_0(VAR_9, "Compression state changed to %d.\n", VAR_10);

 VAR_9->compression_changed = 1;
 return 0;
}
