
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmlogrdr_priv_t {int * device; int minor_num; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct vmlogrdr_priv_t *VAR_2)
{
 FUNC_1(VAR_0, FUNC_0(VAR_1, VAR_2->minor_num));
 if (VAR_2->device != ((void*)0)) {
  FUNC_2(VAR_2->device);
  VAR_2->device=((void*)0);
 }
 return 0;
}
