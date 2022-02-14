
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc {void* mac_status; int sync_event; } ;
typedef void* s8 ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct wilc*,int ,void**,int) ;

void FUNC_2(struct wilc *VAR_2)
{
 s8 VAR_3;

 FUNC_1(VAR_2, VAR_0, &VAR_3, 1);
 if (VAR_2->mac_status == VAR_1) {
  VAR_2->mac_status = VAR_3;
  FUNC_0(&VAR_2->sync_event);
 } else {
  VAR_2->mac_status = VAR_3;
 }
}
