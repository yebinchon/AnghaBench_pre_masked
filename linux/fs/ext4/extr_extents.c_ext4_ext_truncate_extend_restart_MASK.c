
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_6__ {int h_buffer_credits; } ;
typedef TYPE_1__ handle_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,struct inode*,int) ;

__attribute__((used)) static int FUNC_3(handle_t *VAR_1,
         struct inode *VAR_2,
         int VAR_3)
{
 int VAR_4;

 if (!FUNC_0(VAR_1))
  return 0;
 if (VAR_1->h_buffer_credits >= VAR_3)
  return 0;




 VAR_3 += 3;
 VAR_4 = FUNC_1(VAR_1, VAR_3 - VAR_1->h_buffer_credits);
 if (VAR_4 <= 0)
  return VAR_4;
 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_4 == 0)
  VAR_4 = -VAR_0;

 return VAR_4;
}
