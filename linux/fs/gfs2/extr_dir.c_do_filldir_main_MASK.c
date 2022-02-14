
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct gfs2_inode {int dummy; } ;
struct TYPE_2__ {int no_addr; } ;
struct gfs2_dirent {scalar_t__ de_cookie; int de_type; TYPE_1__ de_inum; int de_name_len; } ;
struct dir_context {scalar_t__ pos; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct dir_context*,char const*,int ,int ,int ) ;
 int FUNC_3 (struct gfs2_dirent**,size_t,int,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct gfs2_inode *VAR_1, struct dir_context *VAR_2,
      struct gfs2_dirent **VAR_3, u32 VAR_4,
      u32 VAR_5, int *VAR_6)
{
 const struct gfs2_dirent *VAR_7, *VAR_8;
 u64 VAR_9, VAR_10;
 unsigned int VAR_11, VAR_12;
 int VAR_13 = 0;

 if (VAR_5 < VAR_4)
  FUNC_3(&VAR_3[VAR_5], VAR_4 - VAR_5,
       sizeof(struct gfs2_dirent *), VAR_0, ((void*)0));

 VAR_8 = VAR_3[0];
 VAR_10 = VAR_8->de_cookie;

 for (VAR_11 = 0, VAR_12 = 1; VAR_11 < VAR_4; VAR_11++, VAR_12++) {
  VAR_7 = VAR_8;
  VAR_9 = VAR_10;

  if (VAR_12 < VAR_4) {
   VAR_8 = VAR_3[VAR_12];
   VAR_10 = VAR_8->de_cookie;

   if (VAR_9 < VAR_2->pos)
    continue;
   VAR_2->pos = VAR_9;

   if (VAR_10 == VAR_9) {
    if (*VAR_6 && !VAR_13)
     return 1;
    VAR_13 = 1;
   } else
    VAR_13 = 0;
  } else {
   if (VAR_9 < VAR_2->pos)
    continue;
   VAR_2->pos = VAR_9;
  }

  if (!FUNC_2(VAR_2, (const char *)(VAR_7 + 1),
    FUNC_0(VAR_7->de_name_len),
    FUNC_1(VAR_7->de_inum.no_addr),
    FUNC_0(VAR_7->de_type)))
   return 1;

  *VAR_6 = 1;
 }





 VAR_2->pos++;

 return 0;
}
