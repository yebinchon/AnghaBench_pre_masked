
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cnic_sock {scalar_t__ context; } ;
struct bnx2i_endpoint {scalar_t__ state; scalar_t__ conn; int hba; int ofld_wait; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct cnic_sock *VAR_2)
{
 struct bnx2i_endpoint *VAR_3 = (struct bnx2i_endpoint *) VAR_2->context;
 u32 VAR_4 = VAR_3->state;

 VAR_3->state = VAR_1;
 if (VAR_4 == VAR_0)
  FUNC_1(&VAR_3->ofld_wait);
 else
  if (VAR_3->conn)
   FUNC_0(VAR_3->hba, VAR_3->conn);
}
