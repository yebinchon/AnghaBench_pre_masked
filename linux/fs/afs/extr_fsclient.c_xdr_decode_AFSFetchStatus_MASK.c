
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct afs_xdr_AFSFetchStatus {scalar_t__ abort_code; scalar_t__ if_version; scalar_t__ type; scalar_t__ nlink; scalar_t__ author; scalar_t__ owner; scalar_t__ caller_access; scalar_t__ anon_access; scalar_t__ mode; scalar_t__ group; scalar_t__ lock_count; scalar_t__ mtime_client; scalar_t__ mtime_server; scalar_t__ size_lo; scalar_t__ size_hi; scalar_t__ data_version_lo; scalar_t__ data_version_hi; } ;
struct TYPE_4__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_3__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct afs_file_status {int size; int data_version; TYPE_2__ mtime_server; TYPE_1__ mtime_client; scalar_t__ lock_count; scalar_t__ group; scalar_t__ mode; scalar_t__ anon_access; scalar_t__ caller_access; scalar_t__ owner; scalar_t__ author; scalar_t__ nlink; scalar_t__ type; scalar_t__ abort_code; } ;
struct afs_status_cb {int have_error; int have_status; struct afs_file_status status; } ;
struct afs_call {scalar_t__ operation_ID; } ;
typedef int __be32 ;


 int VAR_0 ;



 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct afs_call*,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (int const*) ;

__attribute__((used)) static int FUNC_5(const __be32 **VAR_5,
         struct afs_call *VAR_6,
         struct afs_status_cb *VAR_7)
{
 const struct afs_xdr_AFSFetchStatus *VAR_8 = (const void *)*VAR_5;
 struct afs_file_status *VAR_9 = &VAR_7->status;
 bool VAR_10 = (VAR_6->operation_ID == VAR_3);
 u64 VAR_11, VAR_12;
 u32 VAR_13, VAR_14;

 VAR_14 = FUNC_2(VAR_8->abort_code);

 if (VAR_8->if_version != FUNC_1(VAR_0)) {
  if (VAR_8->if_version == FUNC_1(0) &&
      VAR_14 != 0 &&
      VAR_10) {




   VAR_9->abort_code = VAR_14;
   VAR_7->have_error = 1;
   return 0;
  }

  FUNC_3("Unknown AFSFetchStatus version %u\n", FUNC_2(VAR_8->if_version));
  goto bad;
 }

 if (VAR_14 != 0 && VAR_10) {
  VAR_9->abort_code = VAR_14;
  return 0;
 }

 VAR_13 = FUNC_2(VAR_8->type);
 switch (VAR_13) {
 case 129:
 case 130:
 case 128:
  VAR_9->type = VAR_13;
  break;
 default:
  goto bad;
 }

 VAR_9->nlink = FUNC_2(VAR_8->nlink);
 VAR_9->author = FUNC_2(VAR_8->author);
 VAR_9->owner = FUNC_2(VAR_8->owner);
 VAR_9->caller_access = FUNC_2(VAR_8->caller_access);
 VAR_9->anon_access = FUNC_2(VAR_8->anon_access);
 VAR_9->mode = FUNC_2(VAR_8->mode) & VAR_2;
 VAR_9->group = FUNC_2(VAR_8->group);
 VAR_9->lock_count = FUNC_2(VAR_8->lock_count);

 VAR_9->mtime_client.tv_sec = FUNC_2(VAR_8->mtime_client);
 VAR_9->mtime_client.tv_nsec = 0;
 VAR_9->mtime_server.tv_sec = FUNC_2(VAR_8->mtime_server);
 VAR_9->mtime_server.tv_nsec = 0;

 VAR_12 = (u64)FUNC_2(VAR_8->size_lo);
 VAR_12 |= (u64)FUNC_2(VAR_8->size_hi) << 32;
 VAR_9->size = VAR_12;

 VAR_11 = (u64)FUNC_2(VAR_8->data_version_lo);
 VAR_11 |= (u64)FUNC_2(VAR_8->data_version_hi) << 32;
 VAR_9->data_version = VAR_11;
 VAR_7->have_status = 1;

 *VAR_5 = (const void *)*VAR_5 + sizeof(*VAR_8);
 return 0;

bad:
 FUNC_4(*VAR_5);
 return FUNC_0(VAR_6, -VAR_1, VAR_4);
}
