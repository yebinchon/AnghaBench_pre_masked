
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rocker_dma_ring_info {scalar_t__ tail; int type; scalar_t__ head; int size; } ;
struct rocker_desc_info {int dummy; } ;
struct rocker {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct rocker_desc_info const*) ;
 int FUNC_4 (struct rocker const*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(const struct rocker *VAR_0,
     struct rocker_dma_ring_info *VAR_1,
     const struct rocker_desc_info *VAR_2)
{
 u32 VAR_3 = FUNC_2(VAR_1->head, VAR_1->size);

 FUNC_0(VAR_3 == VAR_1->tail);
 FUNC_3(VAR_2);
 VAR_1->head = VAR_3;
 FUNC_4(VAR_0, FUNC_1(VAR_1->type), VAR_3);
}
