
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct scsi_device {int dummy; } ;
struct c8_inquiry {int page_code; char* page_id; char* array_user_label; int array_uniq_id_len; int array_unique_id; int * lun; } ;
struct TYPE_2__ {struct c8_inquiry c8; } ;
struct rdac_dh_data {int lun; TYPE_1__ inq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct scsi_device*,int,unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(struct scsi_device *VAR_5, struct rdac_dh_data *VAR_6,
   char *VAR_7, u8 *VAR_8)
{
 int VAR_9 = VAR_1, VAR_10;
 struct c8_inquiry *VAR_11 = &VAR_6->inq.c8;

 if (!FUNC_2(VAR_5, 0xC8, (unsigned char *)VAR_11,
          sizeof(struct c8_inquiry))) {
  if (VAR_11->page_code != 0xc8)
   return VAR_2;
  if (VAR_11->page_id[0] != 'e' || VAR_11->page_id[1] != 'd' ||
      VAR_11->page_id[2] != 'i' || VAR_11->page_id[3] != 'd')
   return VAR_2;
  VAR_6->lun = VAR_11->lun[7];

  for(VAR_10=0; VAR_10<VAR_0-1; ++VAR_10)
   *(VAR_7+VAR_10) = VAR_11->array_user_label[(2*VAR_10)+1];

  *(VAR_7+VAR_0-1) = '\0';
  FUNC_1(VAR_8, 0, VAR_4);
  FUNC_0(VAR_8, VAR_11->array_unique_id, VAR_11->array_uniq_id_len);
  VAR_9 = VAR_3;
 }
 return VAR_9;
}
