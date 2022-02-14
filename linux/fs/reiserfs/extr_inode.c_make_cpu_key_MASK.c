
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct cpu_key {int dummy; } ;
typedef int loff_t ;
struct TYPE_2__ {int k_objectid; int k_dir_id; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct cpu_key*,int ,int ,int ,int ,int,int) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct cpu_key *VAR_0, struct inode *VAR_1, loff_t VAR_2,
    int VAR_3, int VAR_4)
{
 FUNC_1(VAR_0, FUNC_2(VAR_1),
        FUNC_3(FUNC_0(VAR_1)->k_dir_id),
        FUNC_3(FUNC_0(VAR_1)->k_objectid), VAR_2, VAR_3,
        VAR_4);
}
