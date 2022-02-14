
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int cf1; int irf1; int cf2; int irf2; int df; int ga; } ;
struct apds990x_chip {size_t again_meas; scalar_t__ atime; TYPE_1__ cf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct apds990x_chip *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 u32 VAR_9;





 VAR_7 = (VAR_3->cf.cf1 * VAR_4 - VAR_3->cf.irf1 * VAR_5) / VAR_1;
 VAR_8 = (VAR_3->cf.cf2 * VAR_4 - VAR_3->cf.irf2 * VAR_5) / VAR_1;

 VAR_6 = FUNC_0(VAR_7, VAR_8);
 VAR_6 = FUNC_0(VAR_6, 0);

 VAR_9 = VAR_0 * (VAR_3->cf.df * VAR_3->cf.ga) /
  (u32)(VAR_2[VAR_3->again_meas] * (u32)VAR_3->atime);

 return (VAR_6 * VAR_9) / VAR_1;
}
