
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct file {struct cachefiles_cache* private_data; } ;
struct cachefiles_cache {int flags; int daemon_pollwq; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct file*,int *,struct poll_table_struct*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static __poll_t FUNC_2(struct file *VAR_4,
        struct poll_table_struct *VAR_5)
{
 struct cachefiles_cache *VAR_6 = VAR_4->private_data;
 __poll_t VAR_7;

 FUNC_0(VAR_4, &VAR_6->daemon_pollwq, VAR_5);
 VAR_7 = 0;

 if (FUNC_1(VAR_1, &VAR_6->flags))
  VAR_7 |= VAR_2;

 if (FUNC_1(VAR_0, &VAR_6->flags))
  VAR_7 |= VAR_3;

 return VAR_7;
}
