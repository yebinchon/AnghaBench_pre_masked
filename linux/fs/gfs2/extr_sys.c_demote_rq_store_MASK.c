
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int sd_flags; } ;
struct gfs2_glock_operations {int dummy; } ;
struct gfs2_glock {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct gfs2_sbd*,char*) ;
 struct gfs2_glock_operations VAR_10 ;
 int FUNC_2 (struct gfs2_glock*,unsigned int) ;
 int FUNC_3 (struct gfs2_sbd*,unsigned long long,struct gfs2_glock_operations const*,int ,struct gfs2_glock**) ;
 int FUNC_4 (struct gfs2_glock*) ;
 struct gfs2_glock_operations** VAR_11 ;
 int FUNC_5 (char const*,char*,unsigned int*,unsigned long long*,char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static ssize_t FUNC_8(struct gfs2_sbd *VAR_12, const char *VAR_13, size_t VAR_14)
{
 struct gfs2_glock *VAR_15;
 const struct gfs2_glock_operations *VAR_16;
 unsigned int VAR_17;
 unsigned int VAR_18;
 unsigned long long VAR_19;
 char VAR_20[16];
 int VAR_21;

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 VAR_21 = FUNC_5(VAR_13, "%u:%llu %15s", &VAR_18, &VAR_19,
      VAR_20);
 if (VAR_21 != 3)
  return -VAR_1;

 if (FUNC_6(VAR_20, "EX") == 0)
  VAR_17 = VAR_6;
 else if ((FUNC_6(VAR_20, "CW") == 0) || (FUNC_6(VAR_20, "DF") == 0))
  VAR_17 = VAR_4;
 else if ((FUNC_6(VAR_20, "PR") == 0) || (FUNC_6(VAR_20, "SH") == 0))
  VAR_17 = VAR_5;
 else
  return -VAR_1;

 if (VAR_18 > VAR_7)
  return -VAR_1;
 if (VAR_18 == VAR_8 && VAR_19 == VAR_3)
  VAR_16 = &VAR_10;
 else
  VAR_16 = VAR_11[VAR_18];
 if (VAR_16 == ((void*)0))
  return -VAR_1;
 if (!FUNC_7(VAR_9, &VAR_12->sd_flags))
  FUNC_1(VAR_12, "demote interface used\n");
 VAR_21 = FUNC_3(VAR_12, VAR_19, VAR_16, 0, &VAR_15);
 if (VAR_21)
  return VAR_21;
 FUNC_2(VAR_15, VAR_17);
 FUNC_4(VAR_15);
 return VAR_14;
}
