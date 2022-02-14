
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* val; } ;
struct qdio_q {TYPE_1__ slsb; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ FUNC_0 (struct qdio_q*) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct qdio_q*,unsigned char*,unsigned int,unsigned int,int) ;

__attribute__((used)) static inline int FUNC_3(struct qdio_q *VAR_3, unsigned int VAR_4,
     unsigned char *VAR_5, unsigned int VAR_6,
     int VAR_7, int VAR_8)
{
 unsigned char VAR_9 = 0;
 int VAR_10 = 1;

 if (FUNC_0(VAR_3))
  return FUNC_2(VAR_3, VAR_5, VAR_4, VAR_6, VAR_7);


 VAR_9 = VAR_3->slsb.val[VAR_4];


 if (VAR_9 & VAR_0)
  goto out;

 if (VAR_8 && VAR_9 == VAR_2)
  VAR_9 = VAR_1;

 for (; VAR_10 < VAR_6; VAR_10++) {
  VAR_4 = FUNC_1(VAR_4);


  if (VAR_8 &&
      VAR_3->slsb.val[VAR_4] == VAR_2 &&
      VAR_9 == VAR_1)
   continue;


  if (VAR_3->slsb.val[VAR_4] != VAR_9)
   break;
 }

out:
 *VAR_5 = VAR_9;
 return VAR_10;
}
