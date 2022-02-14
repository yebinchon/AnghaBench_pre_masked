
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int domain; int area; int al_pa; } ;
typedef TYPE_1__ be_id_t ;



__attribute__((used)) static inline uint32_t FUNC_0(const be_id_t VAR_0)
{
 return VAR_0.domain << 16 |
  VAR_0.area << 8 |
  VAR_0.al_pa;
}
