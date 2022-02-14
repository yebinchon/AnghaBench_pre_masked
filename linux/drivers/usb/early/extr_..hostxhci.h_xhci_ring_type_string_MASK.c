
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum xhci_ring_type { ____Placeholder_xhci_ring_type } xhci_ring_type ;
__attribute__((used)) static inline const char *FUNC_0(enum xhci_ring_type VAR_0)
{
 switch (VAR_0) {
 case 132:
  return "CTRL";
 case 129:
  return "ISOC";
 case 134:
  return "BULK";
 case 130:
  return "INTR";
 case 128:
  return "STREAM";
 case 133:
  return "CMD";
 case 131:
  return "EVENT";
 }

 return "UNKNOWN";
}
