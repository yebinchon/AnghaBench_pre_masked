
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct scsi_device*,char const*,int ,int*,int,int *) ;

__attribute__((used)) static int
FUNC_1(struct scsi_device *VAR_2, u8 *VAR_3)
{
 int VAR_4, VAR_5;






 static const char VAR_6[] = {
  128, 0, 0, 0, 0, 0
 };

 static const char VAR_7[] = {
  129, 0x0b, 0, 0, 0, 0, 0, 0, 4, 0
 };







 for (VAR_4 = 0; ; VAR_4++) {
  VAR_5 = FUNC_0(VAR_2, VAR_6, VAR_1,
         ((void*)0), 0, ((void*)0));

  if(VAR_5) {
   if(VAR_4 >= 3)
    return 0;
  } else {

   break;
  }
 }

 VAR_5 = FUNC_0(VAR_2, VAR_7,
        VAR_0, VAR_3, 4, ((void*)0));

 if (VAR_5)

  return 0;

 return VAR_3[3] + ((VAR_3[2] & 0x1f) << 8);
}
