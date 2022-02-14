
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef void* u64 ;
struct inode {int dummy; } ;
struct btrfs_path {int * slots; int * nodes; } ;
struct btrfs_key {scalar_t__ type; void* offset; void* objectid; } ;
struct TYPE_3__ {int root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct btrfs_path* FUNC_1 () ;
 void* FUNC_2 (void* const,char const*,int const) ;
 int FUNC_3 (int ,int ,char const*,int const) ;
 int FUNC_4 (int ,int ,void* const,char const*,int const) ;
 int FUNC_5 (struct btrfs_path*) ;
 void* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,int ,struct btrfs_key*,struct btrfs_path*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_3, struct inode *VAR_4,
      const u8 VAR_5, const char *VAR_6,
      const int VAR_7)
{
 struct btrfs_key VAR_8;
 struct btrfs_path *VAR_9;
 const u64 VAR_10 = FUNC_6(FUNC_0(VAR_4));
 int VAR_11;

 VAR_9 = FUNC_1();
 if (!VAR_9)
  return -VAR_2;

 VAR_8.objectid = FUNC_6(FUNC_0(VAR_3));
 VAR_8.type = VAR_5;
 if (VAR_8.type == VAR_1)
  VAR_8.offset = VAR_10;
 else
  VAR_8.offset = FUNC_2(VAR_10, VAR_6, VAR_7);

 VAR_11 = FUNC_7(((void*)0), FUNC_0(VAR_3)->root, &VAR_8, VAR_9, 0, 0);
 if (VAR_11 < 0)
  goto out;
 if (VAR_11 > 0) {
  VAR_11 = 0;
  goto out;
 }
 if (VAR_8.type == VAR_0)
  VAR_11 = !!FUNC_4(VAR_9->nodes[0],
    VAR_9->slots[0], VAR_10, VAR_6, VAR_7);
 else
  VAR_11 = !!FUNC_3(VAR_9->nodes[0], VAR_9->slots[0],
         VAR_6, VAR_7);

out:
 FUNC_5(VAR_9);
 return VAR_11;
}
