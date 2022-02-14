
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct proc_dir_entry {void* data; int * proc_iops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 struct proc_dir_entry* FUNC_2 (struct proc_dir_entry**,char const*,int,int) ;
 int VAR_4 ;

struct proc_dir_entry *FUNC_3(const char *VAR_5, umode_t VAR_6,
  struct proc_dir_entry **VAR_7, void *VAR_8)
{
 struct proc_dir_entry *VAR_9;

 if ((VAR_6 & VAR_1) == 0)
  VAR_6 |= VAR_2;
 if ((VAR_6 & VAR_0) == 0)
  VAR_6 |= VAR_3;
 if (FUNC_1(!FUNC_0(VAR_6)))
  return ((void*)0);

 VAR_9 = FUNC_2(VAR_7, VAR_5, VAR_6, 1);
 if (VAR_9) {
  VAR_9->proc_iops = &VAR_4;
  VAR_9->data = VAR_8;
 }
 return VAR_9;
}
