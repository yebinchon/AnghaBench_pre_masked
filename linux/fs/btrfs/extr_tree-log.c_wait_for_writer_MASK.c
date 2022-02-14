
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root {int log_writer_wait; int log_mutex; int log_writers; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 () ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(struct btrfs_root *VAR_2)
{
 FUNC_0(VAR_1);

 for (;;) {
  FUNC_5(&VAR_2->log_writer_wait, &VAR_1,
    VAR_0);
  if (!FUNC_1(&VAR_2->log_writers))
   break;

  FUNC_4(&VAR_2->log_mutex);
  FUNC_6();
  FUNC_3(&VAR_2->log_mutex);
 }
 FUNC_2(&VAR_2->log_writer_wait, &VAR_1);
}
