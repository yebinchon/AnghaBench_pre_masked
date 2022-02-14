
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsnotify_group {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct fsnotify_group*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct fsnotify_group*) ;
 int FUNC_3 (char*,int *,struct fsnotify_group*,int) ;
 int FUNC_4 (struct fsnotify_group*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct fsnotify_group* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(int VAR_8)
{
 struct fsnotify_group *VAR_9;
 int VAR_10;


 FUNC_0(VAR_1 != VAR_3);
 FUNC_0(VAR_2 != VAR_4);

 if (VAR_8 & ~(VAR_1 | VAR_2))
  return -VAR_0;


 VAR_9 = FUNC_5(VAR_7);
 if (FUNC_1(VAR_9))
  return FUNC_2(VAR_9);

 VAR_10 = FUNC_3("inotify", &VAR_6, VAR_9,
      VAR_5 | VAR_8);
 if (VAR_10 < 0)
  FUNC_4(VAR_9);

 return VAR_10;
}
