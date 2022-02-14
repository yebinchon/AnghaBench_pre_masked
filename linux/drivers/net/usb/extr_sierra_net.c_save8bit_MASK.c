
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct param {int is_present; int byte; } ;



__attribute__((used)) static const u8 *FUNC_0(struct param *VAR_0, const u8 *VAR_1)
{
 VAR_0->is_present = 1;
 VAR_0->byte = *VAR_1;
 return VAR_1 + sizeof(VAR_0->byte);
}
