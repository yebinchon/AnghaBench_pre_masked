
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_data_s {int work_write_wakeup; int lock; int tx_waitq; int txq; } ;


 long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct st_data_s*) ;
 struct st_data_s* FUNC_2 (int,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 long FUNC_7 (struct st_data_s*) ;
 long FUNC_8 (int ,int *) ;
 long FUNC_9 (int ) ;
 int VAR_4 ;

int FUNC_10(struct st_data_s **VAR_5)
{
 struct st_data_s *VAR_6;
 long VAR_7;

 VAR_7 = FUNC_8(VAR_2, &VAR_3);
 if (VAR_7) {
  FUNC_4("error registering %d line discipline %ld",
      VAR_2, VAR_7);
  return VAR_7;
 }
 FUNC_3("registered n_shared line discipline");

 VAR_6 = FUNC_2(sizeof(struct st_data_s), VAR_1);
 if (!VAR_6) {
  FUNC_4("memory allocation failed");
  VAR_7 = FUNC_9(VAR_2);
  if (VAR_7)
   FUNC_4("unable to un-register ldisc %ld", VAR_7);
  VAR_7 = -VAR_0;
  return VAR_7;
 }




 FUNC_5(&VAR_6->txq);
 FUNC_5(&VAR_6->tx_waitq);


 FUNC_6(&VAR_6->lock);

 VAR_7 = FUNC_7(VAR_6);
 if (VAR_7) {
  FUNC_4("error during st_ll initialization(%ld)", VAR_7);
  FUNC_1(VAR_6);
  VAR_7 = FUNC_9(VAR_2);
  if (VAR_7)
   FUNC_4("unable to un-register ldisc");
  return VAR_7;
 }

 FUNC_0(&VAR_6->work_write_wakeup, VAR_4);

 *VAR_5 = VAR_6;
 return 0;
}
