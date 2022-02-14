
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct scatterlist*,void*,unsigned int) ;
 int FUNC_4 (struct scatterlist*,int) ;
 int FUNC_5 (struct scatterlist*,int ,unsigned int,int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;

__attribute__((used)) static void
FUNC_8(struct scatterlist *VAR_0, void *VAR_1, unsigned int VAR_2)
{
 if (FUNC_1(VAR_1)) {
  FUNC_4(VAR_0, 1);
  FUNC_5(VAR_0, FUNC_7(VAR_1), VAR_2,
       FUNC_2(VAR_1));
 } else {
  FUNC_0(!FUNC_6(VAR_1));
  FUNC_3(VAR_0, VAR_1, VAR_2);
 }
}
