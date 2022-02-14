
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wilc {TYPE_1__* hif_func; } ;
struct TYPE_2__ {int (* hif_write_reg ) (struct wilc*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wilc*,int ) ;
 int FUNC_1 (struct wilc*,int ) ;
 int FUNC_2 (struct wilc*,int,int) ;

void FUNC_3(struct wilc *VAR_2)
{
 FUNC_0(VAR_2, VAR_0);
 VAR_2->hif_func->hif_write_reg(VAR_2, 0x10b0, 1);
 FUNC_1(VAR_2, VAR_1);
}
