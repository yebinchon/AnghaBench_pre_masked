
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct zfcp_dbf_pay {int counter; int data; int fsf_req_id; int area; } ;
struct zfcp_dbf {int pay_lock; int pay; struct zfcp_dbf_pay pay_buf; } ;
struct zfcp_adapter {struct zfcp_dbf* dbf; } ;
struct qdio_buffer {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int const,struct zfcp_dbf_pay*,int ) ;
 int FUNC_1 (int ,int const) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct zfcp_dbf_pay*,int ,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int) ;

void FUNC_9(struct zfcp_adapter *VAR_1, u64 VAR_2, u16 VAR_3,
     void **VAR_4)
{
 struct zfcp_dbf *VAR_5 = VAR_1->dbf;
 struct zfcp_dbf_pay *VAR_6 = &VAR_5->pay_buf;
 unsigned long VAR_7;
 static int const VAR_8 = 1;
 u16 VAR_9;

 if (FUNC_7(!FUNC_1(VAR_5->pay, VAR_8)))
  return;

 if (!VAR_4)
  return;

 FUNC_5(&VAR_5->pay_lock, VAR_7);
 FUNC_3(VAR_6, 0, sizeof(*VAR_6));

 FUNC_2(VAR_6->area, "def_err", 7);
 VAR_6->fsf_req_id = VAR_2;
 VAR_6->counter = 0;
 VAR_9 = FUNC_4((u16)sizeof(struct qdio_buffer),
       (u16)VAR_0);

 while (VAR_6->counter < VAR_3 && (char *)VAR_4[VAR_6->counter]) {
  FUNC_2(VAR_6->data, (char *)VAR_4[VAR_6->counter], VAR_9);
  FUNC_0(VAR_5->pay, VAR_8, VAR_6, FUNC_8(VAR_9));
  VAR_6->counter++;
 }

 FUNC_6(&VAR_5->pay_lock, VAR_7);
}
