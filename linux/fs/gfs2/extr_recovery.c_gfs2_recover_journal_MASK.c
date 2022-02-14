
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_jdesc {int jd_recover_error; int jd_flags; int jd_work; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int ,int ) ;

int FUNC_4(struct gfs2_jdesc *VAR_4, bool VAR_5)
{
 int VAR_6;

 if (FUNC_2(VAR_1, &VAR_4->jd_flags))
  return -VAR_0;


 VAR_6 = FUNC_1(VAR_3, &VAR_4->jd_work);
 FUNC_0(!VAR_6);

 if (VAR_5)
  FUNC_3(&VAR_4->jd_flags, VAR_1,
       VAR_2);

 return VAR_5 ? VAR_4->jd_recover_error : 0;
}
