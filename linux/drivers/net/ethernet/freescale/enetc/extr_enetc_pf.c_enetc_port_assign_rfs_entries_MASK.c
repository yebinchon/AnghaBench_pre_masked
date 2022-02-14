
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct enetc_hw {int dummy; } ;
struct enetc_si {struct enetc_hw hw; } ;
struct enetc_pf {int total_vfs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct enetc_hw*,int ) ;
 int FUNC_3 (struct enetc_hw*,int ,int) ;
 struct enetc_pf* FUNC_4 (struct enetc_si*) ;

__attribute__((used)) static void FUNC_5(struct enetc_si *VAR_3)
{
 struct enetc_pf *VAR_4 = FUNC_4(VAR_3);
 struct enetc_hw *VAR_5 = &VAR_3->hw;
 int VAR_6, VAR_7, VAR_8;
 u32 VAR_9;


 VAR_9 = FUNC_2(VAR_5, VAR_0);
 VAR_6 = FUNC_0(VAR_9);
 VAR_7 = VAR_6 / (VAR_4->total_vfs + 1);

 for (VAR_8 = 0; VAR_8 < VAR_4->total_vfs; VAR_8++)
  FUNC_3(VAR_5, FUNC_1(VAR_8 + 1), VAR_7);
 FUNC_3(VAR_5, FUNC_1(0),
        VAR_6 - VAR_7 * VAR_4->total_vfs);


 FUNC_3(VAR_5, VAR_1, VAR_2);
}
