
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct metapage {int wait; int page; } ;
struct TYPE_2__ {int lockwait; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct metapage*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct metapage*) ;
 int FUNC_10 (int ) ;
 int VAR_4 ;

__attribute__((used)) static inline void FUNC_11(struct metapage *VAR_5)
{
 FUNC_0(VAR_4, VAR_2);
 FUNC_1(VAR_3.lockwait);
 FUNC_3(&VAR_5->wait, &VAR_4);
 do {
  FUNC_8(VAR_1);
  if (FUNC_6(VAR_5)) {
   FUNC_10(VAR_5->page);
   FUNC_4();
   FUNC_5(VAR_5->page);
  }
 } while (FUNC_9(VAR_5));
 FUNC_2(VAR_0);
 FUNC_7(&VAR_5->wait, &VAR_4);
}
