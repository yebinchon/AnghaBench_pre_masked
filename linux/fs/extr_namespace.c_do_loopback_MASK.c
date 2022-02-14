
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int mnt; int dentry; } ;
struct mountpoint {int dummy; } ;
typedef struct mountpoint mount ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mountpoint*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mountpoint*) ;
 int VAR_3 ;
 struct mountpoint* FUNC_2 (struct path*,int) ;
 int FUNC_3 (struct mountpoint*) ;
 int FUNC_4 (struct mountpoint*,struct mountpoint*,struct mountpoint*) ;
 int FUNC_5 (char const*,int,struct path*) ;
 struct mountpoint* FUNC_6 (struct path*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct path*) ;
 struct mountpoint* FUNC_10 (int ) ;
 int FUNC_11 (struct mountpoint*,int ) ;
 int FUNC_12 (struct mountpoint*) ;
 int FUNC_13 () ;

__attribute__((used)) static int FUNC_14(struct path *VAR_4, const char *VAR_5,
    int VAR_6)
{
 struct path VAR_7;
 struct mount *VAR_8 = ((void*)0), *VAR_9;
 struct mountpoint *VAR_10;
 int VAR_11;
 if (!VAR_5 || !*VAR_5)
  return -VAR_0;
 VAR_11 = FUNC_5(VAR_5, VAR_2|VAR_1, &VAR_7);
 if (VAR_11)
  return VAR_11;

 VAR_11 = -VAR_0;
 if (FUNC_8(VAR_7.dentry))
  goto out;

 VAR_10 = FUNC_6(VAR_4);
 if (FUNC_0(VAR_10)) {
  VAR_11 = FUNC_1(VAR_10);
  goto out;
 }

 VAR_9 = FUNC_10(VAR_4->mnt);
 if (!FUNC_3(VAR_9))
  goto out2;

 VAR_8 = FUNC_2(&VAR_7, VAR_6);
 if (FUNC_0(VAR_8)) {
  VAR_11 = FUNC_1(VAR_8);
  goto out2;
 }

 VAR_11 = FUNC_4(VAR_8, VAR_9, VAR_10);
 if (VAR_11) {
  FUNC_7();
  FUNC_11(VAR_8, VAR_3);
  FUNC_13();
 }
out2:
 FUNC_12(VAR_10);
out:
 FUNC_9(&VAR_7);
 return VAR_11;
}
