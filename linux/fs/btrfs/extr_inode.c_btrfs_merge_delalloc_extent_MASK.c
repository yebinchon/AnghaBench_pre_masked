
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct inode {int dummy; } ;
struct extent_state {int state; scalar_t__ start; scalar_t__ end; } ;
struct TYPE_3__ {int lock; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct inode *VAR_2, struct extent_state *VAR_3,
     struct extent_state *VAR_4)
{
 u64 VAR_5, VAR_6;
 u32 VAR_7;


 if (!(VAR_4->state & VAR_1))
  return;

 if (VAR_3->start > VAR_4->start)
  VAR_5 = VAR_3->end - VAR_4->start + 1;
 else
  VAR_5 = VAR_4->end - VAR_3->start + 1;


 if (VAR_5 <= VAR_0) {
  FUNC_3(&FUNC_0(VAR_2)->lock);
  FUNC_1(FUNC_0(VAR_2), -1);
  FUNC_4(&FUNC_0(VAR_2)->lock);
  return;
 }
 VAR_6 = VAR_4->end - VAR_4->start + 1;
 VAR_7 = FUNC_2(VAR_6);
 VAR_6 = VAR_3->end - VAR_3->start + 1;
 VAR_7 += FUNC_2(VAR_6);
 if (FUNC_2(VAR_5) >= VAR_7)
  return;

 FUNC_3(&FUNC_0(VAR_2)->lock);
 FUNC_1(FUNC_0(VAR_2), -1);
 FUNC_4(&FUNC_0(VAR_2)->lock);
}
