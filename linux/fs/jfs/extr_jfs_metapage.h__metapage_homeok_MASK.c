
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct metapage {int page; int nohomeok; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct metapage *VAR_0)
{
 if (!--VAR_0->nohomeok)
  FUNC_0(VAR_0->page);
}
