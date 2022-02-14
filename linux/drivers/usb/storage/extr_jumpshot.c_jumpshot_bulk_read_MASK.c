
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int recv_bulk_pipe; } ;


 int VAR_0 ;
 int FUNC_0 (struct us_data*,int ,unsigned char*,unsigned int,int *) ;
 int FUNC_1 (struct us_data*,char*,unsigned int) ;

__attribute__((used)) static inline int FUNC_2(struct us_data *VAR_1,
         unsigned char *VAR_2,
         unsigned int VAR_3)
{
 if (VAR_3 == 0)
  return VAR_0;

 FUNC_1(VAR_1, "len = %d\n", VAR_3);
 return FUNC_0(VAR_1, VAR_1->recv_bulk_pipe,
   VAR_2, VAR_3, ((void*)0));
}
