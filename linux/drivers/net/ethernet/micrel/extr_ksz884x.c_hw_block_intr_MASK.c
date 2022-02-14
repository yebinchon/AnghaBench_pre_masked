
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct ksz_hw {int intr_blocked; } ;


 int FUNC_0 (struct ksz_hw*) ;

__attribute__((used)) static uint FUNC_1(struct ksz_hw *VAR_0)
{
 uint VAR_1 = 0;

 if (!VAR_0->intr_blocked) {
  FUNC_0(VAR_0);
  VAR_1 = VAR_0->intr_blocked;
 }
 return VAR_1;
}
