
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct us_data {unsigned char* iobuf; } ;
struct datafab_info {int lun; int sectors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct us_data*,unsigned char*,int) ;
 int FUNC_1 (struct us_data*,unsigned char*,int) ;
 int FUNC_2 (struct us_data*,struct datafab_info*) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (int,int ) ;
 int FUNC_5 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_6(struct us_data *VAR_4,
        struct datafab_info *VAR_5)
{




 static unsigned char VAR_6[8] = { 0, 1, 0, 0, 0, 0xa0, 0xec, 1 };
 unsigned char *VAR_7 = VAR_4->iobuf;
 unsigned char *VAR_8;
 int VAR_9;

 if (!VAR_5)
  return VAR_1;

 if (VAR_5->lun == -1) {
  VAR_9 = FUNC_2(VAR_4, VAR_5);
  if (VAR_9 != VAR_2)
   return VAR_9;
 }

 FUNC_5(VAR_7, VAR_6, 8);
 VAR_8 = FUNC_4(512, VAR_0);
 if (!VAR_8)
  return VAR_1;

 VAR_7[5] += (VAR_5->lun << 4);

 VAR_9 = FUNC_1(VAR_4, VAR_7, 8);
 if (VAR_9 != VAR_3) {
  VAR_9 = VAR_1;
  goto leave;
 }



 VAR_9 = FUNC_0(VAR_4, VAR_8, 512);
 if (VAR_9 == VAR_3) {


  VAR_5->sectors = ((u32)(VAR_8[117]) << 24) |
    ((u32)(VAR_8[116]) << 16) |
    ((u32)(VAR_8[115]) << 8) |
    ((u32)(VAR_8[114]) );
  VAR_9 = VAR_2;
  goto leave;
 }

 VAR_9 = VAR_1;

 leave:
 FUNC_3(VAR_8);
 return VAR_9;
}
