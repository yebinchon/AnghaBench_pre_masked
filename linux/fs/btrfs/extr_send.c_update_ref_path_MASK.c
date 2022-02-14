
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct send_ctx {int dummy; } ;
struct recorded_ref {struct fs_path* full_path; int name_len; int name; int dir_gen; int dir; } ;
struct fs_path {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fs_path*,int ,int ) ;
 struct fs_path* FUNC_1 () ;
 int FUNC_2 (struct fs_path*) ;
 int FUNC_3 (struct send_ctx*,int ,int ,struct fs_path*) ;
 int FUNC_4 (struct recorded_ref*,struct fs_path*) ;

__attribute__((used)) static int FUNC_5(struct send_ctx *VAR_1, struct recorded_ref *VAR_2)
{
 int VAR_3;
 struct fs_path *VAR_4;





 VAR_4 = FUNC_1();
 if (!VAR_4)
  return -VAR_0;

 VAR_3 = FUNC_3(VAR_1, VAR_2->dir, VAR_2->dir_gen, VAR_4);
 if (VAR_3 < 0) {
  FUNC_2(VAR_4);
  return VAR_3;
 }
 VAR_3 = FUNC_0(VAR_4, VAR_2->name, VAR_2->name_len);
 if (VAR_3 < 0) {
  FUNC_2(VAR_4);
  return VAR_3;
 }

 FUNC_2(VAR_2->full_path);
 FUNC_4(VAR_2, VAR_4);

 return 0;
}
