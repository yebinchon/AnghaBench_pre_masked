
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unmap_block_desc {int blocks; int lba; } ;
struct sdebug_dev_info {int dummy; } ;
struct scsi_cmnd {unsigned char* cmnd; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct scsi_cmnd*,unsigned long long,unsigned int,int) ;
 unsigned int FUNC_2 (unsigned char*) ;
 unsigned int FUNC_3 (int *) ;
 unsigned long long FUNC_4 (int *) ;
 int FUNC_5 (unsigned char*) ;
 unsigned char* FUNC_6 (unsigned int,int ) ;
 int FUNC_7 (struct scsi_cmnd*,int ,int ,int ) ;
 int FUNC_8 (struct scsi_cmnd*,int ,int,int) ;
 unsigned int FUNC_9 (struct scsi_cmnd*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct scsi_cmnd*,unsigned char*,unsigned int) ;
 unsigned int VAR_7 ;
 int FUNC_12 (unsigned long long,unsigned int) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_15(struct scsi_cmnd *VAR_8, struct sdebug_dev_info *VAR_9)
{
 unsigned char *VAR_10;
 struct unmap_block_desc *VAR_11;
 unsigned int VAR_12, VAR_13, VAR_14;
 int VAR_15;
 unsigned long VAR_16;


 if (!FUNC_10())
  return 0;
 VAR_13 = FUNC_2(VAR_8->cmnd + 7);
 FUNC_0(FUNC_9(VAR_8) != VAR_13);

 VAR_14 = (VAR_13 - 8) / 16;
 if (VAR_14 > VAR_7) {
  FUNC_8(VAR_8, VAR_4, 7, -1);
  return VAR_6;
 }

 VAR_10 = FUNC_6(FUNC_9(VAR_8), VAR_0);
 if (!VAR_10) {
  FUNC_7(VAR_8, VAR_1, VAR_2,
    VAR_3);
  return VAR_6;
 }

 FUNC_11(VAR_8, VAR_10, FUNC_9(VAR_8));

 FUNC_0(FUNC_2(&VAR_10[0]) != VAR_13 - 2);
 FUNC_0(FUNC_2(&VAR_10[2]) != VAR_14 * 16);

 VAR_11 = (void *)&VAR_10[8];

 FUNC_13(&VAR_5, VAR_16);

 for (VAR_12 = 0 ; VAR_12 < VAR_14 ; VAR_12++) {
  unsigned long long VAR_17 = FUNC_4(&VAR_11[VAR_12].lba);
  unsigned int VAR_18 = FUNC_3(&VAR_11[VAR_12].blocks);

  VAR_15 = FUNC_1(VAR_8, VAR_17, VAR_18, 1);
  if (VAR_15)
   goto out;

  FUNC_12(VAR_17, VAR_18);
 }

 VAR_15 = 0;

out:
 FUNC_14(&VAR_5, VAR_16);
 FUNC_5(VAR_10);

 return VAR_15;
}
