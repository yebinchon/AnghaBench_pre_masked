
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_wbuf {int next_ino; scalar_t__* inodes; int lock; } ;
typedef scalar_t__ ino_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct ubifs_wbuf *VAR_0, ino_t VAR_1)
{
 int VAR_2, VAR_3 = 0;

 FUNC_0(&VAR_0->lock);
 for (VAR_2 = 0; VAR_2 < VAR_0->next_ino; VAR_2++)
  if (VAR_1 == VAR_0->inodes[VAR_2]) {
   VAR_3 = 1;
   break;
  }
 FUNC_1(&VAR_0->lock);

 return VAR_3;
}
