
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yfs_xdr_YFSCallBack {int expiration_time; } ;
struct afs_callback {int expires_at; } ;
struct afs_status_cb {int have_cb; struct afs_callback callback; } ;
struct afs_call {int reply_time; } ;
typedef int ktime_t ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct yfs_xdr_YFSCallBack*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(const __be32 **VAR_1,
       struct afs_call *VAR_2,
       struct afs_status_cb *VAR_3)
{
 struct yfs_xdr_YFSCallBack *VAR_4 = (void *)*VAR_1;
 struct afs_callback *VAR_5 = &VAR_3->callback;
 ktime_t VAR_6;

 VAR_6 = VAR_2->reply_time;
 VAR_6 = FUNC_0(VAR_6, FUNC_3(VAR_4->expiration_time) * 100);
 VAR_5->expires_at = FUNC_1(VAR_6, VAR_0);
 VAR_3->have_cb = 1;
 *VAR_1 += FUNC_2(VAR_4);
}
