
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdebug_dev_info {int channel; TYPE_2__* sdbg_host; } ;
struct scsi_cmnd {unsigned char* cmnd; } ;
struct TYPE_4__ {TYPE_1__* shost; } ;
struct TYPE_3__ {int host_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_cmnd*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int,int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,unsigned char*) ;
 int FUNC_6 (int,unsigned char*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_7(struct scsi_cmnd *VAR_4,
         struct sdebug_dev_info *VAR_5)
{
 unsigned char *VAR_6 = VAR_4->cmnd;
 unsigned char *VAR_7;
 int VAR_8 = VAR_5->sdbg_host->shost->host_no;
 int VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_11 = FUNC_1(VAR_6 + 6);
 VAR_7 = FUNC_3(VAR_2, VAR_1);
 if (! VAR_7)
  return VAR_0 << 16;






 VAR_15 = 0x1;
 VAR_16 = 0x2;
 VAR_13 = (((VAR_8 + 1) & 0x7f) << 8) +
   (VAR_5->channel & 0x7f);
 VAR_14 = (((VAR_8 + 1) & 0x7f) << 8) +
   (VAR_5->channel & 0x7f) + 0x80;




 VAR_9 = 4;
 if (VAR_3 == 0) {
  VAR_7[VAR_9++] = VAR_8 % 3;
  VAR_7[VAR_9++] = 0x0F;
 } else {
  VAR_7[VAR_9++] = 0x0;
  VAR_7[VAR_9++] = 0x01;
 }
 FUNC_5(VAR_13, VAR_7 + VAR_9);
 VAR_9 += 2;
 VAR_7[VAR_9++] = 0;
 VAR_7[VAR_9++] = 0;
 VAR_7[VAR_9++] = 0;
 VAR_7[VAR_9++] = 0x1;
 VAR_7[VAR_9++] = 0;
 VAR_7[VAR_9++] = 0;
 FUNC_5(VAR_15, VAR_7 + VAR_9);
 VAR_9 += 2;
 VAR_7[VAR_9++] = 3;
 VAR_7[VAR_9++] = 0x08;
 FUNC_5(VAR_14, VAR_7 + VAR_9);
 VAR_9 += 2;
 VAR_7[VAR_9++] = 0;
 VAR_7[VAR_9++] = 0;
 VAR_7[VAR_9++] = 0;
 VAR_7[VAR_9++] = 0x1;
 VAR_7[VAR_9++] = 0;
 VAR_7[VAR_9++] = 0;
 FUNC_5(VAR_16, VAR_7 + VAR_9);
 VAR_9 += 2;

 VAR_12 = VAR_9 - 4;
 FUNC_6(VAR_12, VAR_7 + 0);







 VAR_12 = FUNC_4(VAR_11,VAR_9);
 VAR_10 = FUNC_0(VAR_4, VAR_7,
       FUNC_4(VAR_12, VAR_2));
 FUNC_2(VAR_7);
 return VAR_10;
}
