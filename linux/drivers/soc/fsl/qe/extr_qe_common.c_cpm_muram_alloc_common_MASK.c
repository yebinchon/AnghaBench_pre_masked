
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct muram_block {unsigned long start; unsigned long size; int head; } ;
typedef int genpool_algo_t ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 () ;
 unsigned long FUNC_2 (int ,unsigned long,int ,void*) ;
 int FUNC_3 (int ,unsigned long,unsigned long) ;
 struct muram_block* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int ,unsigned long) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static unsigned long FUNC_7(unsigned long VAR_5,
  genpool_algo_t VAR_6, void *VAR_7)
{
 struct muram_block *VAR_8;
 unsigned long VAR_9;

 if (!VAR_4 && FUNC_1())
  goto out2;

 VAR_9 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7);
 if (!VAR_9)
  goto out2;
 VAR_9 = VAR_9 - VAR_1;
 FUNC_6(FUNC_0(VAR_9), 0, VAR_5);
 VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  goto out1;
 VAR_8->start = VAR_9;
 VAR_8->size = VAR_5;
 FUNC_5(&VAR_8->head, &VAR_3);

 return VAR_9;
out1:
 FUNC_3(VAR_4, VAR_9, VAR_5);
out2:
 return (unsigned long)-VAR_0;
}
