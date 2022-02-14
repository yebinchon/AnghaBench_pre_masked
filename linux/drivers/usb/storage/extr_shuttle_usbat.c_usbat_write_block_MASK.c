
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {unsigned char* iobuf; } ;


 unsigned char FUNC_0 (unsigned short) ;
 unsigned char FUNC_1 (unsigned short) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct us_data*,void*,unsigned short,int) ;
 int FUNC_3 (struct us_data*,unsigned char*,int) ;
 int FUNC_4 (struct us_data*,int) ;

__attribute__((used)) static int FUNC_5(struct us_data *VAR_5,
        unsigned char VAR_6,
        void* VAR_7,
        unsigned short VAR_8,
        int VAR_9,
        int VAR_10)
{
 int VAR_11;
 unsigned char *VAR_12 = VAR_5->iobuf;

 if (!VAR_8)
  return VAR_3;

 VAR_12[0] = 0x40;
 VAR_12[1] = VAR_6 | VAR_1;
 VAR_12[2] = VAR_0;
 VAR_12[3] = 0;
 VAR_12[4] = 0;
 VAR_12[5] = 0;
 VAR_12[6] = FUNC_0(VAR_8);
 VAR_12[7] = FUNC_1(VAR_8);

 VAR_11 = FUNC_3(VAR_5, VAR_12, 8);

 if (VAR_11 != VAR_4)
  return VAR_2;

 VAR_11 = FUNC_2(VAR_5, VAR_7, VAR_8, VAR_10);
 if (VAR_11 != VAR_4)
  return VAR_2;

 return FUNC_4(VAR_5, VAR_9);
}
