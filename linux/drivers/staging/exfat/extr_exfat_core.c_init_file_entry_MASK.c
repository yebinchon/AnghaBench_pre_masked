
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timestamp_t {int dummy; } ;
struct file_dentry_t {scalar_t__ access_time_ms; scalar_t__ modify_time_ms; scalar_t__ create_time_ms; } ;
struct dentry_t {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dentry_t*,struct timestamp_t*,int ) ;
 int FUNC_1 (struct dentry_t*,int ) ;
 struct timestamp_t* FUNC_2 (struct timestamp_t*) ;

void FUNC_3(struct file_dentry_t *VAR_3, u32 VAR_4)
{
 struct timestamp_t VAR_5, *VAR_6;

 FUNC_1((struct dentry_t *)VAR_3, VAR_4);

 VAR_6 = FUNC_2(&VAR_5);
 FUNC_0((struct dentry_t *)VAR_3, VAR_6, VAR_1);
 FUNC_0((struct dentry_t *)VAR_3, VAR_6, VAR_2);
 FUNC_0((struct dentry_t *)VAR_3, VAR_6, VAR_0);
 VAR_3->create_time_ms = 0;
 VAR_3->modify_time_ms = 0;
 VAR_3->access_time_ms = 0;
}
