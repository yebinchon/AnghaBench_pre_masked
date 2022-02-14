
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofdpa_port {int dev; struct ofdpa* ofdpa; } ;
struct ofdpa_internal_vlan_tbl_entry {int ifindex; int vlan_id; int ref_count; int entry; } ;
struct ofdpa {int internal_vlan_tbl_lock; int internal_vlan_bitmap; int internal_vlan_tbl; } ;
typedef int __be16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ofdpa_internal_vlan_tbl_entry*) ;
 struct ofdpa_internal_vlan_tbl_entry* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,char*) ;
 struct ofdpa_internal_vlan_tbl_entry* FUNC_5 (struct ofdpa*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int,int ) ;

__attribute__((used)) static __be16 FUNC_9(struct ofdpa_port *VAR_3,
           int VAR_4)
{
 struct ofdpa *VAR_5 = VAR_3->ofdpa;
 struct ofdpa_internal_vlan_tbl_entry *VAR_6;
 struct ofdpa_internal_vlan_tbl_entry *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return 0;

 VAR_6->ifindex = VAR_4;

 FUNC_6(&VAR_5->internal_vlan_tbl_lock, VAR_8);

 VAR_7 = FUNC_5(VAR_5, VAR_4);
 if (VAR_7) {
  FUNC_2(VAR_6);
  goto found;
 }

 VAR_7 = VAR_6;
 FUNC_0(VAR_5->internal_vlan_tbl, &VAR_7->entry, VAR_7->ifindex);

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  if (FUNC_8(VAR_9, VAR_5->internal_vlan_bitmap))
   continue;
  VAR_7->vlan_id = FUNC_1(VAR_1 + VAR_9);
  goto found;
 }

 FUNC_4(VAR_3->dev, "Out of internal VLAN IDs\n");

found:
 VAR_7->ref_count++;
 FUNC_7(&VAR_5->internal_vlan_tbl_lock, VAR_8);

 return VAR_7->vlan_id;
}
