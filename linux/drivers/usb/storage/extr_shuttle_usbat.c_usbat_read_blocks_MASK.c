
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {unsigned char* iobuf; } ;


 unsigned char FUNC_0 (int) ;
 unsigned char FUNC_1 (int) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct us_data*,void*,int,int) ;
 int FUNC_3 (struct us_data*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_4(struct us_data *VAR_8,
        void* VAR_9,
        int VAR_10,
        int VAR_11)
{
 int VAR_12;
 unsigned char *VAR_13 = VAR_8->iobuf;

 VAR_13[0] = 0xC0;
 VAR_13[1] = VAR_0 | VAR_3;
 VAR_13[2] = VAR_1;
 VAR_13[3] = VAR_2;
 VAR_13[4] = 0xFD;
 VAR_13[5] = VAR_4;
 VAR_13[6] = FUNC_0(VAR_10);
 VAR_13[7] = FUNC_1(VAR_10);


 VAR_12 = FUNC_3(VAR_8, VAR_13, 8);
 if (VAR_12 != VAR_7)
  return VAR_5;


 VAR_12 = FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11);
 if (VAR_12 != VAR_7)
  return VAR_5;

 return VAR_6;
}
