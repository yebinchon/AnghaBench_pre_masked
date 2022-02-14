
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct urb* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct urb*,int ,int) ;
 int FUNC_2 (struct urb*) ;

struct urb *FUNC_3(int VAR_1, gfp_t VAR_2)
{
 struct urb *VAR_3;

 VAR_3 = FUNC_0(FUNC_1(VAR_3, VAR_0, VAR_1),
        VAR_2);
 if (!VAR_3)
  return ((void*)0);
 FUNC_2(VAR_3);
 return VAR_3;
}
