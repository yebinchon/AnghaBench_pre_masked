
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stih_cec {scalar_t__ regs; } ;
struct cec_msg {int len; int * msg; } ;
struct cec_adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct stih_cec* FUNC_0 (struct cec_adapter*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct cec_adapter *VAR_5, u8 VAR_6,
      u32 VAR_7, struct cec_msg *VAR_8)
{
 struct stih_cec *VAR_9 = FUNC_0(VAR_5);
 int VAR_10;


 for (VAR_10 = 0; VAR_10 < VAR_8->len; VAR_10++)
  FUNC_1(VAR_8->msg[VAR_10], VAR_9->regs + VAR_3 + VAR_10);





 FUNC_2(VAR_2 | VAR_1 | VAR_4 |
        VAR_8->len, VAR_9->regs + VAR_0);

 return 0;
}
