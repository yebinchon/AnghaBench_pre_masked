
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_vpd {int len; int data; } ;
struct scsi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_vpd*) ;
 struct scsi_vpd* FUNC_1 (int,int ) ;
 int FUNC_2 (struct scsi_device*,int ,int ,int) ;

__attribute__((used)) static struct scsi_vpd *FUNC_3(struct scsi_device *VAR_2, u8 VAR_3)
{
 struct scsi_vpd *VAR_4;
 int VAR_5 = VAR_1, VAR_6;

retry_pg:
 VAR_4 = FUNC_1(sizeof(*VAR_4) + VAR_5, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_6 = FUNC_2(VAR_2, VAR_4->data, VAR_3, VAR_5);
 if (VAR_6 < 0) {
  FUNC_0(VAR_4);
  return ((void*)0);
 }
 if (VAR_6 > VAR_5) {
  VAR_5 = VAR_6;
  FUNC_0(VAR_4);
  goto retry_pg;
 }

 VAR_4->len = VAR_6;

 return VAR_4;
}
