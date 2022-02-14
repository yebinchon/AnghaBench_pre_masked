
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct gfs2_dirent {scalar_t__ de_cookie; int de_name_len; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct gfs2_dirent const*,struct gfs2_dirent const*,unsigned int) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const struct gfs2_dirent *VAR_2, *VAR_3;
 u32 VAR_4, VAR_5;
 int VAR_6 = 0;

 VAR_2 = *(const struct gfs2_dirent **)VAR_0;
 VAR_4 = VAR_2->de_cookie;

 VAR_3 = *(const struct gfs2_dirent **)VAR_1;
 VAR_5 = VAR_3->de_cookie;

 if (VAR_4 > VAR_5)
  VAR_6 = 1;
 else if (VAR_4 < VAR_5)
  VAR_6 = -1;
 else {
  unsigned int VAR_7 = FUNC_0(VAR_2->de_name_len);
  unsigned int VAR_8 = FUNC_0(VAR_3->de_name_len);

  if (VAR_7 > VAR_8)
   VAR_6 = 1;
  else if (VAR_7 < VAR_8)
   VAR_6 = -1;
  else
   VAR_6 = FUNC_1(VAR_2 + 1, VAR_3 + 1, VAR_7);
 }

 return VAR_6;
}
