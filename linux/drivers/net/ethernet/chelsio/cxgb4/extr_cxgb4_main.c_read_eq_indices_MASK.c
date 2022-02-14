
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct adapter {int win0_lock; } ;
typedef int indices ;
typedef int __be64 ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct adapter*,int ,int ,scalar_t__,int,int *,int ) ;
 scalar_t__ FUNC_4 (struct adapter*,int ) ;

__attribute__((used)) static int FUNC_5(struct adapter *VAR_3, u16 VAR_4, u16 *VAR_5, u16 *VAR_6)
{
 u32 VAR_7 = FUNC_4(VAR_3, VAR_1) + 24 * VAR_4 + 8;
 __be64 VAR_8;
 int VAR_9;

 FUNC_1(&VAR_3->win0_lock);
 VAR_9 = FUNC_3(VAR_3, 0, VAR_0, VAR_7,
      sizeof(VAR_8), (__be32 *)&VAR_8,
      VAR_2);
 FUNC_2(&VAR_3->win0_lock);
 if (!VAR_9) {
  *VAR_6 = (FUNC_0(VAR_8) >> 25) & 0xffff;
  *VAR_5 = (FUNC_0(VAR_8) >> 9) & 0xffff;
 }
 return VAR_9;
}
