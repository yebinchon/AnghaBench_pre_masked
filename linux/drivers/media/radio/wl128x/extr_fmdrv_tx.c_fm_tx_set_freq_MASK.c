
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int flag; } ;
struct fmtx_data {unsigned long tx_frq; int audio_io; TYPE_1__ rds; int aud_mode; int preemph; int pwr_lvl; } ;
struct fmdev {int flag; struct fmtx_data tx_data; } ;
typedef int payload ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct fmdev*,int) ;
 int FUNC_2 (struct fmdev*,int ) ;
 int FUNC_3 (struct fmdev*,int ) ;
 int FUNC_4 (struct fmdev*,int ,int ,int*,int,int *,int *) ;
 int FUNC_5 (char*,long) ;
 int FUNC_6 (struct fmdev*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

int FUNC_8(struct fmdev *VAR_8, u32 VAR_9)
{
 struct fmtx_data *VAR_10 = &VAR_8->tx_data;
 u16 VAR_11, VAR_12;
 int VAR_13;

 if (FUNC_7(VAR_2, &VAR_8->flag)) {
  FUNC_1(VAR_8, 0);
  FUNC_0(VAR_2, &VAR_8->flag);
 }


 VAR_11 = (VAR_3 | VAR_1);
 VAR_13 = FUNC_4(VAR_8, VAR_6, VAR_7, &VAR_11,
   sizeof(VAR_11), ((void*)0), ((void*)0));
 if (VAR_13 < 0)
  return VAR_13;

 VAR_10->tx_frq = (unsigned long)VAR_9;
 FUNC_5("tx: freq_to_set %ld\n", (long int)VAR_10->tx_frq);

 VAR_12 = VAR_9 / 10;


 VAR_11 = VAR_12;
 VAR_13 = FUNC_4(VAR_8, VAR_0, VAR_7, &VAR_11,
   sizeof(VAR_11), ((void*)0), ((void*)0));
 if (VAR_13 < 0)
  return VAR_13;

 FUNC_3(VAR_8, VAR_10->pwr_lvl);
 FUNC_2(VAR_8, VAR_10->preemph);

 VAR_10->audio_io = 0x01;
 FUNC_6(VAR_8);

 FUNC_1(VAR_8, 0x01);

 VAR_10->aud_mode = VAR_5;
 VAR_10->rds.flag = VAR_4;

 return 0;
}
