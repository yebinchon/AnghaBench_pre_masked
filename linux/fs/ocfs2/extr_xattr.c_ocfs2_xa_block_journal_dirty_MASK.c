
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xa_loc {struct buffer_head* xl_storage; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int FUNC_0 (int *,struct buffer_head*) ;

__attribute__((used)) static void FUNC_1(handle_t *VAR_0,
      struct ocfs2_xa_loc *VAR_1)
{
 struct buffer_head *VAR_2 = VAR_1->xl_storage;

 FUNC_0(VAR_0, VAR_2);
}
