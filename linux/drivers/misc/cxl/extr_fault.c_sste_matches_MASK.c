
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl_sste {scalar_t__ vsid_data; scalar_t__ esid_data; } ;
struct copro_slb {int esid; int vsid; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct cxl_sste *VAR_0, struct copro_slb *VAR_1)
{
 return ((VAR_0->vsid_data == FUNC_0(VAR_1->vsid)) &&
  (VAR_0->esid_data == FUNC_0(VAR_1->esid)));
}
