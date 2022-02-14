
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae_ring {int desc_num; } ;


 int FUNC_0 (struct hnae_ring*,int) ;

__attribute__((used)) static void FUNC_1(struct hnae_ring *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->desc_num; VAR_1++)
  FUNC_0(VAR_0, VAR_1);
}
