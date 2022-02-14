
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct enic {int vdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct enic*) ;
 int FUNC_2 (int ,int ,int *,int *,int) ;

int FUNC_3(struct enic *VAR_1, u16 VAR_2)
{
 u64 VAR_3 = VAR_2, VAR_4 = 0;
 int VAR_5 = 1000;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1->vdev, VAR_0, &VAR_3, &VAR_4, VAR_5);
 if (VAR_6)
  FUNC_0(FUNC_1(VAR_1), "Can't add vlan id, %d\n", VAR_6);

 return VAR_6;
}
