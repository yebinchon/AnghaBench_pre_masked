
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ionic_lif {int state; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static inline int FUNC_4(struct ionic_lif *VAR_2, int VAR_3)
{
 unsigned long VAR_4 = VAR_1 + VAR_0;

 while (FUNC_0(VAR_3, VAR_2->state) &&
        FUNC_2(VAR_1, VAR_4))
  FUNC_3(100, 200);

 return FUNC_1(VAR_3, VAR_2->state);
}
