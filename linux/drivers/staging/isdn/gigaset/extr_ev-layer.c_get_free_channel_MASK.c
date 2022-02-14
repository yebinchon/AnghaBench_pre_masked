
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cardstate {int channels; int lock; int temp_at_states; TYPE_1__* bcs; } ;
struct at_state_t {int cid; int list; } ;
struct TYPE_2__ {struct at_state_t at_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct at_state_t*,int *,struct cardstate*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 struct at_state_t* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static inline struct at_state_t *FUNC_6(struct cardstate *VAR_1,
        int VAR_2)




{
 unsigned long VAR_3;
 int VAR_4;
 struct at_state_t *VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_1->channels; ++VAR_4)
  if (FUNC_1(VAR_1->bcs + VAR_4) >= 0) {
   VAR_5 = &VAR_1->bcs[VAR_4].at_state;
   VAR_5->cid = VAR_2;
   return VAR_5;
  }

 FUNC_4(&VAR_1->lock, VAR_3);
 VAR_5 = FUNC_2(sizeof(struct at_state_t), VAR_0);
 if (VAR_5) {
  FUNC_0(VAR_5, ((void*)0), VAR_1, VAR_2);
  FUNC_3(&VAR_5->list, &VAR_1->temp_at_states);
 }
 FUNC_5(&VAR_1->lock, VAR_3);
 return VAR_5;
}
