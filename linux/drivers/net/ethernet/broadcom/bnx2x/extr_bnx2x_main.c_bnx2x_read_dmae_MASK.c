
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dmae_command {int src_addr_lo; int len; int dst_addr_hi; int dst_addr_lo; scalar_t__ src_addr_hi; } ;
struct bnx2x {int dmae_ready; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct bnx2x*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct bnx2x*,struct dmae_command*,int*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct bnx2x*,struct dmae_command*,int ,int ) ;
 int FUNC_8 (struct bnx2x*,int) ;
 int* FUNC_9 (struct bnx2x*,int ) ;
 int FUNC_10 (struct bnx2x*,int *) ;
 int VAR_2 ;
 int * VAR_3 ;

void FUNC_11(struct bnx2x *VAR_4, u32 VAR_5, u32 VAR_6)
{
 int VAR_7;
 struct dmae_command VAR_8;

 if (!VAR_4->dmae_ready) {
  u32 *VAR_9 = FUNC_9(VAR_4, VAR_3[0]);
  int VAR_10;

  if (FUNC_1(VAR_4))
   for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
    VAR_9[VAR_10] = FUNC_8(VAR_4, VAR_5 + VAR_10*4);
  else
   for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
    VAR_9[VAR_10] = FUNC_2(VAR_4, VAR_5 + VAR_10*4);

  return;
 }


 FUNC_7(VAR_4, &VAR_8, VAR_1, VAR_0);


 VAR_8.src_addr_lo = VAR_5 >> 2;
 VAR_8.src_addr_hi = 0;
 VAR_8.dst_addr_lo = FUNC_4(FUNC_10(VAR_4, VAR_3));
 VAR_8.dst_addr_hi = FUNC_3(FUNC_10(VAR_4, VAR_3));
 VAR_8.len = VAR_6;


 VAR_7 = FUNC_5(VAR_4, &VAR_8, FUNC_9(VAR_4, VAR_2));
 if (VAR_7) {
  FUNC_0("DMAE returned failure %d\n", VAR_7);



 }
}
