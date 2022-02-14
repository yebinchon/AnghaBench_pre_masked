
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofdpa_port {int rocker_port; struct ofdpa* ofdpa; } ;
struct ofdpa_flow_tbl_entry {size_t key_len; int key_crc32; int entry; int cmd; scalar_t__ cookie; int key; } ;
struct ofdpa {int flow_tbl_lock; int flow_tbl; int flow_tbl_next_cookie; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,size_t) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ofdpa_flow_tbl_entry*) ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 struct ofdpa_flow_tbl_entry* FUNC_5 (struct ofdpa*,struct ofdpa_flow_tbl_entry*) ;
 int FUNC_6 (int ,int ,int ,struct ofdpa_flow_tbl_entry*,int *,int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct ofdpa_port *VAR_3,
         int VAR_4, struct ofdpa_flow_tbl_entry *VAR_5)
{
 struct ofdpa *VAR_6 = VAR_3->ofdpa;
 struct ofdpa_flow_tbl_entry *VAR_7;
 size_t VAR_8 = VAR_5->key_len ? VAR_5->key_len : sizeof(VAR_7->key);
 unsigned long VAR_9;

 VAR_5->key_crc32 = FUNC_0(~0, &VAR_5->key, VAR_8);

 FUNC_7(&VAR_6->flow_tbl_lock, VAR_9);

 VAR_7 = FUNC_5(VAR_6, VAR_5);

 if (VAR_7) {
  VAR_5->cookie = VAR_7->cookie;
  FUNC_2(&VAR_7->entry);
  FUNC_3(VAR_7);
  VAR_7 = VAR_5;
  VAR_7->cmd = VAR_1;
 } else {
  VAR_7 = VAR_5;
  VAR_7->cookie = VAR_6->flow_tbl_next_cookie++;
  VAR_7->cmd = VAR_0;
 }

 FUNC_1(VAR_6->flow_tbl, &VAR_7->entry, VAR_7->key_crc32);
 FUNC_8(&VAR_6->flow_tbl_lock, VAR_9);

 return FUNC_6(VAR_3->rocker_port,
          FUNC_4(VAR_4),
          VAR_2,
          VAR_7, ((void*)0), ((void*)0));
}
