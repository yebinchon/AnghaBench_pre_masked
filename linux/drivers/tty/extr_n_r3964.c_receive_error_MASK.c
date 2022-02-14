
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r3964_info {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;






__attribute__((used)) static void FUNC_1(struct r3964_info *VAR_5, const char VAR_6)
{
 switch (VAR_6) {
 case 130:
  break;
 case 132:
  FUNC_0("received break");
  VAR_5->flags |= VAR_0;
  break;
 case 128:
  FUNC_0("parity error");
  VAR_5->flags |= VAR_3;
  break;
 case 131:
  FUNC_0("frame error");
  VAR_5->flags |= VAR_1;
  break;
 case 129:
  FUNC_0("frame overrun");
  VAR_5->flags |= VAR_2;
  break;
 default:
  FUNC_0("receive_error - unknown flag %d", VAR_6);
  VAR_5->flags |= VAR_4;
  break;
 }
}
