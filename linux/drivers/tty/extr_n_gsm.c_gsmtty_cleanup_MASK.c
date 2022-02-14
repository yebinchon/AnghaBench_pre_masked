
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct gsm_dlci* driver_data; } ;
struct gsm_mux {struct gsm_dlci** dlci; } ;
struct gsm_dlci {struct gsm_mux* gsm; } ;


 int FUNC_0 (struct gsm_dlci*) ;
 int FUNC_1 (struct gsm_mux*) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_0)
{
 struct gsm_dlci *VAR_1 = VAR_0->driver_data;
 struct gsm_mux *VAR_2 = VAR_1->gsm;

 FUNC_0(VAR_1);
 FUNC_0(VAR_2->dlci[0]);
 FUNC_1(VAR_2);
}
