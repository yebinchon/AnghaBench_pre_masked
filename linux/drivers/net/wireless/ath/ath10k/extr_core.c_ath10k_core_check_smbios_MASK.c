
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* bdf_ext; } ;
struct ath10k {TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct ath10k*) ;

__attribute__((used)) static int FUNC_1(struct ath10k *VAR_2)
{
 VAR_2->id.bdf_ext[0] = '\0';
 FUNC_0(VAR_1, VAR_2);

 if (VAR_2->id.bdf_ext[0] == '\0')
  return -VAR_0;

 return 0;
}
