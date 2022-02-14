
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ccw1 {int cda; } ;


 int FUNC_0 (struct ccw1*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static inline int FUNC_2(struct ccw1 *VAR_0, u32 VAR_1, int VAR_2)
{
 if (!FUNC_0(VAR_0))
  return 0;

 return FUNC_1(VAR_0->cda, VAR_1, VAR_2);
}
