
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rio_channel {int id; int comp_close; int comp; } ;
typedef enum rio_cm_state { ____Placeholder_rio_cm_state } rio_cm_state ;
struct TYPE_3__ {int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (struct rio_channel*) ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int ,...) ;
 int FUNC_4 (struct rio_channel*,int ) ;
 int FUNC_5 (struct rio_channel*) ;
 int FUNC_6 (struct rio_channel*) ;
 int FUNC_7 (TYPE_1__*) ;
 long FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct rio_channel *VAR_8)
{
 unsigned long VAR_9 = FUNC_2(3000);
 enum rio_cm_state VAR_10;
 long VAR_11;
 int VAR_12 = 0;

 FUNC_3(VAR_0, "ch_%d by %s(%d)",
      VAR_8->id, VAR_7->comm, FUNC_7(VAR_7));

 VAR_10 = FUNC_4(VAR_8, VAR_5);
 if (VAR_10 == VAR_4)
  FUNC_6(VAR_8);

 FUNC_0(&VAR_8->comp);

 FUNC_5(VAR_8);
 VAR_11 = FUNC_8(&VAR_8->comp_close, VAR_9);

 FUNC_3(VAR_6, "wait on %d returns %ld", VAR_8->id, VAR_11);

 if (VAR_11 == 0) {

  FUNC_3(VAR_0, "%s(%d) timed out waiting for ch %d",
         VAR_7->comm, FUNC_7(VAR_7), VAR_8->id);
  VAR_12 = -VAR_3;
 } else if (VAR_11 == -VAR_2) {

  FUNC_3(VAR_0, "%s(%d) wait for ch %d was interrupted",
   VAR_7->comm, FUNC_7(VAR_7), VAR_8->id);
  VAR_12 = -VAR_1;
 }

 if (!VAR_12) {
  FUNC_3(VAR_0, "ch_%d resources released", VAR_8->id);
  FUNC_1(VAR_8);
 } else {
  FUNC_3(VAR_0, "failed to release ch_%d resources", VAR_8->id);
 }

 return VAR_12;
}
