
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ssbi {int (* read ) (struct ssbi*,int ,int *,int) ;int lock; } ;
struct device {int dummy; } ;


 struct ssbi* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct ssbi*,int ,int *,int) ;

int FUNC_4(struct device *VAR_0, u16 VAR_1, u8 *VAR_2, int VAR_3)
{
 struct ssbi *VAR_4 = FUNC_0(VAR_0);
 unsigned long VAR_5;
 int VAR_6;

 FUNC_1(&VAR_4->lock, VAR_5);
 VAR_6 = VAR_4->read(VAR_4, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_4->lock, VAR_5);

 return VAR_6;
}
