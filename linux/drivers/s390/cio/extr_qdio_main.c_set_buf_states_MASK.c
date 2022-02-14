
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * val; } ;
struct qdio_q {TYPE_1__ slsb; } ;


 scalar_t__ FUNC_0 (struct qdio_q*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct qdio_q*,unsigned char,int,int) ;
 int FUNC_3 (int *,unsigned char) ;

__attribute__((used)) static inline int FUNC_4(struct qdio_q *VAR_0, int VAR_1,
     unsigned char VAR_2, int VAR_3)
{
 int VAR_4;

 if (FUNC_0(VAR_0))
  return FUNC_2(VAR_0, VAR_2, VAR_1, VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  FUNC_3(&VAR_0->slsb.val[VAR_1], VAR_2);
  VAR_1 = FUNC_1(VAR_1);
 }
 return VAR_3;
}
