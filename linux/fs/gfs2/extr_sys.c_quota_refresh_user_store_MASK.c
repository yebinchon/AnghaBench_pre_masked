
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kqid {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct gfs2_sbd*,struct kqid) ;
 int FUNC_3 (char const*,int ,int *) ;
 struct kqid FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct kqid) ;

__attribute__((used)) static ssize_t FUNC_6(struct gfs2_sbd *VAR_4, const char *VAR_5,
     size_t VAR_6)
{
 struct kqid VAR_7;
 int VAR_8;
 u32 VAR_9;

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 VAR_8 = FUNC_3(VAR_5, 0, &VAR_9);
 if (VAR_8)
  return VAR_8;

 VAR_7 = FUNC_4(FUNC_1(), VAR_3, VAR_9);
 if (!FUNC_5(VAR_7))
  return -VAR_1;

 VAR_8 = FUNC_2(VAR_4, VAR_7);
 return VAR_8 ? VAR_8 : VAR_6;
}
