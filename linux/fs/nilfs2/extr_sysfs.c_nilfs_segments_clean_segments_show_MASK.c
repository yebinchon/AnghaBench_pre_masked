
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int ns_dat; int ns_sufile; } ;
struct nilfs_segments_attr {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int mi_sem; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,char*,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t
FUNC_5(struct nilfs_segments_attr *VAR_1,
        struct the_nilfs *VAR_2,
        char *VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(&FUNC_0(VAR_2->ns_dat)->mi_sem);
 VAR_4 = FUNC_2(VAR_2->ns_sufile);
 FUNC_4(&FUNC_0(VAR_2->ns_dat)->mi_sem);

 return FUNC_3(VAR_3, VAR_0, "%lu\n", VAR_4);
}
