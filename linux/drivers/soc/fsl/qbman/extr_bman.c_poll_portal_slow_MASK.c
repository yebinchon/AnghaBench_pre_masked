
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bman_portal {int p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static u32 FUNC_4(struct bman_portal *VAR_2, u32 VAR_3)
{
 u32 VAR_4 = VAR_3;

 if (VAR_3 & VAR_0) {
  FUNC_2(&VAR_2->p);
  FUNC_3(&VAR_2->p, 0);
  FUNC_1(&VAR_2->p, VAR_1, VAR_0);
  VAR_3 &= ~VAR_0;
 }


 FUNC_0(!VAR_3);
 return VAR_4;
}
