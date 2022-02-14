
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofdpa_port {int rocker_port; struct ofdpa* ofdpa; } ;
struct ofdpa_flow_tbl_entry {size_t key_len; int cmd; int entry; int key; int key_crc32; } ;
struct ofdpa {int flow_tbl_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ofdpa_flow_tbl_entry*) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 struct ofdpa_flow_tbl_entry* FUNC_4 (struct ofdpa*,struct ofdpa_flow_tbl_entry*) ;
 int FUNC_5 (int ,int ,int ,struct ofdpa_flow_tbl_entry*,int *,int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct ofdpa_port *VAR_2,
         int VAR_3, struct ofdpa_flow_tbl_entry *VAR_4)
{
 struct ofdpa *VAR_5 = VAR_2->ofdpa;
 struct ofdpa_flow_tbl_entry *VAR_6;
 size_t VAR_7 = VAR_4->key_len ? VAR_4->key_len : sizeof(VAR_6->key);
 unsigned long VAR_8;
 int VAR_9 = 0;

 VAR_4->key_crc32 = FUNC_0(~0, &VAR_4->key, VAR_7);

 FUNC_6(&VAR_5->flow_tbl_lock, VAR_8);

 VAR_6 = FUNC_4(VAR_5, VAR_4);

 if (VAR_6) {
  FUNC_1(&VAR_6->entry);
  VAR_6->cmd = VAR_0;
 }

 FUNC_7(&VAR_5->flow_tbl_lock, VAR_8);

 FUNC_2(VAR_4);

 if (VAR_6) {
  VAR_9 = FUNC_5(VAR_2->rocker_port,
          FUNC_3(VAR_3),
          VAR_1,
          VAR_6, ((void*)0), ((void*)0));
  FUNC_2(VAR_6);
 }

 return VAR_9;
}
