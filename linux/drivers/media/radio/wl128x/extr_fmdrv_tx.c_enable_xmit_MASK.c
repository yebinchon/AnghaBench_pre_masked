
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef void* u16 ;
struct fmtx_data {void* xmit_state; } ;
struct fmdev {int flag; int maintask_comp; struct fmtx_data tx_data; } ;
typedef int payload ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct fmdev*,int ,int ,void**,int,int *,int *) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 unsigned long FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct fmdev *VAR_7, u8 VAR_8)
{
 struct fmtx_data *VAR_9 = &VAR_7->tx_data;
 unsigned long VAR_10;
 u16 VAR_11;
 int VAR_12;


 VAR_11 = VAR_3;
 VAR_12 = FUNC_0(VAR_7, VAR_4, VAR_6, &VAR_11,
   sizeof(VAR_11), ((void*)0), ((void*)0));
 if (VAR_12 < 0)
  return VAR_12;


 VAR_11 = VAR_8;
 VAR_12 = FUNC_0(VAR_7, VAR_5, VAR_6, &VAR_11,
   sizeof(VAR_11), ((void*)0), ((void*)0));
 if (VAR_12 < 0)
  return VAR_12;


 FUNC_2(&VAR_7->maintask_comp);
 VAR_10 = FUNC_5(&VAR_7->maintask_comp,
   VAR_2);
 if (!VAR_10) {
  FUNC_1("Timeout(%d sec),didn't get tune ended interrupt\n",
      FUNC_3(VAR_2) / 1000);
  return -VAR_0;
 }

 FUNC_4(VAR_1, &VAR_7->flag);
 VAR_9->xmit_state = VAR_8;

 return 0;
}
