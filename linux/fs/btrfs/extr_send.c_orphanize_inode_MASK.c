
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct send_ctx {int dummy; } ;
struct fs_path {int dummy; } ;


 int VAR_0 ;
 struct fs_path* FUNC_0 () ;
 int FUNC_1 (struct fs_path*) ;
 int FUNC_2 (struct send_ctx*,int ,int ,struct fs_path*) ;
 int FUNC_3 (struct send_ctx*,struct fs_path*,struct fs_path*) ;

__attribute__((used)) static int FUNC_4(struct send_ctx *VAR_1, u64 VAR_2, u64 VAR_3,
     struct fs_path *VAR_4)
{
 int VAR_5;
 struct fs_path *VAR_6;

 VAR_6 = FUNC_0();
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_6);
 if (VAR_5 < 0)
  goto out;

 VAR_5 = FUNC_3(VAR_1, VAR_4, VAR_6);

out:
 FUNC_1(VAR_6);
 return VAR_5;
}
