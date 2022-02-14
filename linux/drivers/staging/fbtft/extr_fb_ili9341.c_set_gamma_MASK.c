
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int num_curves; } ;
struct fbtft_par {TYPE_1__ gamma; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct fbtft_par*,int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct fbtft_par *VAR_0, u32 *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->gamma.num_curves; VAR_2++)
  FUNC_1(VAR_0, 0xE0 + VAR_2,
     FUNC_0(VAR_2, 0), FUNC_0(VAR_2, 1), FUNC_0(VAR_2, 2),
     FUNC_0(VAR_2, 3), FUNC_0(VAR_2, 4), FUNC_0(VAR_2, 5),
     FUNC_0(VAR_2, 6), FUNC_0(VAR_2, 7), FUNC_0(VAR_2, 8),
     FUNC_0(VAR_2, 9), FUNC_0(VAR_2, 10), FUNC_0(VAR_2, 11),
     FUNC_0(VAR_2, 12), FUNC_0(VAR_2, 13), FUNC_0(VAR_2, 14));

 return 0;
}
