
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct fnic {int vdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__*,scalar_t__*,int) ;
 int FUNC_1 (scalar_t__*,int ,int ,int ,int ,int ,int ,int ) ;

int FUNC_2(struct fnic *VAR_1, u8 VAR_2,
   u8 VAR_3,
   u8 VAR_4, u8 VAR_5, u8 VAR_6,
   u8 VAR_7, u8 VAR_8)
{
 u64 VAR_9, VAR_10;
 u32 VAR_11;
 int VAR_12 = 1000;

 FUNC_1(&VAR_11, VAR_2,
  VAR_3, VAR_4, VAR_5,
  VAR_6, VAR_7, VAR_8);

 VAR_9 = VAR_11;
 VAR_10 = 0;

 return FUNC_0(VAR_1->vdev, VAR_0, &VAR_9, &VAR_10, VAR_12);
}
