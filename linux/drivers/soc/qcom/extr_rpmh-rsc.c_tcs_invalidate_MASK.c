
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcs_group {int offset; int num_tcs; int lock; int slots; } ;
struct rsc_drv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 struct tcs_group* FUNC_2 (struct rsc_drv*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rsc_drv*,int) ;
 int FUNC_6 (struct rsc_drv*,int ,int,int ) ;

__attribute__((used)) static int FUNC_7(struct rsc_drv *VAR_4, int VAR_5)
{
 int VAR_6;
 struct tcs_group *VAR_7;

 VAR_7 = FUNC_2(VAR_4, VAR_5);

 FUNC_3(&VAR_7->lock);
 if (FUNC_0(VAR_7->slots, VAR_1)) {
  FUNC_4(&VAR_7->lock);
  return 0;
 }

 for (VAR_6 = VAR_7->offset; VAR_6 < VAR_7->offset + VAR_7->num_tcs; VAR_6++) {
  if (!FUNC_5(VAR_4, VAR_6)) {
   FUNC_4(&VAR_7->lock);
   return -VAR_0;
  }
  FUNC_6(VAR_4, VAR_2, VAR_6, 0);
  FUNC_6(VAR_4, VAR_3, VAR_6, 0);
 }
 FUNC_1(VAR_7->slots, VAR_1);
 FUNC_4(&VAR_7->lock);

 return 0;
}
