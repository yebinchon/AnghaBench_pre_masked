
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct scsi_device*,unsigned char*,int ,unsigned char*,int,int *,int ,int,int *) ;
 int FUNC_1 (int ,struct scsi_device*,char*) ;

__attribute__((used)) static void FUNC_2(struct scsi_device *VAR_5,
      unsigned char *VAR_6)
{
 unsigned char VAR_7[VAR_2];

 FUNC_1(VAR_1, VAR_5, "unlocking floptical drive\n");
 VAR_7[0] = VAR_3;
 VAR_7[1] = 0;
 VAR_7[2] = 0x2e;
 VAR_7[3] = 0;
 VAR_7[4] = 0x2a;
 VAR_7[5] = 0;
 FUNC_0(VAR_5, VAR_7, VAR_0, VAR_6, 0x2a, ((void*)0),
    VAR_4, 3, ((void*)0));
}
