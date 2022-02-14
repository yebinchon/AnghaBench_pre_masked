
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct vnic_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct vnic_dev*,int ) ;
 int FUNC_1 (struct vnic_dev*,int ,int*,int*,int) ;

int FUNC_2(struct vnic_dev *VAR_5, int VAR_6)
{
 u64 VAR_7 = (u32)VAR_6, VAR_8 = 0;
 int VAR_9 = 1000;
 int VAR_10 = 0;

 if (FUNC_0(VAR_5, VAR_2))
  VAR_10 = FUNC_1(VAR_5, VAR_2, &VAR_7, &VAR_8, VAR_9);
 else {
  FUNC_1(VAR_5, VAR_4, &VAR_7, &VAR_8, VAR_9);
  if (VAR_7 & VAR_3) {



   FUNC_1(VAR_5, VAR_1, &VAR_7, &VAR_8, VAR_9);
   FUNC_1(VAR_5, VAR_0, &VAR_7, &VAR_8, VAR_9);
  }
 }
 return VAR_10;
}
