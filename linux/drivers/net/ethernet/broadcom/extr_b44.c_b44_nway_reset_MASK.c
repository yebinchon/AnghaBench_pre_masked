
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct b44 {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct b44*,int ,int*) ;
 int FUNC_1 (struct b44*,int ,int) ;
 struct b44* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4)
{
 struct b44 *VAR_5 = FUNC_2(VAR_4);
 u32 VAR_6;
 int VAR_7;

 FUNC_3(&VAR_5->lock);
 FUNC_0(VAR_5, VAR_3, &VAR_6);
 FUNC_0(VAR_5, VAR_3, &VAR_6);
 VAR_7 = -VAR_2;
 if (VAR_6 & VAR_0) {
  FUNC_1(VAR_5, VAR_3,
        VAR_6 | VAR_1);
  VAR_7 = 0;
 }
 FUNC_4(&VAR_5->lock);

 return VAR_7;
}
