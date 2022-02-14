
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spk_synth {scalar_t__ ser; int dev_name; } ;
typedef int dev_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct spk_synth *VAR_2, dev_t *VAR_3)
{

 if (FUNC_1(VAR_2->dev_name, VAR_0) ||
     VAR_2->ser == VAR_1)
  return FUNC_2(VAR_2->dev_name, VAR_3);

 return FUNC_0(VAR_2->ser, VAR_3);
}
