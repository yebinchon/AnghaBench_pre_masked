
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {unsigned char* iobuf; } ;


 unsigned char FUNC_0 (unsigned short) ;
 unsigned char FUNC_1 (unsigned short) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct us_data*,void*,unsigned short,int) ;
 int FUNC_3 (struct us_data*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_4(struct us_data *VAR_6,
       void* VAR_7,
       unsigned short VAR_8,
       int VAR_9)
{
 int VAR_10;
 unsigned char *VAR_11 = VAR_6->iobuf;

 if (!VAR_8)
  return VAR_4;

 VAR_11[0] = 0xC0;
 VAR_11[1] = VAR_0 | VAR_2;
 VAR_11[2] = VAR_1;
 VAR_11[3] = 0;
 VAR_11[4] = 0;
 VAR_11[5] = 0;
 VAR_11[6] = FUNC_0(VAR_8);
 VAR_11[7] = FUNC_1(VAR_8);

 VAR_10 = FUNC_3(VAR_6, VAR_11, 8);
 if (VAR_10 != VAR_5)
  return VAR_3;

 VAR_10 = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9);
 return (VAR_10 == VAR_5 ?
   VAR_4 : VAR_3);
}
