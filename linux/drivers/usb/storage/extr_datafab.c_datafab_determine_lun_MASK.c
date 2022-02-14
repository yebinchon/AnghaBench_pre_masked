
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {unsigned char* iobuf; } ;
struct datafab_info {int lun; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct us_data*,unsigned char*,int) ;
 int FUNC_1 (struct us_data*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int,int ) ;
 int FUNC_4 (unsigned char*,unsigned char*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct us_data*,char*) ;

__attribute__((used)) static int FUNC_7(struct us_data *VAR_4,
     struct datafab_info *VAR_5)
{






 static unsigned char VAR_6[8] = { 0, 1, 0, 0, 0, 0xa0, 0xec, 1 };
 unsigned char *VAR_7 = VAR_4->iobuf;
 unsigned char *VAR_8;
 int VAR_9 = 0, VAR_10;

 if (!VAR_5)
  return VAR_1;

 FUNC_4(VAR_7, VAR_6, 8);
 VAR_8 = FUNC_3(512, VAR_0);
 if (!VAR_8)
  return VAR_1;

 FUNC_6(VAR_4, "locating...\n");



 while (VAR_9++ < 3) {
  VAR_7[5] = 0xa0;

  VAR_10 = FUNC_1(VAR_4, VAR_7, 8);
  if (VAR_10 != VAR_3) {
   VAR_10 = VAR_1;
   goto leave;
  }

  VAR_10 = FUNC_0(VAR_4, VAR_8, 512);
  if (VAR_10 == VAR_3) {
   VAR_5->lun = 0;
   VAR_10 = VAR_2;
   goto leave;
  }

  VAR_7[5] = 0xb0;

  VAR_10 = FUNC_1(VAR_4, VAR_7, 8);
  if (VAR_10 != VAR_3) {
   VAR_10 = VAR_1;
   goto leave;
  }

  VAR_10 = FUNC_0(VAR_4, VAR_8, 512);
  if (VAR_10 == VAR_3) {
   VAR_5->lun = 1;
   VAR_10 = VAR_2;
   goto leave;
  }

  FUNC_5(20);
 }

 VAR_10 = VAR_1;

 leave:
 FUNC_2(VAR_8);
 return VAR_10;
}
