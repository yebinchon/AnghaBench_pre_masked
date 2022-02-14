
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct scsi_device*,unsigned char*,int ,void*,int,int *,int ,int ,int *) ;
 int FUNC_2 (int ,struct scsi_device*,char*,int,unsigned char) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct scsi_device *VAR_6, int VAR_7,
    void *VAR_8, int VAR_9)
{
 int VAR_10;
 unsigned char VAR_11[] = {
  VAR_3,
  1,
  VAR_7,
  VAR_9 >> 8,
  VAR_9 & 0xff,
  0
 };
 unsigned char VAR_12;

 VAR_10 = FUNC_1(VAR_6, VAR_11, VAR_0, VAR_8, VAR_9,
    ((void*)0), VAR_5, VAR_4, ((void*)0));
 if (FUNC_3(VAR_10))
  return VAR_10;

 VAR_12 = ((unsigned char *)VAR_8)[0];

 if (FUNC_0(VAR_12 == VAR_7))
  return VAR_10;




 FUNC_2(VAR_2, VAR_6,
      "Wrong diagnostic page; asked for %d got %u\n",
      VAR_7, VAR_12);

 return -VAR_1;
}
