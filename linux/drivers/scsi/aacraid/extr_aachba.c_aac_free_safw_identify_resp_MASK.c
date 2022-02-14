
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aac_dev {TYPE_1__** hba_map; } ;
struct TYPE_2__ {int * safw_identify_resp; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct aac_dev *VAR_0,
      int VAR_1, int VAR_2)
{
 FUNC_0(VAR_0->hba_map[VAR_1][VAR_2].safw_identify_resp);
 VAR_0->hba_map[VAR_1][VAR_2].safw_identify_resp = ((void*)0);
}
