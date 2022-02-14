
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enic {int vdev; } ;





 int FUNC_0 () ;
 int FUNC_1 (struct enic*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline bool FUNC_3(struct enic *VAR_0, int VAR_1)
{
 switch (FUNC_2(VAR_0->vdev)) {
 case 130:
  return VAR_1 == FUNC_0();
 case 128:
  return VAR_1 == FUNC_1(VAR_0);
 case 129:
 default:
  return 0;
 }
}
