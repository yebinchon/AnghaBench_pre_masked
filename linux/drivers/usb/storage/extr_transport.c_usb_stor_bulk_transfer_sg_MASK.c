
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int dummy; } ;
struct scatterlist {int dummy; } ;


 int FUNC_0 (struct us_data*,unsigned int,void*,unsigned int,unsigned int*) ;
 int FUNC_1 (struct us_data*,unsigned int,struct scatterlist*,int,unsigned int,unsigned int*) ;

int FUNC_2(struct us_data* VAR_0, unsigned int VAR_1,
  void *VAR_2, unsigned int VAR_3, int VAR_4, int *VAR_5)
{
 int VAR_6;
 unsigned int VAR_7;


 if (VAR_4) {

  VAR_6 = FUNC_1(VAR_0, VAR_1,
    (struct scatterlist *) VAR_2, VAR_4,
    VAR_3, &VAR_7);
  VAR_3 -= VAR_7;
 } else {

  VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2,
    VAR_3, &VAR_7);
  VAR_3 -= VAR_7;
 }


 if (VAR_5)
  *VAR_5 = VAR_3;
 return VAR_6;
}
