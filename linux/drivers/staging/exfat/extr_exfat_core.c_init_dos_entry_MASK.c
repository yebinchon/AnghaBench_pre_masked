
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timestamp_t {int dummy; } ;
struct dos_dentry_t {scalar_t__ create_time_ms; int access_date; int size; int start_clu_hi; int start_clu_lo; } ;
struct dentry_t {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct dentry_t*,struct timestamp_t*,int ) ;
 int FUNC_4 (struct dentry_t*,int) ;
 struct timestamp_t* FUNC_5 (struct timestamp_t*) ;

void FUNC_6(struct dos_dentry_t *VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct timestamp_t VAR_5, *VAR_6;

 FUNC_4((struct dentry_t *)VAR_2, VAR_3);
 FUNC_1(VAR_2->start_clu_lo, FUNC_0(VAR_4));
 FUNC_1(VAR_2->start_clu_hi, FUNC_0(VAR_4 >> 16));
 FUNC_2(VAR_2->size, 0);

 VAR_6 = FUNC_5(&VAR_5);
 FUNC_3((struct dentry_t *)VAR_2, VAR_6, VAR_0);
 FUNC_3((struct dentry_t *)VAR_2, VAR_6, VAR_1);
 FUNC_1(VAR_2->access_date, 0);
 VAR_2->create_time_ms = 0;
}
