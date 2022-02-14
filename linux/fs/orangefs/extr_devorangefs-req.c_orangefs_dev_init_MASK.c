
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,...) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;

int FUNC_2(void)
{

 VAR_2 = FUNC_1(0,
       VAR_1,
       &VAR_3);
 if (VAR_2 < 0) {
  FUNC_0(VAR_0,
        "Failed to register /dev/%s (error %d)\n",
        VAR_1, VAR_2);
  return VAR_2;
 }

 FUNC_0(VAR_0,
       "*** /dev/%s character device registered ***\n",
       VAR_1);
 FUNC_0(VAR_0, "'mknod /dev/%s c %d 0'.\n",
       VAR_1, VAR_2);
 return 0;
}
