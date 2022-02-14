
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int ip_dyn_features; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct inode*,struct page*,struct buffer_head*) ;
 int FUNC_6 (struct inode*,struct buffer_head**) ;
 int FUNC_7 (struct page*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_1, struct page *VAR_2)
{
 int VAR_3;
 struct buffer_head *VAR_4 = ((void*)0);

 FUNC_0(!FUNC_2(VAR_2));
 FUNC_0(!(FUNC_1(VAR_1)->ip_dyn_features & VAR_0));

 VAR_3 = FUNC_6(VAR_1, &VAR_4);
 if (VAR_3) {
  FUNC_4(VAR_3);
  goto out;
 }

 VAR_3 = FUNC_5(VAR_1, VAR_2, VAR_4);
out:
 FUNC_7(VAR_2);

 FUNC_3(VAR_4);
 return VAR_3;
}
