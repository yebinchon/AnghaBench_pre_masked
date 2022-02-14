
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int host_elapsed_seconds; } ;
union aac_init {TYPE_1__ r7; } ;
typedef scalar_t__ ulong ;
typedef int u32 ;
struct aac_dev {scalar_t__ init_pa; union aac_init* init; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct aac_dev*,int ,int ,int ,int ,int ,int ,int ,int *,int *,int *,int *,int *) ;

__attribute__((used)) static void FUNC_3(struct aac_dev *VAR_1)
{
 union aac_init *VAR_2;



 VAR_2 = VAR_1->init;
 VAR_2->r7.host_elapsed_seconds = FUNC_0(FUNC_1());

 FUNC_2(VAR_1, VAR_0,
   (u32)(ulong)VAR_1->init_pa, 0, 0, 0, 0, 0,
   ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
}
