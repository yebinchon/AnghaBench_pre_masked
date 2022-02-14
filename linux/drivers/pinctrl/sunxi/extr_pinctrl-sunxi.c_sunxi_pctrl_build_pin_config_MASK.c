
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 unsigned long* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long* FUNC_1 (unsigned int,int,int ) ;
 int FUNC_2 (unsigned long*) ;
 unsigned long FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (struct device_node*) ;
 scalar_t__ FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct device_node*) ;
 int FUNC_7 (struct device_node*) ;

__attribute__((used)) static unsigned long *FUNC_8(struct device_node *VAR_4,
         unsigned int *VAR_5)
{
 unsigned long *VAR_6;
 unsigned int VAR_7 = 0, VAR_8 = 0;
 int VAR_9;

 if (FUNC_5(VAR_4))
  VAR_7++;
 if (FUNC_4(VAR_4))
  VAR_7++;




 if (!VAR_7)
  return ((void*)0);

 VAR_6 = FUNC_1(VAR_7, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 if (FUNC_5(VAR_4)) {
  int VAR_10 = FUNC_7(VAR_4);
  if (VAR_10 < 0) {
   VAR_9 = VAR_10;
   goto err_free;
  }

  VAR_6[VAR_8++] = FUNC_3(VAR_3,
         VAR_10);
 }

 if (FUNC_4(VAR_4)) {
  int VAR_11 = FUNC_6(VAR_4);
  int VAR_12 = 0;
  if (VAR_11 < 0) {
   VAR_9 = VAR_11;
   goto err_free;
  }

  if (VAR_11 != VAR_2)
   VAR_12 = 1;

  VAR_6[VAR_8++] = FUNC_3(VAR_11, VAR_12);
 }


 *VAR_5 = VAR_7;
 return VAR_6;

err_free:
 FUNC_2(VAR_6);
 return FUNC_0(VAR_9);
}
