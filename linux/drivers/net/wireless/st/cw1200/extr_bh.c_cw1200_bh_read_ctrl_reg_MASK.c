
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct cw1200_common {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cw1200_common*,int ,int *) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct cw1200_common *VAR_1,
       u16 *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1,
   VAR_0, VAR_2);
 if (VAR_3) {
  VAR_3 = FUNC_0(VAR_1,
    VAR_0, VAR_2);
  if (VAR_3)
   FUNC_1("[BH] Failed to read control register.\n");
 }

 return VAR_3;
}
