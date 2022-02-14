
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hnae_ring {int q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct hnae_ring*) ;

__attribute__((used)) static void FUNC_2(struct hnae_ring *VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 if (FUNC_1(VAR_2))
  VAR_4 = VAR_1;
 else
  VAR_4 = VAR_0;

 FUNC_0(VAR_2->q, VAR_4, VAR_3);
}
