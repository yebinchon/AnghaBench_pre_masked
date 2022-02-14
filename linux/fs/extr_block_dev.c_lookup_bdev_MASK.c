
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dentry; } ;
struct inode {int i_mode; } ;
struct block_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct block_device* FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 struct block_device* FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (int ) ;
 int FUNC_4 (char const*,int ,struct path*) ;
 int FUNC_5 (struct path*) ;
 int FUNC_6 (struct path*) ;

struct block_device *FUNC_7(const char *VAR_5)
{
 struct block_device *VAR_6;
 struct inode *VAR_7;
 struct path VAR_8;
 int VAR_9;

 if (!VAR_5 || !*VAR_5)
  return FUNC_0(-VAR_1);

 VAR_9 = FUNC_4(VAR_5, VAR_4, &VAR_8);
 if (VAR_9)
  return FUNC_0(VAR_9);

 VAR_7 = FUNC_3(VAR_8.dentry);
 VAR_9 = -VAR_3;
 if (!FUNC_1(VAR_7->i_mode))
  goto fail;
 VAR_9 = -VAR_0;
 if (!FUNC_5(&VAR_8))
  goto fail;
 VAR_9 = -VAR_2;
 VAR_6 = FUNC_2(VAR_7);
 if (!VAR_6)
  goto fail;
out:
 FUNC_6(&VAR_8);
 return VAR_6;
fail:
 VAR_6 = FUNC_0(VAR_9);
 goto out;
}
