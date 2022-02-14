
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct send_ctx {int dummy; } ;
struct fs_path {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct send_ctx*,int ,char const*,int) ;
 int FUNC_1 (struct send_ctx*,int ,struct fs_path*) ;
 int FUNC_2 (struct send_ctx*,int ,char const*,int) ;
 int FUNC_3 (struct send_ctx*,int ) ;
 int FUNC_4 (struct send_ctx*) ;

__attribute__((used)) static int FUNC_5(struct send_ctx *VAR_4,
     struct fs_path *VAR_5,
     const char *VAR_6, int VAR_7,
     const char *VAR_8, int VAR_9)
{
 int VAR_10 = 0;

 VAR_10 = FUNC_3(VAR_4, VAR_3);
 if (VAR_10 < 0)
  goto out;

 FUNC_1(VAR_4, VAR_0, VAR_5);
 FUNC_2(VAR_4, VAR_2, VAR_6, VAR_7);
 FUNC_0(VAR_4, VAR_1, VAR_8, VAR_9);

 VAR_10 = FUNC_4(VAR_4);

tlv_put_failure:
out:
 return VAR_10;
}
