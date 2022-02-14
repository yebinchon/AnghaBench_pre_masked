
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smp2p_entry {int smp2p; int lock; int value; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(void *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct smp2p_entry *VAR_3 = VAR_0;
 u32 VAR_4;
 u32 VAR_5;

 FUNC_2(&VAR_3->lock);
 VAR_5 = VAR_4 = FUNC_1(VAR_3->value);
 VAR_5 &= ~VAR_1;
 VAR_5 |= VAR_2;
 FUNC_4(VAR_5, VAR_3->value);
 FUNC_3(&VAR_3->lock);

 if (VAR_5 != VAR_4)
  FUNC_0(VAR_3->smp2p);

 return 0;
}
