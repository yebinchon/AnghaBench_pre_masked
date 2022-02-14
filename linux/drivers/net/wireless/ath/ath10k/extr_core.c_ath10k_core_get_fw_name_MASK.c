
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bus; } ;
struct ath10k {TYPE_1__ hif; } ;







 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,size_t,char*,int ,int,...) ;

__attribute__((used)) static void FUNC_2(struct ath10k *VAR_1, char *VAR_2,
        size_t VAR_3, int VAR_4)
{
 switch (VAR_1->hif.bus) {
 case 130:
 case 128:
  FUNC_1(VAR_2, VAR_3, "%s-%s-%d.bin",
     VAR_0, FUNC_0(VAR_1->hif.bus),
     VAR_4);
  break;
 case 131:
 case 132:
 case 129:
  FUNC_1(VAR_2, VAR_3, "%s-%d.bin",
     VAR_0, VAR_4);
  break;
 }
}
