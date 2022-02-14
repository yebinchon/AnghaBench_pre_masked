
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sas_identify_frame {int dummy; } ;
struct mvs_info {int id; TYPE_1__* chip; } ;
struct TYPE_2__ {int n_phy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sas_identify_frame*,int *,int) ;
 int FUNC_2 (char*,int,int,int ) ;
 int FUNC_3 (struct mvs_info*,int) ;
 int FUNC_4 (struct mvs_info*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct mvs_info *VAR_1, int VAR_2,
     struct sas_identify_frame *VAR_3)
{
 int VAR_4;
 u32 VAR_5[7];

 for (VAR_4 = 0; VAR_4 < 7; VAR_4++) {
  FUNC_4(VAR_1, VAR_2,
     VAR_0 + VAR_4 * 4);
  VAR_5[VAR_4] = FUNC_0(FUNC_3(VAR_1, VAR_2));
  FUNC_2("94xx phy %d atta frame %d %x.\n",
   VAR_2 + VAR_1->id * VAR_1->chip->n_phy, VAR_4, VAR_5[VAR_4]);
 }
 FUNC_1(VAR_3, VAR_5, 28);
}
