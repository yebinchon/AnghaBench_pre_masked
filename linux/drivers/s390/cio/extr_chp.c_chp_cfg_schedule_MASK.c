
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chp_id {int id; int cssid; } ;


 int FUNC_0 (int,char*,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct chp_id,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct chp_id VAR_4, int VAR_5)
{
 FUNC_0(2, "chp_cfg_sched%x.%02x=%d\n", VAR_4.cssid, VAR_4.id,
        VAR_5);
 FUNC_3(&VAR_2);
 FUNC_1(VAR_4, VAR_5 ? VAR_0 : VAR_1);
 FUNC_4(&VAR_2);
 FUNC_2(&VAR_3);
}
