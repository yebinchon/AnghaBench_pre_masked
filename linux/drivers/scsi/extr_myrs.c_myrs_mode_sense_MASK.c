
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int* cmnd; } ;
struct TYPE_2__ {scalar_t__ wce; scalar_t__ rce; } ;
struct myrs_ldev_info {int cacheline_size; TYPE_1__ ldev_control; int devsize_bytes; int cfg_devsize; } ;
struct myrs_hba {int dummy; } ;
typedef int modes ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (int,unsigned char*) ;
 int FUNC_2 (int ,unsigned char*) ;
 int FUNC_3 (struct scsi_cmnd*,unsigned char*,size_t) ;

__attribute__((used)) static void FUNC_4(struct myrs_hba *VAR_4, struct scsi_cmnd *VAR_5,
  struct myrs_ldev_info *VAR_6)
{
 unsigned char VAR_7[32], *VAR_8;
 bool VAR_9;
 size_t VAR_10;

 VAR_9 = (VAR_5->cmnd[1] & 0x08) == 0x08;
 if (VAR_9) {
  VAR_10 = 24;
  VAR_8 = &VAR_7[4];
 } else {
  VAR_10 = 32;
  VAR_8 = &VAR_7[12];
 }
 FUNC_0(VAR_7, 0, sizeof(VAR_7));
 VAR_7[0] = VAR_10 - 1;
 VAR_7[2] = 0x10;
 if (VAR_6->ldev_control.wce == VAR_1)
  VAR_7[2] |= 0x80;
 if (!VAR_9) {
  unsigned char *VAR_11 = &VAR_7[4];

  VAR_7[3] = 8;
  FUNC_2(VAR_6->cfg_devsize, &VAR_11[0]);
  FUNC_2(VAR_6->devsize_bytes, &VAR_11[5]);
 }
 VAR_8[0] = 0x08;
 VAR_8[1] = 0x12;
 if (VAR_6->ldev_control.rce == VAR_2)
  VAR_8[2] |= 0x01;
 if (VAR_6->ldev_control.wce == VAR_3 ||
     VAR_6->ldev_control.wce == VAR_0)
  VAR_8[2] |= 0x04;
 if (VAR_6->cacheline_size) {
  VAR_8[2] |= 0x08;
  FUNC_1(1 << VAR_6->cacheline_size,
       &VAR_8[14]);
 }

 FUNC_3(VAR_5, VAR_7, VAR_10);
}
