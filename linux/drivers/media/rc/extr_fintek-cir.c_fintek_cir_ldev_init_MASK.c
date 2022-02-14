
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fintek_dev {int cir_addr; int cir_irq; int cir_port_len; int logical_dev_cir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fintek_dev*,int,int ) ;
 int FUNC_1 (struct fintek_dev*,int ) ;
 int FUNC_2 (char*,int,int,int ) ;

__attribute__((used)) static void FUNC_3(struct fintek_dev *VAR_5)
{

 FUNC_1(VAR_5, VAR_5->logical_dev_cir);
 FUNC_0(VAR_5, VAR_4, VAR_2);


 FUNC_0(VAR_5, VAR_5->cir_addr >> 8, VAR_0);
 FUNC_0(VAR_5, VAR_5->cir_addr & 0xff, VAR_1);

 FUNC_0(VAR_5, VAR_5->cir_irq, VAR_3);

 FUNC_2("CIR initialized, base io address: 0x%lx, irq: %d (len: %d)",
  VAR_5->cir_addr, VAR_5->cir_irq, VAR_5->cir_port_len);
}
