
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_info {int lock; int wlc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct brcms_info *VAR_0)
{
 bool VAR_1;

 FUNC_1(&VAR_0->lock);
 VAR_1 = FUNC_0(VAR_0->wlc);
 FUNC_2(&VAR_0->lock);
 return VAR_1;
}
