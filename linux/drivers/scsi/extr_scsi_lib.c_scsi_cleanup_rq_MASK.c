
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int rq_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct request*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct request *VAR_1)
{
 if (VAR_1->rq_flags & VAR_0) {
  FUNC_1(FUNC_0(VAR_1));
  VAR_1->rq_flags &= ~VAR_0;
 }
}
