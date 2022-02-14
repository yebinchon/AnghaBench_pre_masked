
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef void* u16 ;
struct fmtx_data {void* pwr_lvl; } ;
struct fmdev {scalar_t__ curr_fmmode; int flag; struct fmtx_data tx_data; } ;
typedef int payload ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct fmdev*,int ,int ,void**,int,int *,int *) ;
 int FUNC_1 (char*,long) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct fmdev *VAR_6, u8 VAR_7)
{
 u16 VAR_8;
 struct fmtx_data *VAR_9 = &VAR_6->tx_data;
 int VAR_10;

 if (VAR_6->curr_fmmode != VAR_2)
  return -VAR_0;
 FUNC_1("tx: pwr_level_to_set %ld\n", (long int)VAR_7);


 if (!FUNC_2(VAR_1, &VAR_6->flag)) {
  VAR_9->pwr_lvl = VAR_7;
  return 0;
 }
 VAR_8 = (VAR_3 - VAR_7);
 VAR_10 = FUNC_0(VAR_6, VAR_4, VAR_5, &VAR_8,
   sizeof(VAR_8), ((void*)0), ((void*)0));
 if (VAR_10 < 0)
  return VAR_10;


 VAR_9->pwr_lvl = VAR_7;

 return 0;
}
