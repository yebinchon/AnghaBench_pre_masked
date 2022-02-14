
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct wilc_vif {scalar_t__ ndev; scalar_t__ mac_opened; } ;
struct wilc {int vif_num; int vif_mutex; struct wilc_vif** vif; scalar_t__ close; int txq_thread_started; int txq_event; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct wilc*,scalar_t__*) ;

__attribute__((used)) static int FUNC_8(void *VAR_2)
{
 int VAR_3;
 u32 VAR_4;
 struct wilc *VAR_5 = VAR_2;

 FUNC_0(&VAR_5->txq_thread_started);
 while (1) {
  FUNC_6(&VAR_5->txq_event);

  if (VAR_5->close) {
   FUNC_0(&VAR_5->txq_thread_started);

   while (!FUNC_1())
    FUNC_5();
   break;
  }
  do {
   VAR_3 = FUNC_7(VAR_5, &VAR_4);
   if (VAR_4 < VAR_1) {
    int VAR_6;
    struct wilc_vif *VAR_7;

    FUNC_2(&VAR_5->vif_mutex);
    for (VAR_6 = 0; VAR_6 < VAR_5->vif_num; VAR_6++) {
     VAR_7 = VAR_5->vif[VAR_6];
     if (VAR_7->mac_opened && VAR_7->ndev)
      FUNC_4(VAR_7->ndev);
    }
    FUNC_3(&VAR_5->vif_mutex);
   }
  } while (VAR_3 == -VAR_0 && !VAR_5->close);
 }
 return 0;
}
