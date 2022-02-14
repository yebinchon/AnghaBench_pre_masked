
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int sd_flags; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gfs2_sbd*,unsigned int) ;
 int FUNC_1 (char const*,char*,unsigned int*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct gfs2_sbd *VAR_3, const char *VAR_4, size_t VAR_5)
{
 unsigned VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_4, "%u", &VAR_6);
 if (VAR_7 != 1)
  return -VAR_0;

 if (FUNC_2(VAR_2, &VAR_3->sd_flags)) {
  VAR_7 = -VAR_1;
  goto out;
 }

 VAR_7 = FUNC_0(VAR_3, VAR_6);
out:
 return VAR_7 ? VAR_7 : VAR_5;
}
