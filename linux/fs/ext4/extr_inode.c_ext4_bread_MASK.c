
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
typedef int ext4_lblk_t ;


 int VAR_0 ;
 struct buffer_head* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 struct buffer_head* FUNC_4 (int *,struct inode*,int ,int) ;
 int FUNC_5 (int ,int,int,struct buffer_head**) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;

struct buffer_head *FUNC_8(handle_t *VAR_4, struct inode *VAR_5,
          ext4_lblk_t VAR_6, int VAR_7)
{
 struct buffer_head *VAR_8;

 VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7);
 if (FUNC_1(VAR_8))
  return VAR_8;
 if (!VAR_8 || FUNC_3(VAR_8))
  return VAR_8;
 FUNC_5(VAR_2, VAR_1 | VAR_3, 1, &VAR_8);
 FUNC_7(VAR_8);
 if (FUNC_2(VAR_8))
  return VAR_8;
 FUNC_6(VAR_8);
 return FUNC_0(-VAR_0);
}
