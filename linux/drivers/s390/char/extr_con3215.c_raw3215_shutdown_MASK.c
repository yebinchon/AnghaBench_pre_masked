
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3215_info {int flags; int cdev; int port; int empty_wait; int * queued_read; int * queued_write; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_10(struct raw3215_info *VAR_6)
{
 FUNC_0(VAR_5, VAR_4);
 unsigned long VAR_7;

 if (!FUNC_8(&VAR_6->port) || (VAR_6->flags & VAR_0))
  return;

 FUNC_6(FUNC_2(VAR_6->cdev), VAR_7);
 if ((VAR_6->flags & VAR_1) ||
     VAR_6->queued_write != ((void*)0) ||
     VAR_6->queued_read != ((void*)0)) {
  FUNC_1(&VAR_6->empty_wait, &VAR_5);
  FUNC_5(VAR_2);
  FUNC_7(FUNC_2(VAR_6->cdev), VAR_7);
  FUNC_4();
  FUNC_6(FUNC_2(VAR_6->cdev), VAR_7);
  FUNC_3(&VAR_6->empty_wait, &VAR_5);
  FUNC_5(VAR_3);
  FUNC_9(&VAR_6->port, 1);
 }
 FUNC_7(FUNC_2(VAR_6->cdev), VAR_7);
}
