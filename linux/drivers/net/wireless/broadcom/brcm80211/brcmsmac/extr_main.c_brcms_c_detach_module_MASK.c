
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_c_info {int * ampdu; int * asi; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct brcms_c_info*) ;

__attribute__((used)) static void FUNC_3(struct brcms_c_info *VAR_0)
{
 if (VAR_0->asi) {
  FUNC_1(VAR_0->asi);
  VAR_0->asi = ((void*)0);
 }

 if (VAR_0->ampdu) {
  FUNC_0(VAR_0->ampdu);
  VAR_0->ampdu = ((void*)0);
 }

 FUNC_2(VAR_0);
}
