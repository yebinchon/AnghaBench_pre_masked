
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenvif_queue {int tx; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct xenvif_queue *VAR_0)
{
 if (FUNC_1(FUNC_0(&VAR_0->tx)))
  return 1;

 return 0;
}
