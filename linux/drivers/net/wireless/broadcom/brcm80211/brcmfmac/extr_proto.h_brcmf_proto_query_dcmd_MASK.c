
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct brcmf_pub {TYPE_1__* proto; } ;
struct TYPE_2__ {int (* query_dcmd ) (struct brcmf_pub*,int,int ,void*,int ,int*) ;} ;


 int FUNC_0 (struct brcmf_pub*,int,int ,void*,int ,int*) ;

__attribute__((used)) static inline int FUNC_1(struct brcmf_pub *VAR_0, int VAR_1,
      uint VAR_2, void *VAR_3, uint VAR_4,
      int *VAR_5)
{
 return VAR_0->proto->query_dcmd(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,VAR_5);
}
