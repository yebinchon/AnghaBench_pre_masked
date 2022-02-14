
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_ntb_dev {int self_mmio; int hwerr_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct intel_ntb_dev*,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct intel_ntb_dev *VAR_5)
{
 int VAR_6;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_0(VAR_6, VAR_5->self_mmio + VAR_3 + VAR_6);


 if (VAR_5->hwerr_flags & VAR_4) {
  FUNC_0(VAR_0 - 2,
    VAR_5->self_mmio + VAR_3 +
    (VAR_0 - 1));
 }

 return FUNC_1(VAR_5, VAR_0,
        VAR_0,
        VAR_1,
        VAR_2);
}
