
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_sock {scalar_t__ context; } ;
struct bnx2i_endpoint {scalar_t__ conn; int hba; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct cnic_sock *VAR_1)
{
 struct bnx2i_endpoint *VAR_2 = (struct bnx2i_endpoint *) VAR_1->context;

 VAR_2->state = VAR_0;
 if (VAR_2->conn)
  FUNC_0(VAR_2->hba, VAR_2->conn);
}
