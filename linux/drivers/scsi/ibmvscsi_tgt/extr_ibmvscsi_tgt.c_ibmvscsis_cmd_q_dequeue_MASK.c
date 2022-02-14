
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct viosrp_crq {scalar_t__ valid; } ;


 int FUNC_0 () ;

__attribute__((used)) static struct viosrp_crq *FUNC_1(uint VAR_0,
        uint *VAR_1,
        struct viosrp_crq *VAR_2)
{
 struct viosrp_crq *VAR_3;

 VAR_3 = VAR_2 + *VAR_1;

 if (VAR_3->valid) {
  *VAR_1 = (*VAR_1 + 1) & VAR_0;
  FUNC_0();
 } else {
  VAR_3 = ((void*)0);
 }

 return VAR_3;
}
