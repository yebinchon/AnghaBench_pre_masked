
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_lprops {int flags; } ;
struct ubifs_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct ubifs_lprops const*) ;
 int FUNC_1 (struct ubifs_lprops const*) ;
 struct ubifs_lprops* FUNC_2 (struct ubifs_info*,struct ubifs_lprops const*,int,int,int,int) ;
 int FUNC_3 (struct ubifs_info*,char*,int,int) ;
 int FUNC_4 (struct ubifs_info*) ;
 struct ubifs_lprops* FUNC_5 (struct ubifs_info*,int) ;
 int FUNC_6 (struct ubifs_info*) ;

int FUNC_7(struct ubifs_info *VAR_0, int VAR_1, int VAR_2, int VAR_3,
   int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7 = 0, VAR_8;
 const struct ubifs_lprops *VAR_9;

 FUNC_4(VAR_0);

 VAR_9 = FUNC_5(VAR_0, VAR_1);
 if (FUNC_0(VAR_9)) {
  VAR_7 = FUNC_1(VAR_9);
  goto out;
 }

 VAR_8 = (VAR_9->flags | VAR_4) & ~VAR_5;
 VAR_9 = FUNC_2(VAR_0, VAR_9, VAR_2, VAR_3, VAR_8, VAR_6);
 if (FUNC_0(VAR_9))
  VAR_7 = FUNC_1(VAR_9);

out:
 FUNC_6(VAR_0);
 if (VAR_7)
  FUNC_3(VAR_0, "cannot change properties of LEB %d, error %d",
     VAR_1, VAR_7);
 return VAR_7;
}
