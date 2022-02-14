
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofdpa_port {int rocker_port; struct ofdpa* ofdpa; } ;
struct ofdpa_group_tbl_entry {int group_id; int entry; int cmd; } ;
struct ofdpa {int group_tbl_lock; int group_tbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ofdpa_group_tbl_entry*) ;
 struct ofdpa_group_tbl_entry* FUNC_4 (struct ofdpa*,struct ofdpa_group_tbl_entry*) ;
 int FUNC_5 (int ,int ,int ,struct ofdpa_group_tbl_entry*,int *,int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct ofdpa_port *VAR_3, int VAR_4,
          struct ofdpa_group_tbl_entry *VAR_5)
{
 struct ofdpa *VAR_6 = VAR_3->ofdpa;
 struct ofdpa_group_tbl_entry *VAR_7;
 unsigned long VAR_8;

 FUNC_6(&VAR_6->group_tbl_lock, VAR_8);

 VAR_7 = FUNC_4(VAR_6, VAR_5);

 if (VAR_7) {
  FUNC_1(&VAR_7->entry);
  FUNC_3(VAR_7);
  VAR_7 = VAR_5;
  VAR_7->cmd = VAR_1;
 } else {
  VAR_7 = VAR_5;
  VAR_7->cmd = VAR_0;
 }

 FUNC_0(VAR_6->group_tbl, &VAR_7->entry, VAR_7->group_id);

 FUNC_7(&VAR_6->group_tbl_lock, VAR_8);

 return FUNC_5(VAR_3->rocker_port,
          FUNC_2(VAR_4),
          VAR_2,
          VAR_7, ((void*)0), ((void*)0));
}
