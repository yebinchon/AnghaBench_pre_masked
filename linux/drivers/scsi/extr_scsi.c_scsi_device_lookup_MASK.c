
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u64 ;
struct scsi_device {int dummy; } ;
struct Scsi_Host {int host_lock; } ;


 struct scsi_device* FUNC_0 (struct Scsi_Host*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

struct scsi_device *FUNC_4(struct Scsi_Host *VAR_0,
  uint VAR_1, uint VAR_2, u64 VAR_3)
{
 struct scsi_device *VAR_4;
 unsigned long VAR_5;

 FUNC_2(VAR_0->host_lock, VAR_5);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4 && FUNC_1(VAR_4))
  VAR_4 = ((void*)0);
 FUNC_3(VAR_0->host_lock, VAR_5);

 return VAR_4;
}
