
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int length; scalar_t__ pointer; } ;
union acpi_object {scalar_t__ type; TYPE_1__ buffer; } ;
typedef int u32 ;
struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
typedef scalar_t__ acpi_status ;
struct TYPE_7__ {int swbit; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;



 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;







 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__* VAR_12 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (union acpi_object*) ;
 int FUNC_8 (char*,...) ;
 int VAR_13 ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (TYPE_2__*,int,int,int) ;
 int FUNC_11 (int ,int ) ;
 int VAR_14 ;
 scalar_t__ FUNC_12 (int,struct acpi_buffer*) ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_13(u32 VAR_16, void *VAR_17)
{
 struct acpi_buffer VAR_18 = { VAR_0, ((void*)0) };
 u32 VAR_19, VAR_20;
 union acpi_object *VAR_21;
 acpi_status VAR_22;
 u32 *VAR_23;
 int VAR_24;

 VAR_22 = FUNC_12(VAR_16, &VAR_18);
 if (VAR_22 != VAR_2) {
  FUNC_8("bad event status 0x%x\n", VAR_22);
  return;
 }

 VAR_21 = (union acpi_object *)VAR_18.pointer;

 if (!VAR_21)
  return;
 if (VAR_21->type != VAR_1) {
  FUNC_8("Unknown response received %d\n", VAR_21->type);
  FUNC_7(VAR_21);
  return;
 }





 VAR_23 = (u32 *)VAR_21->buffer.pointer;
 if (VAR_21->buffer.length == 8) {
  VAR_19 = *VAR_23;
  VAR_20 = *(VAR_23 + 1);
 } else if (VAR_21->buffer.length == 16) {
  VAR_19 = *VAR_23;
  VAR_20 = *(VAR_23 + 2);
 } else {
  FUNC_8("Unknown buffer length %d\n", VAR_21->buffer.length);
  FUNC_7(VAR_21);
  return;
 }
 FUNC_7(VAR_21);

 switch (VAR_19) {
 case 136:
  if (FUNC_11(VAR_9, VAR_12->swbit))
   FUNC_5(VAR_12, VAR_9,
         FUNC_2(VAR_4));
  if (FUNC_11(VAR_10, VAR_12->swbit))
   FUNC_5(VAR_12, VAR_10,
         FUNC_2(VAR_6));
  FUNC_6(VAR_12);
  break;
 case 133:
  break;
 case 129:
  break;
 case 140:
  VAR_24 = FUNC_3(VAR_5);
  if (VAR_24 < 0)
   break;

  if (!FUNC_10(VAR_12,
      VAR_24, 1, 1))
   FUNC_8("Unknown key code - 0x%x\n", VAR_24);
  break;
 case 128:
  if (VAR_13) {
   FUNC_4();
   break;
  }

  if (VAR_14)
   FUNC_9(VAR_14,
       FUNC_1(VAR_7),
       FUNC_0(VAR_7));
  if (VAR_11)
   FUNC_9(VAR_11,
       FUNC_1(VAR_3),
       FUNC_0(VAR_3));
  if (VAR_15)
   FUNC_9(VAR_15,
       FUNC_1(VAR_8),
       FUNC_0(VAR_8));
  break;
 case 137:
  FUNC_8("Unimplemented CPU throttle because of 3 Cell battery event detected\n");
  break;
 case 134:
  break;
 case 135:
  break;
 case 130:
  break;
 case 138:
  break;
 case 139:
  break;
 case 131:
  break;
 case 142:
  break;
 case 132:
  break;
 case 141:
  break;
 default:
  FUNC_8("Unknown event_id - %d - 0x%x\n", VAR_19, VAR_20);
  break;
 }
}
