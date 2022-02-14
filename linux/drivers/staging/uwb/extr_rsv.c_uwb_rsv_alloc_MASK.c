
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rsv {int handle_timeout_work; struct uwb_rc* rc; int timer; int kref; int pal_node; int rc_node; } ;
struct uwb_rc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 struct uwb_rsv* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct uwb_rsv *FUNC_5(struct uwb_rc *VAR_3)
{
 struct uwb_rsv *VAR_4;

 VAR_4 = FUNC_3(sizeof(struct uwb_rsv), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_0(&VAR_4->rc_node);
 FUNC_0(&VAR_4->pal_node);
 FUNC_2(&VAR_4->kref);
 FUNC_4(&VAR_4->timer, VAR_2, 0);

 VAR_4->rc = VAR_3;
 FUNC_1(&VAR_4->handle_timeout_work, VAR_1);

 return VAR_4;
}
