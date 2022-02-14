
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_3;

 VAR_2 = FUNC_0("fuse", VAR_1);
 if (!VAR_2) {
  VAR_3 = -VAR_0;
  goto out_err;
 }

 VAR_3 = FUNC_2(VAR_2, "connections");
 if (VAR_3)
  goto out_fuse_unregister;

 return 0;

 out_fuse_unregister:
 FUNC_1(VAR_2);
 out_err:
 return VAR_3;
}
