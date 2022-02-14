
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int mask; } ;
struct fmdev {TYPE_1__ irq_info; } ;
typedef int payload ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fmdev*,int ) ;
 int FUNC_1 (struct fmdev*,int ,int ,int *,int,int *) ;

__attribute__((used)) static void FUNC_2(struct fmdev *VAR_3)
{
 u16 VAR_4;


 VAR_4 = VAR_3->irq_info.mask;

 if (!FUNC_1(VAR_3, VAR_1, VAR_2, &VAR_4,
   sizeof(VAR_4), ((void*)0)))
  FUNC_0(VAR_3, VAR_0);
}
