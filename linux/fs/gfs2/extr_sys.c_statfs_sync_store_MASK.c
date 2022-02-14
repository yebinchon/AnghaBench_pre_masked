
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int sd_vfs; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char const*,int ,int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct gfs2_sbd *VAR_3, const char *VAR_4,
     size_t VAR_5)
{
 int VAR_6, VAR_7;

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 VAR_6 = FUNC_2(VAR_4, 0, &VAR_7);
 if (VAR_6)
  return VAR_6;

 if (VAR_7 != 1)
  return -VAR_1;

 FUNC_1(VAR_3->sd_vfs, 0);
 return VAR_5;
}
