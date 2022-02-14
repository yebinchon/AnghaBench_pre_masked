
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofdpa_port {int rocker_port; struct ofdpa* ofdpa; } ;
struct ofdpa_group_tbl_entry {int cmd; int entry; } ;
struct ofdpa {int group_tbl_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ofdpa_group_tbl_entry*) ;
 struct ofdpa_group_tbl_entry* FUNC_3 (struct ofdpa*,struct ofdpa_group_tbl_entry*) ;
 int FUNC_4 (int ,int ,int ,struct ofdpa_group_tbl_entry*,int *,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct ofdpa_port *VAR_2, int VAR_3,
          struct ofdpa_group_tbl_entry *VAR_4)
{
 struct ofdpa *VAR_5 = VAR_2->ofdpa;
 struct ofdpa_group_tbl_entry *VAR_6;
 unsigned long VAR_7;
 int VAR_8 = 0;

 FUNC_5(&VAR_5->group_tbl_lock, VAR_7);

 VAR_6 = FUNC_3(VAR_5, VAR_4);

 if (VAR_6) {
  FUNC_0(&VAR_6->entry);
  VAR_6->cmd = VAR_0;
 }

 FUNC_6(&VAR_5->group_tbl_lock, VAR_7);

 FUNC_2(VAR_4);

 if (VAR_6) {
  VAR_8 = FUNC_4(VAR_2->rocker_port,
          FUNC_1(VAR_3),
          VAR_1,
          VAR_6, ((void*)0), ((void*)0));
  FUNC_2(VAR_6);
 }

 return VAR_8;
}
