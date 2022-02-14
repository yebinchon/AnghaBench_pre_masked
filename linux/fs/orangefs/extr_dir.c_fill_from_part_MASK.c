
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orangefs_readdir_response_s {int dummy; } ;
struct orangefs_khandle {int dummy; } ;
struct orangefs_dir_part {int len; } ;
struct dir_context {int pos; } ;
typedef int loff_t ;
typedef int __u32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dir_context*,char*,int,int ,int ) ;
 int FUNC_2 (struct orangefs_khandle*) ;

__attribute__((used)) static int FUNC_3(struct orangefs_dir_part *VAR_2,
    struct dir_context *VAR_3)
{
 const int VAR_4 = sizeof(struct orangefs_readdir_response_s);
 struct orangefs_khandle *VAR_5;
 __u32 *VAR_6, VAR_7;
 loff_t VAR_8;
 char *VAR_9;
 VAR_8 = VAR_3->pos & ~VAR_1;


 if (VAR_8 > VAR_2->len)
  return 1;





 if (VAR_8 % 8)
  VAR_8 = VAR_8 + (8 - VAR_8%8)%8;

 while (VAR_8 < VAR_2->len) {
  if (VAR_2->len < VAR_8 + sizeof *VAR_6)
   break;
  VAR_6 = (void *)VAR_2 + VAR_4 + VAR_8;




  VAR_7 = (sizeof *VAR_6 + *VAR_6 + 1) +
      (8 - (sizeof *VAR_6 + *VAR_6 + 1)%8)%8;
  if (VAR_2->len < VAR_8 + VAR_7 + sizeof *VAR_5)
   goto next;
  VAR_9 = (void *)VAR_2 + VAR_4 + VAR_8 + sizeof *VAR_6;
  if (VAR_9[*VAR_6] != 0)
   goto next;
  VAR_5 = (void *)VAR_2 + VAR_4 + VAR_8 + VAR_7;
  if (!FUNC_1(VAR_3, VAR_9, *VAR_6,
      FUNC_2(VAR_5),
      VAR_0))
   return 0;
  VAR_8 += VAR_7 + sizeof *VAR_5;
  VAR_8 = VAR_8 + (8 - VAR_8%8)%8;
  FUNC_0(VAR_8 > VAR_2->len);
  VAR_3->pos = (VAR_3->pos & VAR_1) | VAR_8;
  continue;
next:
  VAR_8 += 8;
 }
 return 1;
}
