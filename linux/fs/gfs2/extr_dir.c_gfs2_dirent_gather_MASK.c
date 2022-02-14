
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct gfs2_dirent {int dummy; } ;
struct dirent_gather {int offset; struct gfs2_dirent const** pdent; } ;


 int FUNC_0 (struct gfs2_dirent const*) ;

__attribute__((used)) static int FUNC_1(const struct gfs2_dirent *VAR_0,
         const struct qstr *VAR_1,
         void *VAR_2)
{
 struct dirent_gather *VAR_3 = VAR_2;
 if (!FUNC_0(VAR_0)) {
  VAR_3->pdent[VAR_3->offset++] = VAR_0;
 }
 return 0;
}
