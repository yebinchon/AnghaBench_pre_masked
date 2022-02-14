
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bbc_i2c_bus {int waiting; int wq; scalar_t__ i2c_control_regs; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int *) ;
 int VAR_2 ;
 long FUNC_5 (int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct bbc_i2c_bus *VAR_3, u8 *VAR_4)
{
 FUNC_0(VAR_2, VAR_1);
 int VAR_5 = 32;
 int VAR_6 = 1;

 VAR_3->waiting = 1;
 FUNC_1(&VAR_3->wq, &VAR_2);
 while (VAR_5-- > 0) {
  long VAR_7;

  VAR_7 = FUNC_5(
    VAR_3->wq,
    (((*VAR_4 = FUNC_3(VAR_3->i2c_control_regs + 0))
      & VAR_0) == 0),
    FUNC_2(250));
  if (VAR_7 > 0) {
   VAR_6 = 0;
   break;
  }
 }
 FUNC_4(&VAR_3->wq, &VAR_2);
 VAR_3->waiting = 0;

 return VAR_6;
}
