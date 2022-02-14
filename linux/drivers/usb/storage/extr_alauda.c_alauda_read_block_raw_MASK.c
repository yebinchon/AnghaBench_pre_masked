
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct us_data {int recv_bulk_pipe; int send_bulk_pipe; } ;
struct TYPE_2__ {int pagesize; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__ FUNC_0 (struct us_data*) ;
 unsigned int FUNC_1 (struct us_data*) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (struct us_data*,int ,unsigned char*,int,int *) ;
 int FUNC_6 (struct us_data*,char*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct us_data *VAR_3, u16 VAR_4,
  unsigned int VAR_5, unsigned int VAR_6, unsigned char *VAR_7)
{
 int VAR_8;
 unsigned char VAR_9[] = {
  VAR_0, VAR_1, FUNC_2(VAR_4),
  FUNC_4(VAR_4), 0, FUNC_3(VAR_4) + VAR_5, VAR_6, 0, FUNC_1(VAR_3)
 };

 FUNC_6(VAR_3, "pba %d page %d count %d\n", VAR_4, VAR_5, VAR_6);

 VAR_8 = FUNC_5(VAR_3, VAR_3->send_bulk_pipe,
  VAR_9, 9, ((void*)0));
 if (VAR_8 != VAR_2)
  return VAR_8;

 return FUNC_5(VAR_3, VAR_3->recv_bulk_pipe,
  VAR_7, (FUNC_0(VAR_3).pagesize + 64) * VAR_6, ((void*)0));
}
