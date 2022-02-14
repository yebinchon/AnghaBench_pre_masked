
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct afs_volume {int name; int vid; } ;





 int FUNC_0 (char*,int ,int ,char const*) ;

__attribute__((used)) static void FUNC_1(struct afs_volume *VAR_0, u32 VAR_1)
{
 const char *VAR_2;

 switch (VAR_1) {
 case 130: VAR_2 = "offline"; break;
 case 129: VAR_2 = "restarting"; break;
 case 128: VAR_2 = "being salvaged"; break;
 default: VAR_2 = "busy"; break;
 }

 FUNC_0("kAFS: Volume %llu '%s' is %s\n", VAR_0->vid, VAR_0->name, VAR_2);
}
