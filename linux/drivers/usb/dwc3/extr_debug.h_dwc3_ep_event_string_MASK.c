
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dwc3_event_depevt {int endpoint_number; int status; int endpoint_event; int parameters; } ;



 int FUNC_0 (int) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,size_t,char*,...) ;
 size_t FUNC_3 (char*) ;

__attribute__((used)) static inline const char *FUNC_4(char *VAR_4, size_t VAR_5,
  const struct dwc3_event_depevt *VAR_6, u32 VAR_7)
{
 u8 VAR_8 = VAR_6->endpoint_number;
 size_t VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_4, VAR_5, "ep%d%s: ", VAR_8 >> 1,
   (VAR_8 & 1) ? "in" : "out");
 if (VAR_11 < 0)
  return "UNKNOWN";

 VAR_10 = VAR_6->status;

 switch (VAR_6->endpoint_event) {
 case 130:
  VAR_9 = FUNC_3(VAR_4);
  FUNC_2(VAR_4 + VAR_9, VAR_5 - VAR_9, "Transfer Complete (%c%c%c)",
    VAR_10 & VAR_2 ? 'S' : 's',
    VAR_10 & VAR_0 ? 'I' : 'i',
    VAR_10 & VAR_1 ? 'L' : 'l');

  VAR_9 = FUNC_3(VAR_4);

  if (VAR_8 <= 1)
   FUNC_2(VAR_4 + VAR_9, VAR_5 - VAR_9, " [%s]",
     FUNC_1(VAR_7));
  break;
 case 129:
  VAR_9 = FUNC_3(VAR_4);

  FUNC_2(VAR_4 + VAR_9, VAR_5 - VAR_9, "Transfer In Progress [%d] (%c%c%c)",
    VAR_6->parameters,
    VAR_10 & VAR_2 ? 'S' : 's',
    VAR_10 & VAR_0 ? 'I' : 'i',
    VAR_10 & VAR_1 ? 'M' : 'm');
  break;
 case 128:
  VAR_9 = FUNC_3(VAR_4);

  FUNC_2(VAR_4 + VAR_9, VAR_5 - VAR_9, "Transfer Not Ready [%d]%s",
    VAR_6->parameters,
    VAR_10 & VAR_3 ?
    " (Active)" : " (Not Active)");

  VAR_9 = FUNC_3(VAR_4);


  if (VAR_8 <= 1) {
   int VAR_12 = FUNC_0(VAR_6->status);

   switch (VAR_12) {
   case 137:
    FUNC_2(VAR_4 + VAR_11, VAR_5 - VAR_11,
      " [Data Phase]");
    break;
   case 136:
    FUNC_2(VAR_4 + VAR_11, VAR_5 - VAR_11,
      " [Status Phase]");
   }
  }
  break;
 case 132:
  FUNC_2(VAR_4 + VAR_11, VAR_5 - VAR_11, "FIFO");
  break;
 case 131:
  VAR_10 = VAR_6->status;

  switch (VAR_10) {
  case 135:
   FUNC_2(VAR_4 + VAR_11, VAR_5 - VAR_11, " Stream %d Found",
     VAR_6->parameters);
   break;
  case 134:
  default:
   FUNC_2(VAR_4 + VAR_11, VAR_5 - VAR_11, " Stream Not Found");
   break;
  }

  break;
 case 133:
  FUNC_2(VAR_4 + VAR_11, VAR_5 - VAR_11, "Endpoint Command Complete");
  break;
 default:
  FUNC_2(VAR_4, VAR_5, "UNKNOWN");
 }

 return VAR_4;
}
