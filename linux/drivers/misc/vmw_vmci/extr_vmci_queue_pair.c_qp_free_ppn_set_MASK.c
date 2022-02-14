
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppn_set {int consume_ppns; int produce_ppns; scalar_t__ initialized; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ppn_set*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ppn_set *VAR_0)
{
 if (VAR_0->initialized) {

  FUNC_0(VAR_0->produce_ppns);
  FUNC_0(VAR_0->consume_ppns);
 }
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
}
