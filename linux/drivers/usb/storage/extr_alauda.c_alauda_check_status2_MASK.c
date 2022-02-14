
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int recv_bulk_pipe; int send_bulk_pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (struct us_data*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct us_data*,int ,unsigned char*,int,int *) ;
 int FUNC_2 (struct us_data*,char*,unsigned char*) ;

__attribute__((used)) static int FUNC_3(struct us_data *VAR_5)
{
 int VAR_6;
 unsigned char VAR_7[] = {
  VAR_0, VAR_1,
  0, 0, 0, 0, 3, 0, FUNC_0(VAR_5)
 };
 unsigned char VAR_8[3];

 VAR_6 = FUNC_1(VAR_5, VAR_5->send_bulk_pipe,
  VAR_7, 9, ((void*)0));
 if (VAR_6 != VAR_4)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_5->recv_bulk_pipe,
  VAR_8, 3, ((void*)0));
 if (VAR_6 != VAR_4)
  return VAR_6;

 FUNC_2(VAR_5, "%3ph\n", VAR_8);
 if (VAR_8[0] & VAR_2)
  return VAR_3;

 return VAR_4;
}
