
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dwevent; int bystate; } ;
union atto_vda_ae {TYPE_1__ lu; } ;
typedef int u32 ;
typedef int u16 ;
struct esas2r_target {scalar_t__ new_target_state; int lu_event; } ;
struct esas2r_adapter {int mem_lock; struct esas2r_target* targetdb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;



 int VAR_4 ;



 int FUNC_0 (struct esas2r_adapter*,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,TYPE_1__*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct esas2r_adapter *VAR_5, union atto_vda_ae *VAR_6,
        u16 VAR_7, u32 VAR_8)
{
 struct esas2r_target *VAR_9 = VAR_5->targetdb + VAR_7;
 u32 VAR_10 = VAR_8;
 unsigned long VAR_11;

 if (VAR_10 > sizeof(VAR_9->lu_event))
  VAR_10 = sizeof(VAR_9->lu_event);

 FUNC_1("ae->lu.dwevent: %x", VAR_6->lu.dwevent);
 FUNC_1("ae->lu.bystate: %x", VAR_6->lu.bystate);

 FUNC_3(&VAR_5->mem_lock, VAR_11);

 VAR_9->new_target_state = VAR_1;

 if (VAR_6->lu.dwevent & VAR_4) {
  VAR_9->new_target_state = VAR_2;
 } else {
  switch (VAR_6->lu.bystate) {
  case 130:
  case 129:
  case 132:
  case 131:
   VAR_9->new_target_state = VAR_2;
   break;

  case 128:
  case 133:
   VAR_9->new_target_state = VAR_3;
   break;
  }
 }

 if (VAR_9->new_target_state != VAR_1) {
  FUNC_2(&VAR_9->lu_event, &VAR_6->lu, VAR_10);

  FUNC_0(VAR_5, VAR_0);
 }

 FUNC_4(&VAR_5->mem_lock, VAR_11);
}
