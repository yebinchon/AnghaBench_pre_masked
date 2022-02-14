
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct yfs_xdr_YFSFetchStatus {int data_version; int size; int mtime_server; int mtime_client; int lock_count; int group; int mode; int anon_access; int caller_access; int owner; int author; int nlink; int type; int abort_code; } ;
struct afs_file_status {int abort_code; int nlink; int type; int caller_access; int anon_access; int mode; int lock_count; void* data_version; void* size; void* mtime_server; void* mtime_client; void* group; void* owner; void* author; } ;
struct afs_status_cb {int have_error; int have_status; struct afs_file_status status; } ;
struct afs_call {int dummy; } ;
typedef int __be32 ;





 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct afs_call*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (struct yfs_xdr_YFSFetchStatus const*) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(const __be32 **VAR_4,
         struct afs_call *VAR_5,
         struct afs_status_cb *VAR_6)
{
 const struct yfs_xdr_YFSFetchStatus *VAR_7 = (const void *)*VAR_4;
 struct afs_file_status *VAR_8 = &VAR_6->status;
 u32 VAR_9;

 VAR_8->abort_code = FUNC_1(VAR_7->abort_code);
 if (VAR_8->abort_code != 0) {
  if (VAR_8->abort_code == VAR_2)
   VAR_8->nlink = 0;
  VAR_6->have_error = 1;
  return 0;
 }

 VAR_9 = FUNC_1(VAR_7->type);
 switch (VAR_9) {
 case 129:
 case 130:
 case 128:
  VAR_8->type = VAR_9;
  break;
 default:
  goto bad;
 }

 VAR_8->nlink = FUNC_1(VAR_7->nlink);
 VAR_8->author = FUNC_5(VAR_7->author);
 VAR_8->owner = FUNC_5(VAR_7->owner);
 VAR_8->caller_access = FUNC_1(VAR_7->caller_access);
 VAR_8->anon_access = FUNC_1(VAR_7->anon_access);
 VAR_8->mode = FUNC_1(VAR_7->mode) & VAR_1;
 VAR_8->group = FUNC_5(VAR_7->group);
 VAR_8->lock_count = FUNC_1(VAR_7->lock_count);

 VAR_8->mtime_client = FUNC_4(VAR_7->mtime_client);
 VAR_8->mtime_server = FUNC_4(VAR_7->mtime_server);
 VAR_8->size = FUNC_5(VAR_7->size);
 VAR_8->data_version = FUNC_5(VAR_7->data_version);
 VAR_6->have_status = 1;

 *VAR_4 += FUNC_3(VAR_7);
 return 0;

bad:
 FUNC_2(*VAR_4);
 return FUNC_0(VAR_5, -VAR_0, VAR_3);
}
