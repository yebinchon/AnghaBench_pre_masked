
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u16 ;
struct zfcp_dbf_pay {int counter; int data; int area; int fsf_req_id; } ;
struct zfcp_dbf {int pay_lock; int pay; struct zfcp_dbf_pay pay_buf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,struct zfcp_dbf_pay*,int ) ;
 int FUNC_1 (int ,void*,scalar_t__) ;
 int FUNC_2 (struct zfcp_dbf_pay*,int ,int) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static inline
void FUNC_7(struct zfcp_dbf *VAR_2, void *VAR_3, u16 VAR_4, char *VAR_5,
         u64 VAR_6)
{
 struct zfcp_dbf_pay *VAR_7 = &VAR_2->pay_buf;
 u16 VAR_8 = 0, VAR_9;

 FUNC_4(&VAR_2->pay_lock);
 FUNC_2(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->fsf_req_id = VAR_6;
 FUNC_1(VAR_7->area, VAR_5, VAR_1);

 while (VAR_8 < VAR_4) {
  VAR_9 = FUNC_3((u16) VAR_0,
     (u16) (VAR_4 - VAR_8));
  FUNC_1(VAR_7->data, VAR_3 + VAR_8, VAR_9);
  FUNC_0(VAR_2->pay, 1, VAR_7, FUNC_6(VAR_9));

  VAR_8 += VAR_9;
  VAR_7->counter++;
 }

 FUNC_5(&VAR_2->pay_lock);
}
