
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbat_info {int dummy; } ;
struct us_data {unsigned char* iobuf; scalar_t__ extra; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct us_data*,char*) ;
 int FUNC_3 (struct us_data*) ;
 scalar_t__ FUNC_4 (struct us_data*) ;
 int FUNC_5 (struct us_data*,unsigned char*) ;
 int FUNC_6 (struct us_data*) ;
 int FUNC_7 (struct us_data*,int,int,int,int,unsigned char,unsigned char) ;
 scalar_t__ FUNC_8 (struct us_data*,struct usbat_info*,int) ;
 int FUNC_9 (struct us_data*,int,int) ;

__attribute__((used)) static int FUNC_10(struct us_data *VAR_14, int VAR_15)
{
 int VAR_16;
 struct usbat_info *VAR_17;
 unsigned char VAR_18 = VAR_1;
 unsigned char VAR_19 = VAR_2;
 unsigned char *VAR_20 = VAR_14->iobuf;

 VAR_14->extra = FUNC_0(sizeof(struct usbat_info), VAR_0);
 if (!VAR_14->extra)
  return 1;

 VAR_17 = (struct usbat_info *) (VAR_14->extra);


 VAR_16 = FUNC_9(VAR_14,
     VAR_10 | VAR_9,
     VAR_8 | VAR_7);
 if (VAR_16 != VAR_13)
  return VAR_11;

 FUNC_2(VAR_14, "INIT 1\n");

 FUNC_1(2000);

 VAR_16 = FUNC_5(VAR_14, VAR_20);
 if (VAR_16 != VAR_12)
  return VAR_16;

 FUNC_2(VAR_14, "INIT 2\n");

 VAR_16 = FUNC_5(VAR_14, VAR_20);
 if (VAR_16 != VAR_13)
  return VAR_11;

 VAR_16 = FUNC_5(VAR_14, VAR_20);
 if (VAR_16 != VAR_13)
  return VAR_11;

 FUNC_2(VAR_14, "INIT 3\n");

 VAR_16 = FUNC_6(VAR_14);
 if (VAR_16 != VAR_12)
  return VAR_16;

 FUNC_2(VAR_14, "INIT 4\n");

 VAR_16 = FUNC_5(VAR_14, VAR_20);
 if (VAR_16 != VAR_13)
  return VAR_11;

 FUNC_2(VAR_14, "INIT 5\n");


 VAR_16 = FUNC_3(VAR_14);
 if (VAR_16 != VAR_12)
  return VAR_16;

 FUNC_2(VAR_14, "INIT 6\n");

 VAR_16 = FUNC_5(VAR_14, VAR_20);
 if (VAR_16 != VAR_13)
  return VAR_11;

 FUNC_2(VAR_14, "INIT 7\n");

 FUNC_1(1400);

 VAR_16 = FUNC_5(VAR_14, VAR_20);
 if (VAR_16 != VAR_13)
  return VAR_11;

 FUNC_2(VAR_14, "INIT 8\n");

 VAR_16 = FUNC_6(VAR_14);
 if (VAR_16 != VAR_12)
  return VAR_16;

 FUNC_2(VAR_14, "INIT 9\n");


 if (FUNC_8(VAR_14, VAR_17, VAR_15))
  return VAR_11;

 FUNC_2(VAR_14, "INIT 10\n");

 if (FUNC_4(VAR_14) == VAR_3) {
  VAR_18 = 0x02;
  VAR_19 = 0x00;
 }
 VAR_16 = FUNC_7(VAR_14, (VAR_6 | VAR_5 | VAR_4),
         0x00, 0x88, 0x08, VAR_18, VAR_19);
 if (VAR_16 != VAR_13)
  return VAR_11;

 FUNC_2(VAR_14, "INIT 11\n");

 return VAR_12;
}
