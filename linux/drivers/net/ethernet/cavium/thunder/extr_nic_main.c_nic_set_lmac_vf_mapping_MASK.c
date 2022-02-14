
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct nicpf {scalar_t__ num_vf_en; int pdev; int * vf_lmac_map; int node; TYPE_1__* hw; } ;
struct TYPE_2__ {int bgx_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct nicpf*,scalar_t__,int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct nicpf *VAR_3)
{
 unsigned VAR_4 = FUNC_2(VAR_3->node);
 int VAR_5, VAR_6 = 0;
 int VAR_7, VAR_8 = 0;
 u64 VAR_9;

 VAR_3->num_vf_en = 0;

 for (VAR_5 = 0; VAR_5 < VAR_3->hw->bgx_cnt; VAR_5++) {
  if (!(VAR_4 & (1 << VAR_5)))
   continue;
  VAR_8 = FUNC_1(VAR_3->node, VAR_5);
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
   VAR_3->vf_lmac_map[VAR_6++] =
      FUNC_0(VAR_5, VAR_7);
  VAR_3->num_vf_en += VAR_8;


  VAR_9 = (1ull << 1);
  VAR_9 |= (0x1ff << 2);

  VAR_9 |= (((((48 * 1024) / VAR_8) -
    VAR_1) / 16) << 12);
  VAR_7 = VAR_5 * VAR_0;
  for (; VAR_7 < VAR_8 + (VAR_5 * VAR_0); VAR_7++)
   FUNC_3(VAR_3,
          VAR_2 + (VAR_7 * 8),
          VAR_9);




  if (VAR_3->num_vf_en >= FUNC_4(VAR_3->pdev)) {
   VAR_3->num_vf_en = FUNC_4(VAR_3->pdev);
   break;
  }
 }
}
