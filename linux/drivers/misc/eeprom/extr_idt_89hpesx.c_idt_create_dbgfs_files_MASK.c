
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct idt_89hpesx_dev {int csr_dir; struct i2c_client* client; } ;
struct i2c_client {int name; TYPE_1__* adapter; int addr; } ;
struct TYPE_2__ {int nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int,int ,struct idt_89hpesx_dev*,int *) ;
 int FUNC_2 (char*,int,char*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct idt_89hpesx_dev *VAR_3)
{
 struct i2c_client *VAR_4 = VAR_3->client;
 char VAR_5[VAR_0];


 FUNC_2(VAR_5, VAR_0, "%d-%04hx", VAR_4->adapter->nr, VAR_4->addr);
 VAR_3->csr_dir = FUNC_0(VAR_5, VAR_1);


 FUNC_1(VAR_4->name, 0600, VAR_3->csr_dir, VAR_3,
       &VAR_2);
}
