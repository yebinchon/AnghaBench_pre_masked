
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae_ring {int dummy; } ;
typedef enum hns_desc_type { ____Placeholder_hns_desc_type } hns_desc_type ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hnae_ring*,void*,int,int,scalar_t__,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct hnae_ring *VAR_3, void *VAR_4,
     int VAR_5, dma_addr_t VAR_6, int VAR_7,
     int VAR_8, enum hns_desc_type VAR_9, int VAR_10)
{
 int VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_11 = (VAR_5 + VAR_0 - 1) / VAR_0;
 VAR_12 = VAR_5 % VAR_0;
 VAR_12 = VAR_12 ? VAR_12 : VAR_0;


 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++)
  FUNC_0(VAR_3, VAR_4, VAR_13 == 0 ? VAR_5 : 0,
    (VAR_13 == VAR_11 - 1) ?
     VAR_12 : VAR_0,
    VAR_6 + VAR_0 * VAR_13,
    VAR_7 && (VAR_13 == VAR_11 - 1) ? 1 : 0,
    VAR_8,
    (VAR_9 == VAR_2 && !VAR_13) ?
     VAR_2 : VAR_1,
    VAR_10);
}
