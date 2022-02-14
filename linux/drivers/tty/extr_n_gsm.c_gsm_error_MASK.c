
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsm_mux {int io_error; int state; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct gsm_mux *VAR_1,
    unsigned char VAR_2, unsigned char VAR_3)
{
 VAR_1->state = VAR_0;
 VAR_1->io_error++;
}
