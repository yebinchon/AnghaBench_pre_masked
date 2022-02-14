
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct i40e_vsi {int dummy; } ;
struct i40e_pf {int flags; size_t lan_vsi; TYPE_2__* pdev; TYPE_1__** vsi; int hw; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int seid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*) ;
 int VAR_4 ;
 struct i40e_vsi* FUNC_2 (struct i40e_pf*,int ) ;
 struct i40e_vsi* FUNC_3 (struct i40e_pf*,int ,int ,int ) ;
 int FUNC_4 (struct i40e_vsi*,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,int const) ;

__attribute__((used)) static void FUNC_7(struct i40e_pf *VAR_5)
{
 struct i40e_vsi *VAR_6;




 if (!FUNC_5(&VAR_5->hw, FUNC_0(0))) {
  static const u32 VAR_7[] = {
   0xe640d33f, 0xcdfe98ab, 0x73fa7161, 0x0d7a7d36,
   0xeacb7d61, 0xaa4f05b6, 0x9c5c89ed, 0xfc425ddb,
   0xa4654832, 0xfc7461d4, 0x8f827619, 0xf5c63c21,
   0x95b3a76d};
  int VAR_8;

  for (VAR_8 = 0; VAR_8 <= VAR_2; VAR_8++)
   FUNC_6(&VAR_5->hw, FUNC_0(VAR_8), VAR_7[VAR_8]);
 }

 if (!(VAR_5->flags & VAR_0))
  return;


 VAR_6 = FUNC_2(VAR_5, VAR_3);


 if (!VAR_6) {
  VAR_6 = FUNC_3(VAR_5, VAR_3,
         VAR_5->vsi[VAR_5->lan_vsi]->seid, 0);
  if (!VAR_6) {
   FUNC_1(&VAR_5->pdev->dev, "Couldn't create FDir VSI\n");
   VAR_5->flags &= ~VAR_0;
   VAR_5->flags |= VAR_1;
   return;
  }
 }

 FUNC_4(VAR_6, VAR_4);
}
