
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_event_devt {int event_info; int type; } ;
typedef enum dwc3_link_state { ____Placeholder_dwc3_link_state } dwc3_link_state ;
 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,size_t,char*,...) ;

__attribute__((used)) static inline const char *FUNC_2(char *VAR_1, size_t VAR_2,
  const struct dwc3_event_devt *VAR_3)
{
 enum dwc3_link_state VAR_4 = VAR_3->event_info & VAR_0;

 switch (VAR_3->type) {
 case 135:
  FUNC_1(VAR_1, VAR_2, "Disconnect: [%s]",
    FUNC_0(VAR_4));
  break;
 case 130:
  FUNC_1(VAR_1, VAR_2, "Reset [%s]",
    FUNC_0(VAR_4));
  break;
 case 136:
  FUNC_1(VAR_1, VAR_2, "Connection Done [%s]",
    FUNC_0(VAR_4));
  break;
 case 132:
  FUNC_1(VAR_1, VAR_2, "Link Change [%s]",
    FUNC_0(VAR_4));
  break;
 case 128:
  FUNC_1(VAR_1, VAR_2, "WakeUp [%s]",
    FUNC_0(VAR_4));
  break;
 case 134:
  FUNC_1(VAR_1, VAR_2, "End-Of-Frame [%s]",
    FUNC_0(VAR_4));
  break;
 case 129:
  FUNC_1(VAR_1, VAR_2, "Start-Of-Frame [%s]",
    FUNC_0(VAR_4));
  break;
 case 133:
  FUNC_1(VAR_1, VAR_2, "Erratic Error [%s]",
    FUNC_0(VAR_4));
  break;
 case 137:
  FUNC_1(VAR_1, VAR_2, "Command Complete [%s]",
    FUNC_0(VAR_4));
  break;
 case 131:
  FUNC_1(VAR_1, VAR_2, "Overflow [%s]",
    FUNC_0(VAR_4));
  break;
 default:
  FUNC_1(VAR_1, VAR_2, "UNKNOWN");
 }

 return VAR_1;
}
