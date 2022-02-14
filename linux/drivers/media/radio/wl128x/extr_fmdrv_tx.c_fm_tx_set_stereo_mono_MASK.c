
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ aud_mode; } ;
struct fmdev {TYPE_1__ tx_data; } ;
typedef int payload ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fmdev*,int ,int ,scalar_t__*,int,int *,int *) ;
 int FUNC_1 (char*,scalar_t__) ;

int FUNC_2(struct fmdev *VAR_2, u16 VAR_3)
{
 u16 VAR_4;
 int VAR_5;

 if (VAR_2->tx_data.aud_mode == VAR_3)
  return 0;

 FUNC_1("stereo mode: %d\n", VAR_3);


 VAR_4 = (1 - VAR_3);
 VAR_5 = FUNC_0(VAR_2, VAR_0, VAR_1, &VAR_4,
   sizeof(VAR_4), ((void*)0), ((void*)0));
 if (VAR_5 < 0)
  return VAR_5;

 VAR_2->tx_data.aud_mode = VAR_3;

 return VAR_5;
}
