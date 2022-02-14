
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct scsi_sense_hdr {int dummy; } ;
struct scsi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned char VAR_10 ;
 int FUNC_0 (unsigned char*,int,int) ;
 int FUNC_1 (int,unsigned char*) ;
 int FUNC_2 (int,unsigned char*) ;
 int FUNC_3 (struct scsi_device*,unsigned char*,int ,unsigned char*,int,int *,struct scsi_sense_hdr*,int,int ,int,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct scsi_device *VAR_11, int VAR_12,
         struct scsi_sense_hdr *VAR_13)
{
 u8 VAR_14[VAR_5];
 unsigned char VAR_15[8];
 int VAR_16 = 8;
 int VAR_17 = VAR_7 | VAR_9 |
  VAR_8;


 FUNC_0(VAR_15, 0, VAR_16);
 VAR_15[4] = VAR_10;
 FUNC_1(VAR_12, &VAR_15[6]);


 FUNC_0(VAR_14, 0x0, VAR_5);
 VAR_14[0] = VAR_4;
 VAR_14[1] = VAR_6;
 FUNC_2(VAR_16, &VAR_14[6]);

 return FUNC_3(VAR_11, VAR_14, VAR_2, VAR_15, VAR_16, ((void*)0),
   VAR_13, VAR_1 * VAR_3,
   VAR_0, VAR_17, 0, ((void*)0));
}
