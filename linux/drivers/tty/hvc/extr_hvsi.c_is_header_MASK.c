
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct hvsi_header {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const uint8_t *VAR_1)
{
 struct hvsi_header *VAR_2 = (struct hvsi_header *)VAR_1;
 return VAR_2->type >= VAR_0;
}
