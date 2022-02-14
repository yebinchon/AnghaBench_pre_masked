
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct strm_dentry_t {int size; int valid_size; int start_clu; int flags; } ;
struct dentry_t {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct dentry_t*,int ) ;

void FUNC_3(struct strm_dentry_t *VAR_1, u8 VAR_2, u32 VAR_3, u64 VAR_4)
{
 FUNC_2((struct dentry_t *)VAR_1, VAR_0);
 VAR_1->flags = VAR_2;
 FUNC_0(VAR_1->start_clu, VAR_3);
 FUNC_1(VAR_1->valid_size, VAR_4);
 FUNC_1(VAR_1->size, VAR_4);
}
