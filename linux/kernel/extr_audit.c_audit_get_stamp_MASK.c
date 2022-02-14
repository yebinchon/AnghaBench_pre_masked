
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int dummy; } ;
struct audit_context {int dummy; } ;


 unsigned int FUNC_0 () ;
 int FUNC_1 (struct audit_context*,struct timespec64*,unsigned int*) ;
 int FUNC_2 (struct timespec64*) ;

__attribute__((used)) static inline void FUNC_3(struct audit_context *VAR_0,
       struct timespec64 *VAR_1, unsigned int *VAR_2)
{
 if (!VAR_0 || !FUNC_1(VAR_0, VAR_1, VAR_2)) {
  FUNC_2(VAR_1);
  *VAR_2 = FUNC_0();
 }
}
