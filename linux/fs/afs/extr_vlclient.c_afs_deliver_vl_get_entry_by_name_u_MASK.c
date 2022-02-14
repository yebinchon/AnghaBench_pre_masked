
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct afs_vldb_entry {int nr_servers; int flags; int error; void** vid; int * fs_server; int * fs_mask; void** name; int name_len; } ;
struct afs_uvldbentry__xdr {int * volumeId; struct afs_uuid__xdr* serverNumber; int * serverFlags; int flags; int * name; int nServers; } ;
struct afs_uuid__xdr {int * node; int clock_seq_low; int clock_seq_hi_and_reserved; int time_hi_and_version; int time_mid; int time_low; } ;
struct afs_uuid {void** node; void* clock_seq_low; void* clock_seq_hi_and_reserved; void* time_hi_and_version; void* time_mid; int time_low; } ;
struct afs_call {struct afs_vldb_entry* ret_vldb; struct afs_uvldbentry__xdr* buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int *) ;
 int VAR_17 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct afs_call*) ;
 void* FUNC_5 (void*) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (void**) ;

__attribute__((used)) static int FUNC_8(struct afs_call *VAR_18)
{
 struct afs_uvldbentry__xdr *VAR_19;
 struct afs_vldb_entry *VAR_20;
 bool VAR_21 = 0;
 u32 VAR_22, VAR_23, VAR_24;
 int VAR_25, VAR_26;

 FUNC_2("");

 VAR_26 = FUNC_4(VAR_18);
 if (VAR_26 < 0)
  return VAR_26;


 VAR_19 = VAR_18->buffer;
 VAR_20 = VAR_18->ret_vldb;

 VAR_23 = FUNC_6(VAR_19->nServers);
 if (VAR_23 > VAR_1)
  VAR_23 = VAR_1;

 for (VAR_25 = 0; VAR_25 < FUNC_0(VAR_19->name) - 1; VAR_25++)
  VAR_20->name[VAR_25] = (u8)FUNC_6(VAR_19->name[VAR_25]);
 VAR_20->name[VAR_25] = 0;
 VAR_20->name_len = FUNC_7(VAR_20->name);




 for (VAR_25 = 0; VAR_25 < VAR_23; VAR_25++) {
  VAR_22 = FUNC_6(VAR_19->serverFlags[VAR_25]);
  if (!(VAR_22 & VAR_10) &&
      (VAR_22 & VAR_11))
   VAR_21 = 1;
 }

 VAR_24 = FUNC_6(VAR_19->flags);
 for (VAR_25 = 0; VAR_25 < VAR_23; VAR_25++) {
  struct afs_uuid__xdr *VAR_27;
  struct afs_uuid *VAR_28;
  int VAR_29;
  int VAR_30 = VAR_20->nr_servers;

  VAR_22 = FUNC_6(VAR_19->serverFlags[VAR_25]);
  if (VAR_22 & VAR_10 ||
      (VAR_21 && !(VAR_22 & VAR_11)))
   continue;
  if (VAR_22 & VAR_13) {
   VAR_20->fs_mask[VAR_30] |= VAR_16;
   if (VAR_24 & VAR_7)
    VAR_20->fs_mask[VAR_30] |= VAR_14;
  }
  if (VAR_22 & VAR_12)
   VAR_20->fs_mask[VAR_30] |= VAR_15;
  if (!VAR_20->fs_mask[VAR_30])
   continue;

  VAR_27 = &VAR_19->serverNumber[VAR_25];
  VAR_28 = (struct afs_uuid *)&VAR_20->fs_server[VAR_30];
  VAR_28->time_low = VAR_27->time_low;
  VAR_28->time_mid = FUNC_5(FUNC_6(VAR_27->time_mid));
  VAR_28->time_hi_and_version = FUNC_5(FUNC_6(VAR_27->time_hi_and_version));
  VAR_28->clock_seq_hi_and_reserved = (u8)FUNC_6(VAR_27->clock_seq_hi_and_reserved);
  VAR_28->clock_seq_low = (u8)FUNC_6(VAR_27->clock_seq_low);
  for (VAR_29 = 0; VAR_29 < 6; VAR_29++)
   VAR_28->node[VAR_29] = (u8)FUNC_6(VAR_27->node[VAR_29]);

  VAR_20->nr_servers++;
 }

 for (VAR_25 = 0; VAR_25 < VAR_0; VAR_25++)
  VAR_20->vid[VAR_25] = FUNC_6(VAR_19->volumeId[VAR_25]);

 if (VAR_24 & VAR_9)
  FUNC_1(VAR_4, &VAR_20->flags);
 if (VAR_24 & VAR_8)
  FUNC_1(VAR_3, &VAR_20->flags);
 if (VAR_24 & VAR_7)
  FUNC_1(VAR_2, &VAR_20->flags);

 if (!(VAR_24 & (VAR_9 | VAR_8 | VAR_7))) {
  VAR_20->error = -VAR_17;
  FUNC_1(VAR_5, &VAR_20->flags);
 }

 FUNC_1(VAR_6, &VAR_20->flags);
 FUNC_3(" = 0 [done]");
 return 0;
}
