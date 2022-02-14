
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vnic_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct vnic_dev*,char*) ;
 int FUNC_1 (struct vnic_dev*,int ,int*,int*,int) ;

int FUNC_2(struct vnic_dev *VAR_6, int VAR_7, int VAR_8,
 int VAR_9, int VAR_10, int VAR_11)
{
 u64 VAR_12, VAR_13 = 0;
 int VAR_14 = 1000;
 int VAR_15;

 VAR_12 = (VAR_7 ? VAR_3 : 0) |
      (VAR_8 ? VAR_4 : 0) |
      (VAR_9 ? VAR_2 : 0) |
      (VAR_10 ? VAR_5 : 0) |
      (VAR_11 ? VAR_1 : 0);

 VAR_15 = FUNC_1(VAR_6, VAR_0, &VAR_12, &VAR_13, VAR_14);
 if (VAR_15)
  FUNC_0(VAR_6, "Can't set packet filter\n");

 return VAR_15;
}
