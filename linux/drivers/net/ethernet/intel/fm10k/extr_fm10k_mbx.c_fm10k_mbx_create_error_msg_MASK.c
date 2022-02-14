
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm10k_mbx_info {int mbx_hdr; int head; int mbx_lock; } ;
typedef int s32 ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(struct fm10k_mbx_info *VAR_5, s32 VAR_6)
{

 switch (VAR_6) {
 case 129:
 case 132:
 case 128:
 case 130:
 case 131:
 case 133:
  break;
 default:
  return;
 }

 VAR_5->mbx_lock |= VAR_1;

 VAR_5->mbx_hdr = FUNC_0(VAR_2, VAR_4) |
         FUNC_0(VAR_6, VAR_0) |
         FUNC_0(VAR_5->head, VAR_3);
}
