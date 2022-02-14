
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_hcb {scalar_t__ scripta0; } ;
struct sym_fw2a_scr {int data_out; int data_in; } ;
struct sym_fw {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sym_hcb*,struct sym_fw*) ;

__attribute__((used)) static void
FUNC_2(struct sym_hcb *VAR_0, struct sym_fw *VAR_1)
{
 struct sym_fw2a_scr *VAR_2;

 VAR_2 = (struct sym_fw2a_scr *) VAR_0->scripta0;




 FUNC_0(VAR_2->data_in, VAR_2->data_out);




 FUNC_1(VAR_0, VAR_1);
}
