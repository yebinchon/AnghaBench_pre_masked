
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct cas {int pause_last_time_recvd; int pause_entered; int dev; scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cas*,int ,int ,int ,char*,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_5, struct cas *VAR_6,
        u32 VAR_7)
{
 u32 VAR_8 = FUNC_1(VAR_6->regs + VAR_3);

 if (!VAR_8)
  return 0;

 FUNC_0(VAR_6, VAR_4, VAR_0, VAR_6->dev,
       "mac interrupt, stat: 0x%x\n", VAR_8);





 if (VAR_8 & VAR_2)
  VAR_6->pause_entered++;

 if (VAR_8 & VAR_1)
  VAR_6->pause_last_time_recvd = (VAR_8 >> 16);

 return 0;
}
