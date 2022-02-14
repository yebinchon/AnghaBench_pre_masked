
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iss_csi2_device {int regs1; int iss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct iss_csi2_device *VAR_9, int VAR_10)
{
 u32 VAR_11;

 VAR_11 = VAR_7 |
  VAR_8 |
  VAR_4 |
  VAR_5 |
  VAR_2 |
  VAR_6 |
  VAR_3;
 FUNC_1(VAR_9->iss, VAR_9->regs1, VAR_1, VAR_11);
 if (VAR_10)
  FUNC_0(VAR_9->iss, VAR_9->regs1, VAR_0, VAR_11);
 else
  FUNC_1(VAR_9->iss, VAR_9->regs1, VAR_0, 0);
}
