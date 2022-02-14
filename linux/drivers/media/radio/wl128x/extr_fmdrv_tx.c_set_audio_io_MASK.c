
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fmtx_data {int audio_io; } ;
struct fmdev {struct fmtx_data tx_data; } ;
typedef int payload ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fmdev*,int ,int ,int *,int,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct fmdev *VAR_2)
{
 struct fmtx_data *VAR_3 = &VAR_2->tx_data;
 u16 VAR_4;
 int VAR_5;


 VAR_4 = VAR_3->audio_io;
 VAR_5 = FUNC_0(VAR_2, VAR_0, VAR_1, &VAR_4,
   sizeof(VAR_4), ((void*)0), ((void*)0));
 if (VAR_5 < 0)
  return VAR_5;


 return 0;
}
