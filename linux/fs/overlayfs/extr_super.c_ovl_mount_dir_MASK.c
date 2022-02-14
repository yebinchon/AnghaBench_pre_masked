
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dentry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,struct path*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct path*) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_3, struct path *VAR_4)
{
 int VAR_5 = -VAR_1;
 char *VAR_6 = FUNC_1(VAR_3, VAR_2);

 if (VAR_6) {
  FUNC_4(VAR_6);
  VAR_5 = FUNC_3(VAR_6, VAR_4);

  if (!VAR_5)
   if (FUNC_2(VAR_4->dentry)) {
    FUNC_6("overlayfs: filesystem on '%s' not supported as upperdir\n",
           VAR_6);
    FUNC_5(VAR_4);
    VAR_5 = -VAR_0;
   }
  FUNC_0(VAR_6);
 }
 return VAR_5;
}
