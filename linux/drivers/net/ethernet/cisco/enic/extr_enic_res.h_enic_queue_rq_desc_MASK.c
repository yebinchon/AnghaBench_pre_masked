
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct vnic_rq {int dummy; } ;
struct rq_enet_desc {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rq_enet_desc*,int,int ,int ) ;
 struct rq_enet_desc* FUNC_1 (struct vnic_rq*) ;
 int FUNC_2 (struct vnic_rq*,void*,unsigned int,scalar_t__,unsigned int,int) ;

__attribute__((used)) static inline void FUNC_3(struct vnic_rq *VAR_3,
 void *VAR_4, unsigned int VAR_5,
 dma_addr_t VAR_6, unsigned int VAR_7)
{
 struct rq_enet_desc *VAR_8 = FUNC_1(VAR_3);
 u64 VAR_9 = 0;
 u8 VAR_10 = VAR_5 ?
  VAR_0 : VAR_1;

 FUNC_0(VAR_8,
  (u64)VAR_6 | VAR_2,
  VAR_10, (u16)VAR_7);

 FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_9);
}
