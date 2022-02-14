
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct scsi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (struct scsi_device*,unsigned char*,int ,unsigned char*,unsigned int,int *,int,int,int *) ;

__attribute__((used)) static int FUNC_2(struct scsi_device *VAR_5, unsigned char *VAR_6,
       u8 VAR_7, unsigned VAR_8)
{
 int VAR_9;
 unsigned char VAR_10[16];

 if (VAR_8 < 4)
  return -VAR_1;

 VAR_10[0] = VAR_4;
 VAR_10[1] = 1;
 VAR_10[2] = VAR_7;
 VAR_10[3] = VAR_8 >> 8;
 VAR_10[4] = VAR_8 & 0xff;
 VAR_10[5] = 0;





 VAR_9 = FUNC_1(VAR_5, VAR_10, VAR_0, VAR_6,
      VAR_8, ((void*)0), 30 * VAR_3, 3, ((void*)0));
 if (VAR_9)
  return -VAR_2;


 if (VAR_6[1] != VAR_7)
  return -VAR_2;

 return FUNC_0(&VAR_6[2]) + 4;
}
