
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvt_dev {int cir_wake_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct nvt_dev*,int ,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct nvt_dev*,int ) ;
 int FUNC_3 (struct nvt_dev*,int *) ;
 int FUNC_4 (struct nvt_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct nvt_dev *VAR_8)
{

 FUNC_2(VAR_8, VAR_4);
 FUNC_0(VAR_8, VAR_6, VAR_3);


 FUNC_4(VAR_8, VAR_0, VAR_1);


 FUNC_4(VAR_8, VAR_7, VAR_2);


 FUNC_2(VAR_8, VAR_5);

 FUNC_3(VAR_8, &VAR_8->cir_wake_addr);

 FUNC_1("CIR Wake initialized, base io port address: 0x%lx",
  VAR_8->cir_wake_addr);
}
