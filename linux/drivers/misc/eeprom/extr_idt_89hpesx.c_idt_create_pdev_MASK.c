
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idt_89hpesx_dev {scalar_t__ iniccode; int csr; int inicsrcmd; struct i2c_client* client; } ;
struct i2c_client {int flags; int adapter; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct idt_89hpesx_dev* FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct idt_89hpesx_dev* FUNC_1 (int *,int,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct i2c_client*,struct idt_89hpesx_dev*) ;
 int FUNC_4 (struct idt_89hpesx_dev*) ;

__attribute__((used)) static struct idt_89hpesx_dev *FUNC_5(struct i2c_client *VAR_7)
{
 struct idt_89hpesx_dev *VAR_8;


 VAR_8 = FUNC_1(&VAR_7->dev, sizeof(struct idt_89hpesx_dev),
  VAR_4);
 if (VAR_8 == ((void*)0))
  return FUNC_0(-VAR_3);


 VAR_8->client = VAR_7;
 FUNC_3(VAR_7, VAR_8);


 FUNC_4(VAR_8);


 VAR_8->inicsrcmd = VAR_2;
 VAR_8->csr = VAR_1;


 if (FUNC_2(VAR_7->adapter, VAR_6)) {
  VAR_8->iniccode = VAR_0;
  VAR_7->flags |= VAR_5;
 } else {
  VAR_8->iniccode = 0;
 }

 return VAR_8;
}
