
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ofdpa_port {struct ofdpa* ofdpa; } ;
struct TYPE_2__ {int vlan_id; int addr; struct ofdpa_port* ofdpa_port; } ;
struct ofdpa_fdb_tbl_entry {int learned; int key_crc32; int entry; void* touched; TYPE_1__ key; } ;
struct ofdpa {int fdb_tbl_lock; int fdb_tbl; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_1__*,int) ;
 int FUNC_1 (int ,unsigned char const*) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *) ;
 void* VAR_5 ;
 int FUNC_4 (struct ofdpa_fdb_tbl_entry*) ;
 struct ofdpa_fdb_tbl_entry* FUNC_5 (int,int ) ;
 struct ofdpa_fdb_tbl_entry* FUNC_6 (struct ofdpa*,struct ofdpa_fdb_tbl_entry*) ;
 int FUNC_7 (struct ofdpa_port*,int,unsigned char const*,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct ofdpa_port *VAR_6,
     const unsigned char *VAR_7,
     __be16 VAR_8, int VAR_9)
{
 struct ofdpa *VAR_10 = VAR_6->ofdpa;
 struct ofdpa_fdb_tbl_entry *VAR_11;
 struct ofdpa_fdb_tbl_entry *VAR_12;
 bool VAR_13 = (VAR_9 & VAR_4);
 unsigned long VAR_14;

 VAR_11 = FUNC_5(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->learned = (VAR_9 & VAR_2);
 VAR_11->touched = VAR_5;
 VAR_11->key.ofdpa_port = VAR_6;
 FUNC_1(VAR_11->key.addr, VAR_7);
 VAR_11->key.vlan_id = VAR_8;
 VAR_11->key_crc32 = FUNC_0(~0, &VAR_11->key, sizeof(VAR_11->key));

 FUNC_8(&VAR_10->fdb_tbl_lock, VAR_14);

 VAR_12 = FUNC_6(VAR_10, VAR_11);

 if (VAR_12) {
  VAR_12->touched = VAR_5;
  if (VAR_13) {
   FUNC_4(VAR_11);
   FUNC_3(&VAR_12->entry);
  }
 } else if (!VAR_13) {
  FUNC_2(VAR_10->fdb_tbl, &VAR_11->entry,
    VAR_11->key_crc32);
 }

 FUNC_9(&VAR_10->fdb_tbl_lock, VAR_14);


 if (!VAR_12 != !VAR_13) {
  FUNC_4(VAR_11);
  if (!VAR_12 && VAR_13)
   return 0;

  VAR_9 |= VAR_3;
 }

 return FUNC_7(VAR_6, VAR_9, VAR_7, VAR_8);
}
