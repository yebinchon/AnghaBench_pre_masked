
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dvb_diseqc_master_cmd {int msg_len; int * msg; } ;
struct ddb {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (struct ddb*,int ,int) ;
 int FUNC_4 (struct ddb*,int,int,int ) ;

__attribute__((used)) static int FUNC_5(struct ddb *VAR_1, u32 VAR_2, u32 VAR_3,
      struct dvb_diseqc_master_cmd *VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_2);
 int VAR_6;

 FUNC_3(VAR_1, 0, VAR_5 | FUNC_1(VAR_3));
 for (VAR_6 = 0; VAR_6 < VAR_4->msg_len; VAR_6++)
  FUNC_3(VAR_1, VAR_4->msg[VAR_6], VAR_5 | FUNC_2(VAR_3));
 FUNC_4(VAR_1, VAR_2, VAR_3, VAR_0);
 return 0;
}
