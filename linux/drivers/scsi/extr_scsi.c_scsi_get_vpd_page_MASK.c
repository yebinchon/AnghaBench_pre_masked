
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct scsi_device {scalar_t__ skip_vpd_pages; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct scsi_device*,unsigned char*,unsigned char,int) ;

int FUNC_2(struct scsi_device *VAR_1, u8 VAR_2, unsigned char *VAR_3,
        int VAR_4)
{
 int VAR_5, VAR_6;

 if (VAR_1->skip_vpd_pages)
  goto fail;


 VAR_6 = FUNC_1(VAR_1, VAR_3, 0, VAR_4);
 if (VAR_6 < 4)
  goto fail;


 if (VAR_2 == 0)
  return 0;

 for (VAR_5 = 4; VAR_5 < FUNC_0(VAR_6, VAR_4); VAR_5++)
  if (VAR_3[VAR_5] == VAR_2)
   goto found;

 if (VAR_5 < VAR_6 && VAR_5 >= VAR_4)

  goto found;

 goto fail;

 found:
 VAR_6 = FUNC_1(VAR_1, VAR_3, VAR_2, VAR_4);
 if (VAR_6 < 0)
  goto fail;

 return 0;

 fail:
 return -VAR_0;
}
