
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct send_ctx {int dummy; } ;
struct fs_path {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct send_ctx*,int ,struct fs_path*) ;
 int FUNC_1 (struct send_ctx*,int ,char const*,int) ;
 int FUNC_2 (struct send_ctx*,int ) ;
 int FUNC_3 (struct send_ctx*) ;

__attribute__((used)) static int FUNC_4(struct send_ctx *VAR_3,
     struct fs_path *VAR_4,
     const char *VAR_5, int VAR_6)
{
 int VAR_7 = 0;

 VAR_7 = FUNC_2(VAR_3, VAR_2);
 if (VAR_7 < 0)
  goto out;

 FUNC_0(VAR_3, VAR_0, VAR_4);
 FUNC_1(VAR_3, VAR_1, VAR_5, VAR_6);

 VAR_7 = FUNC_3(VAR_3);

tlv_put_failure:
out:
 return VAR_7;
}
