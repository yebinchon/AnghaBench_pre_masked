
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wahc {unsigned int rpipes; int rpipe_lock; int rpipe_bm; } ;


 unsigned int FUNC_0 (int ,unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static unsigned FUNC_4(struct wahc *VAR_0, unsigned VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_0->rpipe_lock, VAR_2);
 VAR_1 = FUNC_0(VAR_0->rpipe_bm, VAR_0->rpipes, VAR_1);
 if (VAR_1 < VAR_0->rpipes)
  FUNC_1(VAR_1, VAR_0->rpipe_bm);
 FUNC_3(&VAR_0->rpipe_lock, VAR_2);

 return VAR_1;
}
