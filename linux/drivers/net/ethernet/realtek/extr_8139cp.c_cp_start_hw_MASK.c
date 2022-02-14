
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cp_private {int ring_dma; int dev; int cpcmd; } ;
struct cp_desc {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4 (struct cp_private *VAR_8)
{
 dma_addr_t VAR_9;

 FUNC_0(VAR_2, VAR_8->cpcmd);
 FUNC_1(VAR_3, 0);
 FUNC_1(VAR_3 + 4, 0);

 VAR_9 = VAR_8->ring_dma;
 FUNC_1(VAR_5, VAR_9 & 0xffffffff);
 FUNC_1(VAR_5 + 4, (VAR_9 >> 16) >> 16);

 VAR_9 += sizeof(struct cp_desc) * VAR_0;
 FUNC_1(VAR_7, VAR_9 & 0xffffffff);
 FUNC_1(VAR_7 + 4, (VAR_9 >> 16) >> 16);







 FUNC_2(VAR_1, VAR_4 | VAR_6);

 FUNC_3(VAR_8->dev);
}
