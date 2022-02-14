
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pf_vf_bulletin_content {int length; int version; } ;
struct bnx2x {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int mapping; } ;


 struct pf_vf_bulletin_content* FUNC_0 (struct bnx2x*,int) ;
 TYPE_1__* FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct bnx2x*,int,int,int,int ,int ,int) ;
 int FUNC_5 (struct bnx2x*,int,int ) ;
 int FUNC_6 (struct pf_vf_bulletin_content*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_7(struct bnx2x *VAR_8, int VAR_9)
{
 struct pf_vf_bulletin_content *VAR_10 = FUNC_0(VAR_8, VAR_9);
 dma_addr_t VAR_11 = FUNC_1(VAR_8)->mapping +
  VAR_9 * VAR_0;
 dma_addr_t VAR_12 = FUNC_5(VAR_8, VAR_9, VAR_5);
 int VAR_13;


 if (FUNC_5(VAR_8, VAR_9, VAR_7) != VAR_3 &&
     FUNC_5(VAR_8, VAR_9, VAR_7) != VAR_1)
  return 0;


 VAR_10->version++;
 FUNC_6(VAR_10,
       (FUNC_5(VAR_8, VAR_9, VAR_6) &
        VAR_2) ? 1 : 0);


 VAR_13 = FUNC_4(VAR_8, 0, VAR_11,
      FUNC_5(VAR_8, VAR_9, VAR_4), FUNC_2(VAR_12),
      FUNC_3(VAR_12), VAR_10->length / 4);
 return VAR_13;
}
