
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_dev {int devcmd_rtn; int devcmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vnic_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct vnic_dev *VAR_3)
{
 VAR_3->devcmd = FUNC_0(VAR_3, VAR_1, 0);
 if (!VAR_3->devcmd)
  return -VAR_0;
 VAR_3->devcmd_rtn = VAR_2;

 return 0;
}
