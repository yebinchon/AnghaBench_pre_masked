
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct qstr {int dummy; } ;
struct hfs_cat_thread {int dummy; } ;
struct TYPE_4__ {int CName; int ParID; int reserved; } ;
struct TYPE_5__ {int type; TYPE_1__ thread; } ;
typedef TYPE_2__ hfs_cat_rec ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct super_block*,int *,struct qstr const*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_0,
    hfs_cat_rec *VAR_1, int VAR_2,
    u32 VAR_3, const struct qstr *VAR_4)
{
 VAR_1->type = VAR_2;
 FUNC_2(VAR_1->thread.reserved, 0, sizeof(VAR_1->thread.reserved));
 VAR_1->thread.ParID = FUNC_0(VAR_3);
 FUNC_1(VAR_0, &VAR_1->thread.CName, VAR_4);
 return sizeof(struct hfs_cat_thread);
}
