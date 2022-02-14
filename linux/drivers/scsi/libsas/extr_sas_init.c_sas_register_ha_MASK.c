
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_ha_struct {void* event_q; int eh_ata_q; int eh_done_q; void* disco_q; int dev; int event_thres; int eh_dev_q; int defer_q; int eh_wait_q; int drain_mutex; int lock; int state; int sas_addr; int hashed_sas_addr; int phy_port_lock; int disco_mutex; } ;
typedef int name ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (void*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct sas_ha_struct*) ;
 int FUNC_9 (struct sas_ha_struct*) ;
 int FUNC_10 (struct sas_ha_struct*) ;
 int FUNC_11 (struct sas_ha_struct*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (char*,int,char*,char*) ;
 int FUNC_14 (int *) ;

int FUNC_15(struct sas_ha_struct *VAR_3)
{
 char VAR_4[64];
 int VAR_5 = 0;

 FUNC_5(&VAR_3->disco_mutex);
 FUNC_14(&VAR_3->phy_port_lock);
 FUNC_7(VAR_3->hashed_sas_addr, VAR_3->sas_addr);

 FUNC_12(VAR_1, &VAR_3->state);
 FUNC_14(&VAR_3->lock);
 FUNC_5(&VAR_3->drain_mutex);
 FUNC_4(&VAR_3->eh_wait_q);
 FUNC_0(&VAR_3->defer_q);
 FUNC_0(&VAR_3->eh_dev_q);

 VAR_3->event_thres = VAR_2;

 VAR_5 = FUNC_9(VAR_3);
 if (VAR_5) {
  FUNC_6("couldn't register sas phys:%d\n", VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_10(VAR_3);
 if (VAR_5) {
  FUNC_6("couldn't register sas ports:%d\n", VAR_5);
  goto Undo_phys;
 }

 VAR_5 = FUNC_8(VAR_3);
 if (VAR_5) {
  FUNC_6("couldn't start event thread:%d\n", VAR_5);
  goto Undo_ports;
 }

 VAR_5 = -VAR_0;
 FUNC_13(VAR_4, sizeof(VAR_4), "%s_event_q", FUNC_3(VAR_3->dev));
 VAR_3->event_q = FUNC_1(VAR_4);
 if (!VAR_3->event_q)
  goto Undo_ports;

 FUNC_13(VAR_4, sizeof(VAR_4), "%s_disco_q", FUNC_3(VAR_3->dev));
 VAR_3->disco_q = FUNC_1(VAR_4);
 if (!VAR_3->disco_q)
  goto Undo_event_q;

 FUNC_0(&VAR_3->eh_done_q);
 FUNC_0(&VAR_3->eh_ata_q);

 return 0;

Undo_event_q:
 FUNC_2(VAR_3->event_q);
Undo_ports:
 FUNC_11(VAR_3);
Undo_phys:

 return VAR_5;
}
