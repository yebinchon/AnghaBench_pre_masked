
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct t10_wwn {TYPE_1__* t10_dev; int * unit_serial; } ;
struct scsi_device {int dummy; } ;
struct TYPE_2__ {int dev_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (int ,unsigned char*) ;
 int FUNC_4 (struct scsi_device*,unsigned char*,int ,unsigned char*,int ,int *,int ,int,int *) ;
 int FUNC_5 (int *,int ,char*,unsigned char*) ;

__attribute__((used)) static int
FUNC_6(struct scsi_device *VAR_9, struct t10_wwn *VAR_10)
{
 unsigned char VAR_11[VAR_8], *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_1(VAR_7, VAR_4);
 if (!VAR_12)
  return -VAR_2;

 FUNC_2(VAR_11, 0, VAR_8);
 VAR_11[0] = VAR_6;
 VAR_11[1] = 0x01;
 VAR_11[2] = 0x80;
 FUNC_3(VAR_7, &VAR_11[3]);

 VAR_13 = FUNC_4(VAR_9, VAR_11, VAR_1, VAR_12,
         VAR_7, ((void*)0), VAR_5, 1, ((void*)0));
 if (VAR_13)
  goto out_free;

 FUNC_5(&VAR_10->unit_serial[0], VAR_7, "%s", &VAR_12[4]);

 VAR_10->t10_dev->dev_flags |= VAR_0;

 FUNC_0(VAR_12);
 return 0;

out_free:
 FUNC_0(VAR_12);
 return -VAR_3;
}
