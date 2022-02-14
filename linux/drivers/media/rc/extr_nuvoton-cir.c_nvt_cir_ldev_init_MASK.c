
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvt_dev {int cir_irq; int cir_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct nvt_dev*) ;
 int FUNC_1 (struct nvt_dev*,int) ;
 int FUNC_2 (struct nvt_dev*,int,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct nvt_dev*,int ) ;
 int FUNC_5 (struct nvt_dev*,int *) ;

__attribute__((used)) static void FUNC_6(struct nvt_dev *VAR_10)
{
 u8 VAR_11, VAR_12, VAR_13, VAR_14;

 if (FUNC_0(VAR_10)) {
  VAR_12 = VAR_1;
  VAR_13 = VAR_6;
  VAR_14 = VAR_4 | VAR_5;
 } else {
  VAR_12 = VAR_2;
  VAR_13 = VAR_9;
  VAR_14 = VAR_7 | VAR_8;
 }


 VAR_11 = FUNC_1(VAR_10, VAR_12);
 VAR_11 &= VAR_13;
 VAR_11 |= VAR_14;
 FUNC_2(VAR_10, VAR_11, VAR_12);


 FUNC_4(VAR_10, VAR_3);

 FUNC_5(VAR_10, &VAR_10->cir_addr);

 FUNC_2(VAR_10, VAR_10->cir_irq, VAR_0);

 FUNC_3("CIR initialized, base io port address: 0x%lx, irq: %d",
  VAR_10->cir_addr, VAR_10->cir_irq);
}
