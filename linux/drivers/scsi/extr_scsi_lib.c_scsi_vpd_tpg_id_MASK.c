
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_vpd {unsigned char* data; int len; } ;
struct scsi_device {int vpd_pg83; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char const*) ;
 struct scsi_vpd* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

int FUNC_4(struct scsi_device *VAR_2, int *VAR_3)
{
 const unsigned char *VAR_4;
 const struct scsi_vpd *VAR_5;
 int VAR_6 = -VAR_0, VAR_7 = -1;

 FUNC_2();
 VAR_5 = FUNC_1(VAR_2->vpd_pg83);
 if (!VAR_5) {
  FUNC_3();
  return -VAR_1;
 }

 VAR_4 = VAR_5->data + 4;
 while (VAR_4 < VAR_5->data + VAR_5->len) {
  switch (VAR_4[1] & 0xf) {
  case 0x4:

   VAR_7 = FUNC_0(&VAR_4[6]);
   break;
  case 0x5:

   VAR_6 = FUNC_0(&VAR_4[6]);
   break;
  default:
   break;
  }
  VAR_4 += VAR_4[3] + 4;
 }
 FUNC_3();

 if (VAR_6 >= 0 && VAR_3 && VAR_7 != -1)
  *VAR_3 = VAR_7;

 return VAR_6;
}
