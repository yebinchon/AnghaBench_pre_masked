
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
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gfs2_sbd*,char*,int,int) ;
 int FUNC_3 (char const*,int ,int*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct gfs2_sbd *VAR_3, const char *VAR_4, size_t VAR_5)
{
 int VAR_6, VAR_7;

 VAR_6 = FUNC_3(VAR_4, 0, &VAR_7);
 if (VAR_6)
  return VAR_6;

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 switch (VAR_7) {
 case 0:
  VAR_6 = FUNC_4(VAR_3->sd_vfs);
  break;
 case 1:
  VAR_6 = FUNC_1(VAR_3->sd_vfs);
  break;
 default:
  return -VAR_1;
 }

 if (VAR_6) {
  FUNC_2(VAR_3, "freeze %d error %d\n", VAR_7, VAR_6);
  return VAR_6;
 }

 return VAR_5;
}
