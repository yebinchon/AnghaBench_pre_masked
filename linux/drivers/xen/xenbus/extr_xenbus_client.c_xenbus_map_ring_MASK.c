
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int dummy; } ;
typedef unsigned long phys_addr_t ;
typedef int grant_ref_t ;
typedef int grant_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xenbus_device*,int *,unsigned int,int *,unsigned long*,int ,int*) ;

int FUNC_1(struct xenbus_device *VAR_3, grant_ref_t *VAR_4,
      unsigned int VAR_5, grant_handle_t *VAR_6,
      unsigned long *VAR_7, bool *VAR_8)
{
 phys_addr_t VAR_9[VAR_2];
 int VAR_10;

 if (VAR_5 > VAR_2)
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
  VAR_9[VAR_10] = (unsigned long)VAR_7[VAR_10];

 return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_9, VAR_1, VAR_8);
}
