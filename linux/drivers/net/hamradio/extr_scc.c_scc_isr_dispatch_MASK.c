
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scc_channel {int lock; } ;






 int VAR_0 ;
 int FUNC_0 (struct scc_channel*) ;
 int FUNC_1 (struct scc_channel*) ;
 int FUNC_2 (struct scc_channel*) ;
 int FUNC_3 (struct scc_channel*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct scc_channel *VAR_1, int VAR_2)
{
 FUNC_4(&VAR_1->lock);
 switch (VAR_2 & VAR_0)
 {
  case 128: FUNC_3(VAR_1); break;
  case 131: FUNC_0(VAR_1); break;
  case 130: FUNC_1(VAR_1); break;
  case 129: FUNC_2(VAR_1); break;
 }
 FUNC_5(&VAR_1->lock);
}
