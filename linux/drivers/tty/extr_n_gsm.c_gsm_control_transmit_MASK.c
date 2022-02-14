
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsm_mux {int * dlci; int ftype; } ;
struct gsm_msg {int* data; } ;
struct gsm_control {int cmd; int len; int data; } ;


 int VAR_0 ;
 struct gsm_msg* FUNC_0 (struct gsm_mux*,int ,int ,int ) ;
 int FUNC_1 (int ,struct gsm_msg*) ;
 int FUNC_2 (int*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct gsm_mux *VAR_1, struct gsm_control *VAR_2)
{
 struct gsm_msg *VAR_3 = FUNC_0(VAR_1, 0, VAR_2->len + 1, VAR_1->ftype);
 if (VAR_3 == ((void*)0))
  return;
 VAR_3->data[0] = (VAR_2->cmd << 1) | 2 | VAR_0;
 FUNC_2(VAR_3->data + 1, VAR_2->data, VAR_2->len);
 FUNC_1(VAR_1->dlci[0], VAR_3);
}
