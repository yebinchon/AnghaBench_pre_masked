
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae_ring {int dummy; } ;
struct hnae_desc_cb {scalar_t__ type; scalar_t__ length; int dma; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 int FUNC_2 (struct hnae_ring*) ;
 int FUNC_3 (struct hnae_ring*) ;

__attribute__((used)) static void FUNC_4(struct hnae_ring *VAR_1, struct hnae_desc_cb *VAR_2)
{
 if (VAR_2->type == VAR_0)
  FUNC_1(FUNC_2(VAR_1), VAR_2->dma, VAR_2->length,
     FUNC_3(VAR_1));
 else if (VAR_2->length)
  FUNC_0(FUNC_2(VAR_1), VAR_2->dma, VAR_2->length,
          FUNC_3(VAR_1));
}
