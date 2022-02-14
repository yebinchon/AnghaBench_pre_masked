
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct dentry {int dummy; } ;
struct dasd_device {struct dentry* hosts_dentry; } ;


 int FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_1 (char*,int,struct dentry*,struct dasd_device*,int *) ;

__attribute__((used)) static void FUNC_2(struct dentry *VAR_3,
       struct dasd_device *VAR_4)
{
 struct dentry *VAR_5;
 umode_t VAR_6;

 if (!VAR_3)
  return;

 VAR_6 = VAR_1 | VAR_0;
 VAR_5 = FUNC_1("host_access_list", VAR_6, VAR_3,
      VAR_4, &VAR_2);
 if (VAR_5 && !FUNC_0(VAR_5))
  VAR_4->hosts_dentry = VAR_5;
}
