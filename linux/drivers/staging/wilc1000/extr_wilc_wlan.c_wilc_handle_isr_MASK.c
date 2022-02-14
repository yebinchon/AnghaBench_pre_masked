
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wilc {TYPE_1__* hif_func; } ;
struct TYPE_2__ {int (* hif_read_int ) (struct wilc*,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wilc*,int ) ;
 int FUNC_1 (struct wilc*,int ) ;
 int FUNC_2 (struct wilc*,int*) ;
 int FUNC_3 (struct wilc*) ;
 int FUNC_4 (struct wilc*,int) ;

void FUNC_5(struct wilc *VAR_4)
{
 u32 VAR_5;

 FUNC_0(VAR_4, VAR_2);
 VAR_4->hif_func->hif_read_int(VAR_4, &VAR_5);

 if (VAR_5 & VAR_1)
  FUNC_4(VAR_4, VAR_5);

 if (!(VAR_5 & (VAR_0)))
  FUNC_3(VAR_4);

 FUNC_1(VAR_4, VAR_3);
}
