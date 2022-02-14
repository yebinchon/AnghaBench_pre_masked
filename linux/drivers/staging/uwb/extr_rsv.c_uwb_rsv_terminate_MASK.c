
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rsv {scalar_t__ state; struct uwb_rc* rc; } ;
struct uwb_rc {int rsvs_mutex; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uwb_rsv*,scalar_t__) ;

void FUNC_3(struct uwb_rsv *VAR_1)
{
 struct uwb_rc *VAR_2 = VAR_1->rc;

 FUNC_0(&VAR_2->rsvs_mutex);

 if (VAR_1->state != VAR_0)
  FUNC_2(VAR_1, VAR_0);

 FUNC_1(&VAR_2->rsvs_mutex);
}
