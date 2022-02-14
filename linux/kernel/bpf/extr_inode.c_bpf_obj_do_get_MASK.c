
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dentry; } ;
struct inode {int i_private; } ;
struct filename {int name; } ;
typedef enum bpf_type { ____Placeholder_bpf_type } bpf_type ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 int VAR_0 ;
 void* FUNC_3 (int ,int) ;
 int FUNC_4 (struct inode*,int*) ;
 struct inode* FUNC_5 (int ) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (int ,int ,struct path*) ;
 int FUNC_8 (struct path*) ;
 int FUNC_9 (struct path*) ;

__attribute__((used)) static void *FUNC_10(const struct filename *VAR_1,
       enum bpf_type *VAR_2, int VAR_3)
{
 struct inode *VAR_4;
 struct path VAR_5;
 void *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_7(VAR_1->name, VAR_0, &VAR_5);
 if (VAR_7)
  return FUNC_1(VAR_7);

 VAR_4 = FUNC_5(VAR_5.dentry);
 VAR_7 = FUNC_6(VAR_4, FUNC_0(VAR_3));
 if (VAR_7)
  goto out;

 VAR_7 = FUNC_4(VAR_4, VAR_2);
 if (VAR_7)
  goto out;

 VAR_6 = FUNC_3(VAR_4->i_private, *VAR_2);
 if (!FUNC_2(VAR_6))
  FUNC_9(&VAR_5);

 FUNC_8(&VAR_5);
 return VAR_6;
out:
 FUNC_8(&VAR_5);
 return FUNC_1(VAR_7);
}
