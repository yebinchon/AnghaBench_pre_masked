
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume_desc {int dummy; } ;
struct path {int dummy; } ;
struct kstat {int rdev; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ubi_volume_desc* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char const*,int ,struct path*) ;
 int FUNC_6 (struct path*) ;
 int FUNC_7 (int ) ;
 struct ubi_volume_desc* FUNC_8 (int,int,int) ;
 int FUNC_9 (struct path*,struct kstat*,int ,int ) ;

struct ubi_volume_desc *FUNC_10(const char *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 struct path VAR_10;
 struct kstat VAR_11;

 FUNC_4("open volume %s, mode %d", VAR_5, VAR_6);

 if (!VAR_5 || !*VAR_5)
  return FUNC_0(-VAR_1);

 VAR_7 = FUNC_5(VAR_5, VAR_3, &VAR_10);
 if (VAR_7)
  return FUNC_0(VAR_7);

 VAR_7 = FUNC_9(&VAR_10, &VAR_11, VAR_4, VAR_0);
 FUNC_6(&VAR_10);
 if (VAR_7)
  return FUNC_0(VAR_7);

 if (!FUNC_3(VAR_11.mode))
  return FUNC_0(-VAR_1);

 VAR_8 = FUNC_7(FUNC_1(VAR_11.rdev));
 VAR_9 = FUNC_2(VAR_11.rdev) - 1;

 if (VAR_9 >= 0 && VAR_8 >= 0)
  return FUNC_8(VAR_8, VAR_9, VAR_6);
 return FUNC_0(-VAR_2);
}
