
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct send_ctx {int cmp_key; int left_path; int send_root; } ;
struct btrfs_key {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct btrfs_key*,char const*,int,char const*,int,int ,void*) ;
 int FUNC_1 (int ,int ,int ,char const*,int,int *,int *) ;

__attribute__((used)) static int FUNC_2(int VAR_1, struct btrfs_key *VAR_2,
        const char *VAR_3, int VAR_4,
        const char *VAR_5, int VAR_6,
        u8 VAR_7, void *VAR_8)
{
 int VAR_9;
 struct send_ctx *VAR_10 = VAR_8;

 VAR_9 = FUNC_1(VAR_10->send_root, VAR_10->left_path, VAR_10->cmp_key,
    VAR_3, VAR_4, ((void*)0), ((void*)0));
 if (VAR_9 == -VAR_0)
  VAR_9 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
    VAR_6, VAR_7, VAR_8);
 else if (VAR_9 >= 0)
  VAR_9 = 0;

 return VAR_9;
}
