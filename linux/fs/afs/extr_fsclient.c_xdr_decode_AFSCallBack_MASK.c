
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_callback {int expires_at; } ;
struct afs_status_cb {int have_cb; struct afs_callback callback; } ;
struct afs_call {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct afs_call*,int ) ;

__attribute__((used)) static void FUNC_2(const __be32 **VAR_0,
       struct afs_call *VAR_1,
       struct afs_status_cb *VAR_2)
{
 struct afs_callback *VAR_3 = &VAR_2->callback;
 const __be32 *VAR_4 = *VAR_0;

 VAR_4++;
 VAR_3->expires_at = FUNC_1(VAR_1, FUNC_0(*VAR_4++));
 VAR_4++;
 VAR_2->have_cb = 1;
 *VAR_0 = VAR_4;
}
