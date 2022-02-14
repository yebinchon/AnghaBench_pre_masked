
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int link_paddr; } ;
struct slic_device {TYPE_1__ shmem; } ;


 int VAR_0 ;
 int FUNC_0 (struct slic_device*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct slic_device *VAR_1)
{
 return FUNC_0(VAR_1, VAR_0, VAR_1->shmem.link_paddr);
}
