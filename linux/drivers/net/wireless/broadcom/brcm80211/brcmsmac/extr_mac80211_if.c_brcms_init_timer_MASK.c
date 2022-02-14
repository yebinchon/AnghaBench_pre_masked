
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_timer {void (* fn ) (void*) ;int name; struct brcms_timer* next; void* arg; struct brcms_info* wl; int dly_wrk; } ;
struct brcms_info {struct brcms_timer* timers; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (char const*,int ) ;
 struct brcms_timer* FUNC_2 (int,int ) ;

struct brcms_timer *FUNC_3(struct brcms_info *VAR_2,
         void (*VAR_3) (void *VAR_4),
         void *VAR_5, const char *VAR_6)
{
 struct brcms_timer *VAR_7;

 VAR_7 = FUNC_2(sizeof(struct brcms_timer), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 FUNC_0(&VAR_7->dly_wrk, VAR_1);
 VAR_7->wl = VAR_2;
 VAR_7->fn = VAR_3;
 VAR_7->arg = VAR_5;
 VAR_7->next = VAR_2->timers;
 VAR_2->timers = VAR_7;





 return VAR_7;
}
