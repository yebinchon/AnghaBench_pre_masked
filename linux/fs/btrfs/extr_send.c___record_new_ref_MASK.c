
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct send_ctx {int new_refs; int send_root; } ;
struct fs_path {int dummy; } ;


 int FUNC_0 (int ,int ,struct fs_path*,void*,int *) ;

__attribute__((used)) static int FUNC_1(int VAR_0, u64 VAR_1, int VAR_2,
       struct fs_path *VAR_3,
       void *VAR_4)
{
 struct send_ctx *VAR_5 = VAR_4;
 return FUNC_0(VAR_5->send_root, VAR_1, VAR_3, VAR_4, &VAR_5->new_refs);
}
