
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lcs_channel {TYPE_1__* ccws; struct lcs_buffer* iob; } ;
struct lcs_buffer {scalar_t__ state; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,int ,char*) ;
 int VAR_4 ;
 int FUNC_2 (struct lcs_channel*,int) ;
 int FUNC_3 (struct lcs_channel*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_4(struct lcs_channel *VAR_6, struct lcs_buffer *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;

 FUNC_1(5, VAR_5, "prcsbuff");
 FUNC_0(VAR_7->state != VAR_3);
 VAR_7->state = VAR_2;
 VAR_8 = VAR_7 - VAR_6->iob;
 VAR_9 = (VAR_8 - 1) & (VAR_4 - 1);
 VAR_10 = (VAR_8 + 1) & (VAR_4 - 1);

 VAR_6->ccws[VAR_8].flags |= VAR_1;
 VAR_6->ccws[VAR_8].flags &= ~VAR_0;

 if (VAR_6->iob[VAR_9].state == VAR_3) {






  FUNC_2(VAR_6, VAR_9);
 }

 VAR_6->ccws[VAR_10].flags &= ~VAR_0;
 return FUNC_3(VAR_6);
}
