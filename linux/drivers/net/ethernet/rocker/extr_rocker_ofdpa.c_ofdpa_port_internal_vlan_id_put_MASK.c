
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofdpa_port {int dev; struct ofdpa* ofdpa; } ;
struct ofdpa_internal_vlan_tbl_entry {scalar_t__ ref_count; int entry; int vlan_id; } ;
struct ofdpa {int internal_vlan_tbl_lock; int internal_vlan_bitmap; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ofdpa_internal_vlan_tbl_entry*) ;
 int FUNC_3 (int ,char*,int) ;
 unsigned long FUNC_4 (int ) ;
 struct ofdpa_internal_vlan_tbl_entry* FUNC_5 (struct ofdpa*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_8(const struct ofdpa_port *VAR_1,
    int VAR_2)
{
 struct ofdpa *VAR_3 = VAR_1->ofdpa;
 struct ofdpa_internal_vlan_tbl_entry *VAR_4;
 unsigned long VAR_5;
 unsigned long VAR_6;

 FUNC_6(&VAR_3->internal_vlan_tbl_lock, VAR_5);

 VAR_4 = FUNC_5(VAR_3, VAR_2);
 if (!VAR_4) {
  FUNC_3(VAR_1->dev,
      "ifindex (%d) not found in internal VLAN tbl\n",
      VAR_2);
  goto not_found;
 }

 if (--VAR_4->ref_count <= 0) {
  VAR_6 = FUNC_4(VAR_4->vlan_id) - VAR_0;
  FUNC_0(VAR_6, VAR_3->internal_vlan_bitmap);
  FUNC_1(&VAR_4->entry);
  FUNC_2(VAR_4);
 }

not_found:
 FUNC_7(&VAR_3->internal_vlan_tbl_lock, VAR_5);
}
