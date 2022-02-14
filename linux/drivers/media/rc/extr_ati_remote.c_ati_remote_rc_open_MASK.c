
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {struct ati_remote* priv; } ;
struct ati_remote {int dummy; } ;


 int FUNC_0 (struct ati_remote*) ;

__attribute__((used)) static int FUNC_1(struct rc_dev *VAR_0)
{
 struct ati_remote *VAR_1 = VAR_0->priv;
 return FUNC_0(VAR_1);
}
