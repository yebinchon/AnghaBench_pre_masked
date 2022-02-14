
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usbat_info {int ssize; } ;
struct us_data {int srb; } ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (unsigned int,int ) ;
 void* FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (unsigned char*,int,int ,struct scatterlist**,unsigned int*,int ) ;
 int FUNC_4 (struct us_data*,struct usbat_info*) ;
 int FUNC_5 (struct us_data*,unsigned char*,unsigned char*,int) ;
 int FUNC_6 (unsigned char*,unsigned char,int,int) ;
 int FUNC_7 (struct us_data*,unsigned char*,int,int ) ;

__attribute__((used)) static int FUNC_8(struct us_data *VAR_11,
          struct usbat_info *VAR_12,
          u32 VAR_13,
          u32 VAR_14)
{
 unsigned char VAR_15[7] = {
  VAR_3,
  VAR_6,
  VAR_7,
  VAR_5,
  VAR_4,
  VAR_2,
  VAR_8,
 };
 unsigned char VAR_16[7];
 unsigned char *VAR_17;
 unsigned char VAR_18;
 unsigned int VAR_19, VAR_20;
 int VAR_21, VAR_22;
 unsigned int VAR_23 = 0;
 struct scatterlist *VAR_24 = ((void*)0);

 VAR_22 = FUNC_4(VAR_11, VAR_12);
 if (VAR_22 != VAR_10)
  return VAR_22;
 if (VAR_13 > 0x0FFFFFFF)
  return VAR_9;

 VAR_19 = VAR_14 * VAR_12->ssize;







 VAR_20 = FUNC_2(VAR_19, 65536u);
 VAR_17 = FUNC_1(VAR_20, VAR_1);
 if (VAR_17 == ((void*)0))
  return VAR_9;

 do {




  VAR_21 = FUNC_2(VAR_19, VAR_20);
  VAR_18 = (VAR_21 / VAR_12->ssize) & 0xff;


  FUNC_3(VAR_17, VAR_21, VAR_11->srb,
      &VAR_24, &VAR_23, VAR_0);


  FUNC_6(VAR_16, VAR_18, VAR_13, 0x30);


  VAR_22 = FUNC_5(VAR_11, VAR_15, VAR_16, 7);
  if (VAR_22 != VAR_10)
   goto leave;


  VAR_22 = FUNC_7(VAR_11, VAR_17, VAR_21, 0);
  if (VAR_22 != VAR_10)
   goto leave;

  VAR_13 += VAR_18;
  VAR_19 -= VAR_21;
 } while (VAR_19 > 0);

 FUNC_0(VAR_17);
 return VAR_22;

leave:
 FUNC_0(VAR_17);
 return VAR_9;
}
