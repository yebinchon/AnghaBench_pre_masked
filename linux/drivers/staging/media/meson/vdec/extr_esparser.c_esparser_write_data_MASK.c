
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amvdec_core {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct amvdec_core*,int ,int) ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_2(struct amvdec_core *VAR_14, dma_addr_t VAR_15, u32 VAR_16)
{
 FUNC_0(VAR_14, VAR_9, 0);
 FUNC_0(VAR_14, VAR_10, 0);
 FUNC_0(VAR_14, VAR_6,
       VAR_3 |
       VAR_1 |
       VAR_2 |
       (VAR_16 << VAR_0));

 FUNC_0(VAR_14, VAR_7, VAR_15);
 FUNC_0(VAR_14, VAR_8,
       (7 << VAR_4) |
       (VAR_16 + VAR_11));

 VAR_12 = 0;
 return FUNC_1(VAR_13, VAR_12, (VAR_5 / 5));
}
