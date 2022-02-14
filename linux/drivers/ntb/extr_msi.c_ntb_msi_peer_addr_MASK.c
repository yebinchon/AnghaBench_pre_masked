
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_msi_desc {scalar_t__ addr_offset; } ;
struct ntb_dev {int dummy; } ;
typedef scalar_t__ phys_addr_t ;


 int FUNC_0 (struct ntb_dev*) ;
 int FUNC_1 (struct ntb_dev*,int,scalar_t__*,int *) ;

int FUNC_2(struct ntb_dev *VAR_0, int VAR_1,
        struct ntb_msi_desc *VAR_2,
        phys_addr_t *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_0) - 1 - VAR_1;
 phys_addr_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_4, &VAR_5, ((void*)0));
 if (VAR_6)
  return VAR_6;

 if (VAR_3)
  *VAR_3 = VAR_5 + VAR_2->addr_offset;

 return 0;
}
