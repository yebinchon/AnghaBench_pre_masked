
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bam_transaction {int wait_second_completion; int txn_done; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct bam_transaction *VAR_1 = VAR_0;
 if (VAR_1->wait_second_completion)
  VAR_1->wait_second_completion = 0;
 else
  FUNC_0(&VAR_1->txn_done);
}
