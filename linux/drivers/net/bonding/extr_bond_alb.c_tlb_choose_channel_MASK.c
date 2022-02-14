
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct slave {int dummy; } ;
struct bonding {int mode_lock; } ;


 struct slave* FUNC_0 (struct bonding*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct slave *FUNC_3(struct bonding *VAR_0, u32 VAR_1,
     u32 VAR_2)
{
 struct slave *VAR_3;





 FUNC_1(&VAR_0->mode_lock);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->mode_lock);

 return VAR_3;
}
