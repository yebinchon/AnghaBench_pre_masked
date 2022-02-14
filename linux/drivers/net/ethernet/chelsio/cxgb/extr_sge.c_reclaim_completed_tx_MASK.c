
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge {int dummy; } ;
struct cmdQ {unsigned int processed; unsigned int cleaned; } ;


 int FUNC_0 (struct sge*,struct cmdQ*,unsigned int) ;
 int FUNC_1 (char*,unsigned int,unsigned int) ;

__attribute__((used)) static inline void FUNC_2(struct sge *VAR_0, struct cmdQ *VAR_1)
{
 unsigned int VAR_2 = VAR_1->processed - VAR_1->cleaned;

 if (VAR_2) {
  FUNC_1("reclaim_completed_tx processed:%d cleaned:%d\n",
    VAR_1->processed, VAR_1->cleaned);
  FUNC_0(VAR_0, VAR_1, VAR_2);
  VAR_1->cleaned += VAR_2;
 }
}
