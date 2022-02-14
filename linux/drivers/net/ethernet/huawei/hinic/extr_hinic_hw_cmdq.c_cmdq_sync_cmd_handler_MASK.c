
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct hinic_cmdq {int cmdq_lock; scalar_t__* done; } ;


 int FUNC_0 (struct hinic_cmdq*,size_t,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct hinic_cmdq *VAR_0, u16 VAR_1,
      int VAR_2)
{
 u16 VAR_3 = VAR_1;

 FUNC_2(&VAR_0->cmdq_lock);
 FUNC_0(VAR_0, VAR_3, VAR_2);

 FUNC_4();

 if (VAR_0->done[VAR_3])
  FUNC_1(VAR_0->done[VAR_3]);
 FUNC_3(&VAR_0->cmdq_lock);
}
