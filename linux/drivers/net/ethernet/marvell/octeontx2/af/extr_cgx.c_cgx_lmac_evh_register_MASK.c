
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgx_event_cb {int dummy; } ;
struct lmac {struct cgx_event_cb event_cb; } ;
struct cgx {int dummy; } ;


 int VAR_0 ;
 struct lmac* FUNC_0 (int,struct cgx*) ;

int FUNC_1(struct cgx_event_cb *VAR_1, void *VAR_2, int VAR_3)
{
 struct cgx *VAR_4 = VAR_2;
 struct lmac *VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->event_cb = *VAR_1;

 return 0;
}
