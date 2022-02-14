
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atmel_nfc_op {int errors; int wait; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct atmel_nfc_op *VAR_1, u32 VAR_2)
{
 VAR_1->errors |= VAR_2 & VAR_0;
 VAR_1->wait ^= VAR_2 & VAR_1->wait;

 return !VAR_1->wait || VAR_1->errors;
}
