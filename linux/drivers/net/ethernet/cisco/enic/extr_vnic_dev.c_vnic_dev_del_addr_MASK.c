
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct vnic_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vnic_dev*,char*,int const*,int) ;
 int FUNC_1 (struct vnic_dev*,int ,scalar_t__*,scalar_t__*,int) ;

int FUNC_2(struct vnic_dev *VAR_2, const u8 *VAR_3)
{
 u64 VAR_4 = 0, VAR_5 = 0;
 int VAR_6 = 1000;
 int VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  ((u8 *)&VAR_4)[VAR_8] = VAR_3[VAR_8];

 VAR_7 = FUNC_1(VAR_2, VAR_0, &VAR_4, &VAR_5, VAR_6);
 if (VAR_7)
  FUNC_0(VAR_2, "Can't del addr [%pM], %d\n", VAR_3, VAR_7);

 return VAR_7;
}
