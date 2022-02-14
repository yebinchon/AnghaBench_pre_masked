
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dummy; } ;
struct fs_struct {struct path pwd; struct path root; int seq; } ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct fs_struct *VAR_0, struct path *VAR_1,
        struct path *VAR_2)
{
 unsigned VAR_3;

 do {
  VAR_3 = FUNC_0(&VAR_0->seq);
  *VAR_1 = VAR_0->root;
  *VAR_2 = VAR_0->pwd;
 } while (FUNC_1(&VAR_0->seq, VAR_3));
}
