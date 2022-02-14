
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsm_mux {int event; } ;
struct gsm_control {int done; int error; } ;


 int FUNC_0 (struct gsm_control*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct gsm_mux *VAR_0, struct gsm_control *VAR_1)
{
 int VAR_2;
 FUNC_1(VAR_0->event, VAR_1->done == 1);
 VAR_2 = VAR_1->error;
 FUNC_0(VAR_1);
 return VAR_2;
}
