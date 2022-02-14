
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3cdev {int name; } ;
struct sk_buff {int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct t3cdev *VAR_2, struct sk_buff *VAR_3)
{
 FUNC_0("%s: received bad CPL command 0x%x\n", VAR_2->name, *VAR_3->data);
 return VAR_1 | VAR_0;
}
