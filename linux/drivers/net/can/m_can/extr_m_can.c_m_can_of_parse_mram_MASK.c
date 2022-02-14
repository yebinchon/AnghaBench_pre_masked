
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct m_can_classdev {TYPE_1__* mcfg; int dev; } ;
struct TYPE_2__ {int off; int num; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int const VAR_10 ;
 int const VAR_11 ;
 int VAR_12 ;
 int const VAR_13 ;
 int const VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,char*,int,int,int,int,int,int,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct m_can_classdev *VAR_17,
    const u32 *VAR_18)
{
 VAR_17->mcfg[VAR_3].off = VAR_18[0];
 VAR_17->mcfg[VAR_3].num = VAR_18[1];
 VAR_17->mcfg[VAR_6].off = VAR_17->mcfg[VAR_3].off +
   VAR_17->mcfg[VAR_3].num * VAR_12;
 VAR_17->mcfg[VAR_6].num = VAR_18[2];
 VAR_17->mcfg[VAR_1].off = VAR_17->mcfg[VAR_6].off +
   VAR_17->mcfg[VAR_6].num * VAR_16;
 VAR_17->mcfg[VAR_1].num = VAR_18[3] &
   (VAR_10 >> VAR_11);
 VAR_17->mcfg[VAR_2].off = VAR_17->mcfg[VAR_1].off +
   VAR_17->mcfg[VAR_1].num * VAR_8;
 VAR_17->mcfg[VAR_2].num = VAR_18[4] &
   (VAR_10 >> VAR_11);
 VAR_17->mcfg[VAR_0].off = VAR_17->mcfg[VAR_2].off +
   VAR_17->mcfg[VAR_2].num * VAR_9;
 VAR_17->mcfg[VAR_0].num = VAR_18[5];
 VAR_17->mcfg[VAR_5].off = VAR_17->mcfg[VAR_0].off +
   VAR_17->mcfg[VAR_0].num * VAR_7;
 VAR_17->mcfg[VAR_5].num = VAR_18[6];
 VAR_17->mcfg[VAR_4].off = VAR_17->mcfg[VAR_5].off +
   VAR_17->mcfg[VAR_5].num * VAR_15;
 VAR_17->mcfg[VAR_4].num = VAR_18[7] &
   (VAR_13 >> VAR_14);

 FUNC_0(VAR_17->dev,
  "sidf 0x%x %d xidf 0x%x %d rxf0 0x%x %d rxf1 0x%x %d rxb 0x%x %d txe 0x%x %d txb 0x%x %d\n",
  VAR_17->mcfg[VAR_3].off, VAR_17->mcfg[VAR_3].num,
  VAR_17->mcfg[VAR_6].off, VAR_17->mcfg[VAR_6].num,
  VAR_17->mcfg[VAR_1].off, VAR_17->mcfg[VAR_1].num,
  VAR_17->mcfg[VAR_2].off, VAR_17->mcfg[VAR_2].num,
  VAR_17->mcfg[VAR_0].off, VAR_17->mcfg[VAR_0].num,
  VAR_17->mcfg[VAR_5].off, VAR_17->mcfg[VAR_5].num,
  VAR_17->mcfg[VAR_4].off, VAR_17->mcfg[VAR_4].num);
}
