
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ene_device {int saved_conf1; scalar_t__ hw_revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ene_device*,int ) ;
 int FUNC_2 (struct ene_device*,int ,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct ene_device *VAR_8)
{
 u8 VAR_9 = FUNC_1(VAR_8, VAR_0);
 u8 VAR_10 = FUNC_1(VAR_8, VAR_4);

 VAR_8->saved_conf1 = VAR_9;


 if (VAR_10 & VAR_5)
  FUNC_0("TX: Transmitter #1 is connected");

 if (VAR_10 & VAR_6)
  FUNC_0("TX: Transmitter #2 is connected");

 if (!(VAR_10 & (VAR_5 | VAR_6)))
  FUNC_3("TX: transmitter cable isn't connected!\n");


 if (VAR_8->hw_revision == VAR_7)
  VAR_9 &= ~VAR_1;


 VAR_9 |= VAR_2 | VAR_3;
 FUNC_2(VAR_8, VAR_0, VAR_9);
}
