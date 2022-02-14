
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {unsigned char* iobuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct us_data*,unsigned char*) ;

__attribute__((used)) static int FUNC_1(struct us_data *VAR_3)
{
 unsigned char *VAR_4 = VAR_3->iobuf;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (VAR_5 != VAR_2)
  return VAR_0;


 if (*VAR_4 & 0x01 && *VAR_4 != 0x51)
  return VAR_0;


 if (*VAR_4 & 0x20)
  return VAR_0;

 return VAR_1;
}
