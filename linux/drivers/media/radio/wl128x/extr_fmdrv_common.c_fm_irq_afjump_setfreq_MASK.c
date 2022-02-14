
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int bot_freq; } ;
struct TYPE_5__ {int* af_cache; } ;
struct TYPE_6__ {size_t afjump_idx; TYPE_1__ region; TYPE_2__ stat_info; } ;
struct fmdev {TYPE_3__ rx; } ;
typedef int payload ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fmdev*,int ) ;
 int FUNC_1 (struct fmdev*,int ,int ,int*,int,int *) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(struct fmdev *VAR_4)
{
 u16 VAR_5;
 u16 VAR_6;

 FUNC_2("Switch to %d KHz\n", VAR_4->rx.stat_info.af_cache[VAR_4->rx.afjump_idx]);
 VAR_5 = (VAR_4->rx.stat_info.af_cache[VAR_4->rx.afjump_idx] -
      VAR_4->rx.region.bot_freq) / VAR_2;

 VAR_6 = VAR_5;
 if (!FUNC_1(VAR_4, VAR_0, VAR_3, &VAR_6, sizeof(VAR_6), ((void*)0)))
  FUNC_0(VAR_4, VAR_1);
}
