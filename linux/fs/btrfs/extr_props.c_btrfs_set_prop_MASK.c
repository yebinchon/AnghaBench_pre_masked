
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prop_handler {int (* apply ) (struct inode*,char const*,size_t) ;int xattr_name; } ;
struct inode {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct TYPE_2__ {int runtime_flags; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct btrfs_trans_handle*,struct inode*,int ,char const*,size_t,int) ;
 struct prop_handler* FUNC_3 (char const*,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct inode*,char const*,size_t) ;
 int FUNC_6 (struct inode*,char const*,size_t) ;

int FUNC_7(struct btrfs_trans_handle *VAR_2, struct inode *VAR_3,
     const char *VAR_4, const char *VAR_5, size_t VAR_6,
     int VAR_7)
{
 const struct prop_handler *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(VAR_4, ((void*)0));
 if (!VAR_8)
  return -VAR_1;

 if (VAR_6 == 0) {
  VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_8->xattr_name,
         ((void*)0), 0, VAR_7);
  if (VAR_9)
   return VAR_9;

  VAR_9 = VAR_8->apply(VAR_3, ((void*)0), 0);
  FUNC_0(VAR_9 == 0);

  return VAR_9;
 }

 VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_8->xattr_name, VAR_5,
        VAR_6, VAR_7);
 if (VAR_9)
  return VAR_9;
 VAR_9 = VAR_8->apply(VAR_3, VAR_5, VAR_6);
 if (VAR_9) {
  FUNC_2(VAR_2, VAR_3, VAR_8->xattr_name, ((void*)0),
          0, VAR_7);
  return VAR_9;
 }

 FUNC_4(VAR_0, &FUNC_1(VAR_3)->runtime_flags);

 return 0;
}
