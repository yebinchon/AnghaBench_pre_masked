
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fmtx_data {int preemph; } ;
struct fmdev {scalar_t__ curr_fmmode; struct fmtx_data tx_data; } ;
typedef int payload ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_0 (struct fmdev*,int ,int ,int *,int,int *,int *) ;

int FUNC_1(struct fmdev *VAR_7, u32 VAR_8)
{
 struct fmtx_data *VAR_9 = &VAR_7->tx_data;
 u16 VAR_10;
 int VAR_11;

 if (VAR_7->curr_fmmode != VAR_1)
  return -VAR_0;

 switch (VAR_8) {
 case 128:
  VAR_10 = VAR_4;
  break;
 case 130:
  VAR_10 = VAR_2;
  break;
 case 129:
  VAR_10 = VAR_3;
  break;
 }

 VAR_11 = FUNC_0(VAR_7, VAR_5, VAR_6, &VAR_10,
   sizeof(VAR_10), ((void*)0), ((void*)0));
 if (VAR_11 < 0)
  return VAR_11;

 VAR_9->preemph = VAR_10;

 return VAR_11;
}
