
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct btrfs_device {int dummy; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct btrfs_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct btrfs_device*) ;
 struct btrfs_device* FUNC_2 (char*,int ,void*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*,int ) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (char*,int ,int *) ;
 char* FUNC_8 (char**,char*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_9(const char *VAR_6, fmode_t VAR_7,
          void *VAR_8)
{
 substring_t VAR_9[VAR_2];
 char *VAR_10, *VAR_11, *VAR_12, *VAR_13;
 struct btrfs_device *VAR_14 = ((void*)0);
 int VAR_15 = 0;

 FUNC_5(&VAR_5);

 if (!VAR_6)
  return 0;





 VAR_11 = FUNC_4(VAR_6, VAR_1);
 if (!VAR_11)
  return -VAR_0;
 VAR_12 = VAR_11;

 while ((VAR_13 = FUNC_8(&VAR_11, ",")) != ((void*)0)) {
  int VAR_16;

  if (!*VAR_13)
   continue;

  VAR_16 = FUNC_7(VAR_13, VAR_4, VAR_9);
  if (VAR_16 == VAR_3) {
   VAR_10 = FUNC_6(&VAR_9[0]);
   if (!VAR_10) {
    VAR_15 = -VAR_0;
    goto out;
   }
   VAR_14 = FUNC_2(VAR_10, VAR_7,
     VAR_8);
   FUNC_3(VAR_10);
   if (FUNC_0(VAR_14)) {
    VAR_15 = FUNC_1(VAR_14);
    goto out;
   }
  }
 }

out:
 FUNC_3(VAR_12);
 return VAR_15;
}
