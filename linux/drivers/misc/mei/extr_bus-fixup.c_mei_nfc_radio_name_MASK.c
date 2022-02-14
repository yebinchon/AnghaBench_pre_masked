
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_nfc_if_version {scalar_t__ vendor_id; scalar_t__ radio_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static const char *FUNC_0(struct mei_nfc_if_version *VAR_4)
{

 if (VAR_4->vendor_id == VAR_0) {
  if (VAR_4->radio_type == VAR_1)
   return "microread";
 }

 if (VAR_4->vendor_id == VAR_2) {
  if (VAR_4->radio_type == VAR_3)
   return "pn544";
 }

 return ((void*)0);
}
