
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dmae_command {int dst_addr_lo; int len; scalar_t__ dst_addr_hi; int src_addr_hi; int src_addr_lo; } ;
struct bnx2x {int dmae_ready; } ;
typedef int dma_addr_t ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct bnx2x*,int,int*,int) ;
 int FUNC_5 (struct bnx2x*,int,int*,int) ;
 int FUNC_6 (struct bnx2x*,struct dmae_command*,int*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct bnx2x*,struct dmae_command*,int ,int ) ;
 int* FUNC_9 (struct bnx2x*,int ) ;
 int VAR_2 ;
 int * VAR_3 ;

void FUNC_10(struct bnx2x *VAR_4, dma_addr_t VAR_5, u32 VAR_6,
        u32 VAR_7)
{
 int VAR_8;
 struct dmae_command VAR_9;

 if (!VAR_4->dmae_ready) {
  u32 *VAR_10 = FUNC_9(VAR_4, VAR_3[0]);

  if (FUNC_1(VAR_4))
   FUNC_4(VAR_4, VAR_6, VAR_10, VAR_7);
  else
   FUNC_5(VAR_4, VAR_6, VAR_10, VAR_7);
  return;
 }


 FUNC_8(VAR_4, &VAR_9, VAR_1, VAR_0);


 VAR_9.src_addr_lo = FUNC_3(VAR_5);
 VAR_9.src_addr_hi = FUNC_2(VAR_5);
 VAR_9.dst_addr_lo = VAR_6 >> 2;
 VAR_9.dst_addr_hi = 0;
 VAR_9.len = VAR_7;


 VAR_8 = FUNC_6(VAR_4, &VAR_9, FUNC_9(VAR_4, VAR_2));
 if (VAR_8) {
  FUNC_0("DMAE returned failure %d\n", VAR_8);



 }
}
