
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_ext_path {int dummy; } ;
struct TYPE_6__ {int h_buffer_credits; } ;
typedef TYPE_1__ handle_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct inode*,struct ext4_ext_path*) ;
 int FUNC_1 (TYPE_1__*,struct inode*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct inode*) ;

__attribute__((used)) static int
FUNC_4(handle_t *VAR_1, struct inode *VAR_2,
  struct ext4_ext_path *VAR_3)
{
 int VAR_4, VAR_5;

 if (!FUNC_2(VAR_1))
  return 0;







 if (VAR_1->h_buffer_credits < 7) {
  VAR_4 = FUNC_3(VAR_2);
  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_4);

  if (VAR_5 && VAR_5 != -VAR_0)
   return VAR_5;
 }

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
 return VAR_5;
}
