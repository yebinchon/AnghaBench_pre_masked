
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct be_mcc_wrb {int emb_sgecnt_special; int payload_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct be_mcc_wrb*,int) ;

void FUNC_1(struct be_mcc_wrb *VAR_3, u32 VAR_4,
   bool VAR_5, u8 VAR_6)
{
 if (VAR_5)
  VAR_3->emb_sgecnt_special |= VAR_0;
 else
  VAR_3->emb_sgecnt_special |= (VAR_6 & VAR_1) <<
        VAR_2;
 VAR_3->payload_length = VAR_4;
 FUNC_0(VAR_3, 8);
}
