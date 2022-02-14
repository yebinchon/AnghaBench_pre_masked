
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_plog_s {int plog_enabled; scalar_t__ tail; scalar_t__ head; int plog_sig; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*,int ,int) ;

void
FUNC_2(struct bfa_plog_s *VAR_2)
{
 FUNC_1((char *)VAR_2, 0, sizeof(struct bfa_plog_s));

 FUNC_0(VAR_2->plog_sig, VAR_1, VAR_0);
 VAR_2->head = VAR_2->tail = 0;
 VAR_2->plog_enabled = 1;
}
