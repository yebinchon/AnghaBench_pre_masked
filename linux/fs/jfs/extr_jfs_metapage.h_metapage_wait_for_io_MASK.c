
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct metapage {int page; int flag; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct metapage *VAR_1)
{
 if (FUNC_0(VAR_0, &VAR_1->flag))
  FUNC_1(VAR_1->page);
}
