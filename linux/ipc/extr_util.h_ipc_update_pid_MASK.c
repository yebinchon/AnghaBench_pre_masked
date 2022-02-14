
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid {int dummy; } ;


 struct pid* FUNC_0 (struct pid*) ;
 int FUNC_1 (struct pid*) ;

__attribute__((used)) static inline void FUNC_2(struct pid **VAR_0, struct pid *VAR_1)
{
 struct pid *VAR_2 = *VAR_0;
 if (VAR_2 != VAR_1) {
  *VAR_0 = FUNC_0(VAR_1);
  FUNC_1(VAR_2);
 }
}
