
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds1286_priv {int lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 struct ds1286_priv* FUNC_0 (struct device*) ;
 unsigned char FUNC_1 (struct ds1286_priv*,int ) ;
 int FUNC_2 (struct ds1286_priv*,unsigned char,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2, unsigned int VAR_3)
{
 struct ds1286_priv *VAR_4 = FUNC_0(VAR_2);
 unsigned long VAR_5;
 unsigned char VAR_6;


 FUNC_3(&VAR_4->lock, VAR_5);
 VAR_6 = FUNC_1(VAR_4, VAR_0);
 if (VAR_3)
  VAR_6 &= ~VAR_1;
 else
  VAR_6 |= VAR_1;
 FUNC_2(VAR_4, VAR_6, VAR_0);
 FUNC_4(&VAR_4->lock, VAR_5);

 return 0;
}
