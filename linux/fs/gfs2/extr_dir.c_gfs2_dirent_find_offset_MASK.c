
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {unsigned int len; } ;
struct gfs2_dirent {int de_rec_len; int de_name_len; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct gfs2_dirent const*) ;

__attribute__((used)) static int FUNC_3(const struct gfs2_dirent *VAR_0,
      const struct qstr *VAR_1,
      void *VAR_2)
{
 unsigned VAR_3 = FUNC_0(VAR_1->len);
 unsigned VAR_4 = FUNC_0(FUNC_1(VAR_0->de_name_len));
 unsigned VAR_5 = FUNC_1(VAR_0->de_rec_len);

 if (VAR_2 < (void *)VAR_0 || VAR_2 >= (void *)VAR_0 + VAR_5)
  return 0;
 if (FUNC_2(VAR_0))
  VAR_4 = 0;
 if (VAR_2 < (void *)VAR_0 + VAR_4)
  return -1;
 if ((void *)VAR_0 + VAR_5 >= VAR_2 + VAR_3)
  return 1;
 return -1;
}
