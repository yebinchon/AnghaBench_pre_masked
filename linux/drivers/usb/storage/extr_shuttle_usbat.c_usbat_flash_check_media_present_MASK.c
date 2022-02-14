
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (struct us_data*,char*) ;

__attribute__((used)) static int FUNC_1(struct us_data *VAR_3,
        unsigned char *VAR_4)
{
 if (*VAR_4 & VAR_2) {
  FUNC_0(VAR_3, "no media detected\n");
  return VAR_1;
 }

 return VAR_0;
}
