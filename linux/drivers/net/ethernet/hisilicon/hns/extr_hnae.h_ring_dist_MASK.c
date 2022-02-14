
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae_ring {int desc_num; } ;


 int FUNC_0 (struct hnae_ring*,int) ;

__attribute__((used)) static inline int FUNC_1(struct hnae_ring *VAR_0, int VAR_1, int VAR_2)
{
 FUNC_0(VAR_0, VAR_1);
 FUNC_0(VAR_0, VAR_2);

 return (VAR_2 - VAR_1 + VAR_0->desc_num) % VAR_0->desc_num;
}
