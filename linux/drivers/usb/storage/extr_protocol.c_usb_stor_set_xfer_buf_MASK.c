
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct scsi_cmnd*,unsigned int) ;
 unsigned int FUNC_3 (unsigned char*,unsigned int,struct scsi_cmnd*,struct scatterlist**,unsigned int*,int ) ;

void FUNC_4(unsigned char *VAR_1,
 unsigned int VAR_2, struct scsi_cmnd *VAR_3)
{
 unsigned int VAR_4 = 0;
 struct scatterlist *VAR_5 = ((void*)0);

 VAR_2 = FUNC_0(VAR_2, FUNC_1(VAR_3));
 VAR_2 = FUNC_3(VAR_1, VAR_2, VAR_3, &VAR_5, &VAR_4,
   VAR_0);
 if (VAR_2 < FUNC_1(VAR_3))
  FUNC_2(VAR_3, FUNC_1(VAR_3) - VAR_2);
}
