
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct us_data {int recv_bulk_pipe; int send_bulk_pipe; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char FUNC_0 (struct us_data*) ;
 unsigned char FUNC_1 (int ) ;
 unsigned char FUNC_2 (int ) ;
 unsigned char FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (struct us_data*,int ,unsigned char*,int,int *) ;

__attribute__((used)) static int FUNC_5(struct us_data *VAR_3, u16 VAR_4, unsigned char *VAR_5)
{
 int VAR_6;
 unsigned char VAR_7[] = {
  VAR_0, VAR_1,
  FUNC_1(VAR_4), FUNC_3(VAR_4), 0, FUNC_2(VAR_4), 0, 0, FUNC_0(VAR_3)
 };

 VAR_6 = FUNC_4(VAR_3, VAR_3->send_bulk_pipe,
  VAR_7, 9, ((void*)0));
 if (VAR_6 != VAR_2)
  return VAR_6;

 return FUNC_4(VAR_3, VAR_3->recv_bulk_pipe,
  VAR_5, 16, ((void*)0));
}
