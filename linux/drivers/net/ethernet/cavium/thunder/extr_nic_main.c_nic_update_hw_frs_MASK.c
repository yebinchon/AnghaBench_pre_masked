
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nicpf {int pdev; int node; int * vf_lmac_map; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct nicpf*,scalar_t__) ;
 int FUNC_4 (struct nicpf*,scalar_t__,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct nicpf *VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 u64 VAR_13;

 if ((VAR_8 > VAR_2) || (VAR_8 < VAR_3))
  return 1;

 VAR_10 = FUNC_0(VAR_7->vf_lmac_map[VAR_9]);
 VAR_11 = FUNC_1(VAR_7->vf_lmac_map[VAR_9]);
 VAR_11 += VAR_10 * VAR_1;

 VAR_8 += VAR_6 + VAR_0 + 4;


 VAR_12 = FUNC_2(VAR_7->node, VAR_10);
 VAR_13 = FUNC_3(VAR_7, VAR_5 + (VAR_11 * 8));
 VAR_13 &= ~(0xFFFFFULL << 12);
 VAR_13 |= (((((48 * 1024) / VAR_12) - VAR_8) / 16) << 12);
 FUNC_4(VAR_7, VAR_5 + (VAR_11 * 8), VAR_13);




 if (!FUNC_5(VAR_7->pdev))
  FUNC_4(VAR_7,
         VAR_4 + (VAR_11 * 8), VAR_8);
 return 0;
}
